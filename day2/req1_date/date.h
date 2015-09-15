#ifndef DATE
#define DATE


class Date
{
public:
//   Date() = delete;
   Date(int dayVal, int monthVal, int yearVal)
      : day(dayVal)
      , month(monthVal)
      , year(yearVal)
   {
   }

   bool isLeapYear()
   {
      if ( (year % 4 == 0))
      {
         if ( year % 100 == 0)
         {
            if (year % 400 == 0)
               return true;

            return false;
         }
         return true;
      }

      return false;
   }

   int getDay()   const   { return day; }
   int getMonth() const { return month; }
   int getYear()  const  { return year; }

private:
   int day;
   int month;
   int year;
};


bool operator == (const Date& lhs, const Date& rhs)
{
   return (lhs.getDay() == rhs.getDay()) &&
          (lhs.getMonth() == rhs.getMonth()) &&
          (lhs.getYear() == rhs.getYear());
}

bool operator != (const Date& lhs, const Date& rhs)
{
   return !(lhs == rhs);
}

bool operator < (const Date& lhs, const Date& rhs)
{
   if (lhs == rhs)
      return false;
   else if ( lhs.getYear() < rhs.getYear())
      return true;
   else if (lhs.getYear() == rhs.getYear())
   {
      if (lhs.getMonth() < rhs.getMonth())
         return true;
      else if (lhs.getMonth() == rhs.getMonth())
      {
         if (lhs.getDay() < rhs.getDay())
            return true;
         else
            return false;
      }
      else
         return false;
   }
   else
   {
      return false;
   }
}


bool operator > (const Date& lhs, const Date& rhs)
{
   if ( lhs != rhs)
   {
      if ( lhs.getYear() > rhs.getYear())
         return true;
      else if (lhs.getYear() == rhs.getYear())
      {
         if ( lhs.getMonth() > rhs.getMonth())
            return true;
         else if (lhs.getMonth() == rhs.getMonth())
         {
            if (lhs.getDay() > rhs.getDay())
               return true;
            else
               return false;
         }
      }
      else
         return false;
   }
   return false;
}


bool operator <= (const Date& lhs, const Date& rhs)
{
   if (lhs == rhs)
      return true;

   return lhs < rhs;
}

bool operator >= (const Date& lhs, const Date& rhs)
{
   if (lhs == rhs)
      return true;

   return lhs > rhs;
}

#endif // DATE

