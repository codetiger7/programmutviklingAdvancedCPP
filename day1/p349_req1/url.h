#ifndef URL_H
#define URL_H

#include <string>

class Url
{
public:
   Url() = default;
   Url(const std::string& prot, const std::string& res);
   std::string getProtocol() const;
   std::string getResource() const;
   std::string getCompleteUrl() const;
   bool emptyUrl();

private:
   std::string protocol_;
   std::string resource_;

};

inline bool operator==(const Url& url1, const Url& url2 )
{
   return url1.getResource() == url2.getResource();
}


#endif // URL_H
