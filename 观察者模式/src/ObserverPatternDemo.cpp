#include <iostream>
#include <string>
#include "Observer.h"
#include "Subject.h"
#include "ConcreteObserver.h"
#include "ConcreteObserver1.h"
#include "ConcreteObserver2.h"

using namespace std;
int main()
{
  Subject *subject  = new Subject();
  subject->setState(0);
  ConcreteObserver *observer = new ConcreteObserver(subject);
  ConcreteObserver1 *observer1 = new ConcreteObserver1(subject);
  ConcreteObserver2 *observer2 = new ConcreteObserver2(subject);

  subject->attach(observer);
  subject->attach(observer1);
  subject->attach(observer2);

  subject->setState(1);
  subject->notifyAllObservers();
  return 0;

}
