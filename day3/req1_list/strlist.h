#ifndef STRLIST
#define STRLIST

#include <algorithm>
#include <deque>
#include <string>

class StrList
{
public:

   void ins(const std::string& str)
   {
      auto it = std::find(sList.begin(), sList.end(), str);

      if (it != sList.end())
      {
         std::rotate(sList.begin(), it, it + 1);
      }
      else
         sList.push_front(str);
   }

   const std::deque<std::string>& getDeque() const
   {
      return sList;
   }

   const std::string& getLastAccess()
   {
     return sList[0];
   }



private:
   std::deque<std::string> sList;

};

#endif // STRLIST

