#include <iostream>
#include "note.h"



int main()
{
 
  Note n(A4, 4);
  std::cout << n.toString() << std::endl;
  std::cout << "Hello World" << std::endl;
  return 0;
}
