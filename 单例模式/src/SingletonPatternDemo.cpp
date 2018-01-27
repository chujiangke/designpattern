#include <pthread.h>
#include <string.h>
#include <iostream>

using namespace std;
class singleton
{
protected:
    singleton()
    {
        pthread_mutex_init(&mutex, NULL);
    }
private:
    static singleton* p;
public:
    static pthread_mutex_t mutex;
    static singleton* initance();
};

pthread_mutex_t singleton::mutex;
singleton* singleton::p = NULL;
singleton* singleton::initance()
{
    if (p == NULL)
    {
        pthread_mutex_lock(&mutex);
        if (p == NULL)
            p = new singleton();
        pthread_mutex_unlock(&mutex);
    }
    return p;
}

int main()
{
    singleton* singleton_first = singleton::initance();
    singleton* singleton_second = singleton::initance();
    if( singleton_first == singleton_second )
    {
        cout<<"singleton_first singleton_second same address"<<endl;
    }
    return 0;

}