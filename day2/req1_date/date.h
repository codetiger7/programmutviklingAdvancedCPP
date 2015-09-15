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

   int getDay()   { return day; }
   int getMonth() { return month; }
   int getYear()  { return year; }

private:
   int day;
   int month;
   int year;
};



#endif // DATE

