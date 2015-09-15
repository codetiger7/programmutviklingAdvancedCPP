#ifndef URLHISTORY_H
#define URLHISTORY_H

#include <vector>
#include <url.h>
#include <string>


class UrlHistory
{
public:
   UrlHistory();

   bool storeUrl(const Url& url);
   void displayUrls();
   const std::string& displayLastAccessed();

private:
   std::vector<Url> urlStorage_;
   unsigned size_;
   std::string lastAccessed_;
};


#endif // URLHISTORY_H
