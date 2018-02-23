#include <iostream>
#include <string>
#include "proxyimage.h"
using namespace std;
int main()
{
  Image *image = new proxyimage("test_image.jpg");
  image->display();
  return 0;
}
