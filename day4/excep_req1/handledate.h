#ifndef HANDLEDATE
#define HANDLEDATE

#include <date.h>

class HandleDate
{
public:

   HandleDate& operator=(const HandleDate& rhs)
   {
      HandleDate* oldDate = date;
      date = new HandleDate(*rhs.date);
      delete oldDate;
      return *this;

   }


private:
   class Date;
   HandleDate* date;

};

#endif // HANDLEDATE

