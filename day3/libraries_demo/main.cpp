#include <cassert>
#include <iostream>
#include <tuple>

class Money
{
public:
   Money( int u, int c)
      : units(u)
      , cents(c)
   {
   }

   bool operator<(const Money& rhs) const
   {
      return std::tie(units, cents) < std::tie(rhs.units, rhs.cents);
   }


private:
   int units;
   int cents;
};





int main()
{

   Money m1(4, 5);
   Money m2(5,6);

   assert( m1 < m2);


   return 0;
}

