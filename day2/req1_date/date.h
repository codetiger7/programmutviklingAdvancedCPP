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
   return (lhs.getYear() < rhs.getYear()) ||
          (lhs.getMonth() < rhs.getMonth()) ||
          (lhs.getDay() < rhs.getDay());
}


#endif // DATE

