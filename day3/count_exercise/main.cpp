#include <iostream>
#include <cassert>

template <typename T>
class Counter
{
public:
   Counter()
   {
      ++cnt;
   }

   ~Counter()
   {
      --cnt;
   }

   int static count()
   {
      return cnt;
   }

private:
   static const int cnt = 0;
};



template<typename T>
int Counter<T>::cnt = 0;




class Y : public Counter<Y> {};
class X : public Counter<X> {};

using namespace std;

int main()
{
   X x1;
   {
      X x2;
   }
   X x3;

   Y y1;
   Y y2;
   {
      Y y3;
   }
   Y y4;

   assert(X::count() == 2);
   assert(Y::count() == 3);


   return 0;
}

