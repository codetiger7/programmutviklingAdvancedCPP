#ifndef STRLIST
#define STRLIST

#include <algorithm>
#include <deque>
#include <string>
#include <numeric>

class StrList
{
public:

   StrList() = default;

   StrList(size_t maxSize)
      : sList(maxSize)
      , maxSz(maxSize)
   {
   }

   void insertString(const std::string& str)
   {
      auto it = std::find(sList.begin(), sList.end(), str);

      // already in list update order in list
      if (it != sList.end())
      {
         std::rotate(sList.begin(), it, it + 1);
      }
      // reached max size remove least recently used and add new item
      else if (sList.size() == maxSz)
      {
         sList.pop_back();
         sList.push_front(str);
      }
      // new item
      else
         sList.push_front(str);
   }




   const std::deque<std::string>& getDeque() const
   {
      return sList;
   }

   const std::string& getLastAccess() const
   {
     return sList[0];
   }


   size_t getUpperLimit() const
   {
      return maxSz;
   }

private:
   std::deque<std::string> sList;
   const size_t maxSz = std::numeric_limits<size_t>::max();
};

#endif // STRLIST

