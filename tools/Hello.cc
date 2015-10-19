#include "Hello.h"

#include <iostream>


Hello::Hello(const char* str) : m_str(str) {  
}

void Hello::print_str() const {
  std::cout<<m_str<<std::endl;
}
