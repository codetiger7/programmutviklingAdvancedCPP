

#include <pimpl.h>
#include <string>
#include <iostream>

struct X::Impl
{
   void f() { std::cout << "Really in f()\n"; }
   void g() { std::cout << "g g g g g " << std::endl; }

};


void X::f() { pImpl->f(); }
void X::g() { pImpl->g(); }
