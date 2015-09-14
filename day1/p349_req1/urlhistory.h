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

private:
   std::vector<Url> urlStorage;
   unsigned size_;
};


#endif // URLHISTORY_H
