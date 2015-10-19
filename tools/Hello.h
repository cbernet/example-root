#ifndef __EXAMPLEROOT_TOOLS_HELLO_H__
#define __EXAMPLEROOT_TOOLS_HELLO_H__

#include "TLorentzVector.h"

#include <string>

class Hello {

 public:
  Hello(const char* str);
  void print_str() const;
  
 private:
  std::string  m_str;
  TLorentzVector                  m_p4;
};

#endif   

