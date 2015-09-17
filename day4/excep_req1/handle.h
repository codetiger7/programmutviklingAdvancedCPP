#ifndef HANDLEDATE
#define HANDLEDATE

#include <handle.cpp>
#include <tuple>

class Handle
{
public:



   Handle& operator=(const Handle& rhs)
   {
      Handle* oldDate = date;
      date = new Handle(*rhs.date);
      delete oldDate;
      return *this;

   }

   int getYear() const;
   std::tuple<const int&, const int&, const int&> getTuple() const;


private:
   class Date;
   Handle* date;

};





#endif // HANDLEDATE

