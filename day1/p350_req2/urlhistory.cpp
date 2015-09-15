#include "urlhistory.h"
#include <algorithm>
#include <iostream>

UrlHistory::UrlHistory()
   : size_(0)
{
}

bool UrlHistory::storeUrl(const Url& url)
{

   auto pos = std::find(urlStorage_.begin(), urlStorage_.end(), url);

   if (pos == urlStorage_.end())
   {
      urlStorage_.push_back(url);

      ++size_;

      lastAccessed_ = url.getProtocol();

      return true;
   }

   lastAccessed_ = url.getProtocol();

   return false;
}


void UrlHistory::displayUrls()
{
   for (unsigned i = 0; i != urlStorage_.size(); ++i)
   {
      std::cout << urlStorage_[i].getResource() << ", ";
   }
}

const std::string& UrlHistory::displayLastAccessed()
{
   return lastAccessed_;
}

