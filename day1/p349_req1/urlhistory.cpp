#include "urlhistory.h"
#include <algorithm>
#include <iostream>

UrlHistory::UrlHistory()
   :size_(0)
{
}

bool UrlHistory::storeUrl(const Url& url)
{

   auto pos = std::find(urlStorage.begin(), urlStorage.end(), url);

   if (pos == urlStorage.end())
   {
      urlStorage.push_back(url);
      ++size_;

      return true;
   }
   return false;
}


void UrlHistory::displayUrls()
{
   for (unsigned i = 0; i != urlStorage.size(); ++i)
   {
      std::cout << urlStorage[i].getResource() << std::endl;
   }
}

