#ifndef DATE
#define DATE

#include <iostream>

enum UnitType { yearType, monthType, dayType };

template <UnitType U>
class Unit
{
public:
   explicit Unit(int v): val(v) {}
   operator int() const {return val; }

private:
   const int val;
};

Year operator"" _yr(unsigned long l) { return Year(l); }


typedef Unit<yearType> Year;
typedef Unit<monthType> Month;
typedef Unit<dayType> Day;
class Date
{
public:

   Date(Year y, Month m, Day d)
   {
      year = y;
      month = m;
      day = d;
   }

private:
   int day;
   int month;
   int year;

};

#endif // DATE

