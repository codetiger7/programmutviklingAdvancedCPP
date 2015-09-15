#ifndef URL_H
#define URL_H

#include <string>

class Url
{
public:
   Url() = default;
   Url(const std::string& prot, const std::string& res);
   Url(const std::string& urlS);


   std::string getProtocol() const;
   std::string getResource() const;
   std::string getCompleteUrl() const;
   bool emptyUrl();

   void divideUrl(const std::string& urlString, std::string& protocol, std::string& resource);

//   operator std::string() const;

private:
   std::string protocol_;
   std::string resource_;
   std::string urlString_;
};







inline bool operator==(const Url& url1, const Url& url2 )
{
   return url1.getResource() == url2.getResource();
}


#endif // URL_H
