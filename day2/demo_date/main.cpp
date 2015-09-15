#include <iostream>

#include <date.h>
using namespace std;

int main()
{
   Year y1 = 1953_yr;

   Date d1( Year(2015), Month(9), Day(15));
//   Date d2(Day(15), Month(9), Year(2015));
//   Date d3(Month(9), Day(15), Year(2015));

   Kilo k1 = 3.5_kg;
   Meter m1 = 5.6_m;
   auto x = k1 + m1;




   return 0;
}

