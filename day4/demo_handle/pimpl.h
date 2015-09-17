#ifndef PIMPL_H
#define PIMPL_H


class X
{
public:
   X();
   ~X();

   void f();
   void g();

private:
   X(const X&);
   X& operator=(const X&);

   struct Impl;
   Impl* pImpl;
};

#endif // PIMPL_H

