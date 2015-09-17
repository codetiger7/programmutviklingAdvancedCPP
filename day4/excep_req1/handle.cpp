#ifndef DATE
#define DATE

#include <handle.h>
#include <stdexcept>
#include <tuple>

class Handle::Date
{
public:

   Date(int dayVal, int monthVal, int yearVal)
   {
      if (yearVal < 0)
         throw std::invalid_argument("Invalid Year");
      else if (monthVal < 1 || monthVal > 12)
         throw std::invalid_argument("Invalid Month");
      else if ( dayVal < 1 || dayVal > 31)
         throw std::invalid_argument("Invalid Day");
      else if ( (dayVal > getMonthMax(monthVal, yearVal)))
         throw std::invalid_argument("Invalid Day/Month Combo");

      day_ = dayVal;
      month_ = monthVal;
      year_ = yearVal;
   }

   bool isLeapYear(int yy)
   {
      if ( (yy % 4 == 0))
      {
         if ( yy % 100 == 0)
         {
            if (yy % 400 == 0)
               return true;

            return false;
         }
         return true;
      }

      return false;
   }

   bool isLeapYear()
   {
      if ( (year_ % 4 == 0))
      {
         if ( year_ % 100 == 0)
         {
            if (year_ % 400 == 0)
               return true;

            return false;
         }
         return true;
      }

      return false;
   }




   bool isDyreLeapYear()
   {
      if (year_ % 400 == 0)
         return true;
      if ( year_ % 100 == 0)
        return false;
     return (year_ % 4 == 0);
   }

   int getDay()   const   { return day_; }
   int getMonth() const  { return month_;}
   int getYear()  const  { return year_; }


   std::tuple<const int&, const int&, const int&> getTuple() const
   {
      return std::tie(year_, month_, day_);
   }



   int getMonthMax(int month, int year)
   {
      const int  daysInFebInLeapY = 29;
      const int daysInMonth [] = { 0,31,30,31,30,31,30,31, 31,30,31,30,31} ;

      if ( month > 12 || month < 1)
         throw std::invalid_argument("Not possible!");

      if  ( isLeapYear(year) && month == 2)
         return daysInFebInLeapY;
      else
         return daysInMonth[month];
   }

private:
   int day_;
   int month_;
   int year_;
};



int Handle::getYear() const
{
   return date->getYear();
}








//bool operator == (const Handle::Date& lhs, const Handle::Date& rhs)
//{
//   return (lhs.getDay() == rhs.getDay()) &&
//          (lhs.getMonth() == rhs.getMonth()) &&
//          (lhs.getYear() == rhs.getYear());
//}

//bool operator != (const Handle& lhs, const Handle& rhs)
//{
//   return !(lhs == rhs);
//}

//bool operator < (const Handle& lhs, const Handle& rhs)
//{
//   if (lhs == rhs)
//      return false;
//   else if ( lhs.getYear() < rhs.getYear())
//      return true;
//   else if (lhs.getYear() == rhs.getYear())
//   {
//      if (lhs.getMonth() < rhs.getMonth())
//         return true;
//      else if (lhs.getMonth() == rhs.getMonth())
//      {
//         if (lhs.getDay() < rhs.getDay())
//            return true;
//         else
//            return false;
//      }
//      else
//         return false;
//   }
//   else
//   {
//      return false;
//   }
//}


//bool operator > (const Handle& lhs, const Handle& rhs)
//{
//   if ( lhs != rhs)
//   {
//      if ( lhs.getYear() > rhs.getYear())
//         return true;
//      else if (lhs.getYear() == rhs.getYear())
//      {
//         if ( lhs.getMonth() > rhs.getMonth())
//            return true;
//         else if (lhs.getMonth() == rhs.getMonth())
//         {
//            if (lhs.getDay() > rhs.getDay())
//               return true;
//            else
//               return false;
//         }
//      }
//      else
//         return false;
//   }
//   return false;
//}


//bool operator <= (const Handle& lhs, const Handle& rhs)
//{
//   if (lhs == rhs)
//      return true;

//   return lhs < rhs;
//}

//bool operator >= (const Handle& lhs, const Handle& rhs)
//{
//   if (lhs == rhs)
//      return true;

//   return lhs > rhs;
//}

#endif // DATE

