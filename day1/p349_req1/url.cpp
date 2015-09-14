#include "url.h"
#include <string>





Url::Url(const std::string& prot, const std::string& res)
{
   protocol_ = prot;
   resource_ = res;
}

std::string Url::getProtocol() const
{
   return protocol_;
}

std::string Url::getResource() const
{
   return resource_;
}

bool Url::emptyUrl()
{
   if (protocol_.size() == 0 && resource_.size() == 0)
      return true;

   return false;
}



