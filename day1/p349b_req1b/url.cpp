#include "url.h"
#include <string>





Url::Url(const std::string& prot, const std::string& res)
{
   protocol_ = prot;
   resource_ = res;
}

Url::Url(const std::string& urlS)
{
   urlString_ = urlS;
   divideUrl(urlString_, protocol_, resource_);

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


void
Url::divideUrl(const std::string& urlString, std::string& protocol, std::string& resource)
{

   auto pos = urlString.find("://");

   if (pos != std::string::npos)
   {
      protocol = urlString.substr(0, pos + 3);
      resource = urlString.substr(pos+3, urlString.size());
   }

}


Url::operator std::string() const
{
   return urlString_;
}
