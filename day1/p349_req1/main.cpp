//


#include <iostream>
#include <string>
#include <urlhistory.h>
#include <url.h>
#include <algorithm>

using namespace std;


void divideUrl(const string& urlString, string& protocol, string& resource);


int main()
{

   cout << endl;
   cout << endl;

   UrlHistory urlH;

   string protocol;
   string resource;
   string urlString;

   // keep running program
   cout << "Enter urls: " << endl;
   while (cin >> urlString)
   {

      Url myUrl = urlString;
      // set protocol:  http://
      // set resource name: www.google.com
//      divideUrl(urlString, protocol, resource);

//      Url myUrl(protocol, resource);

      urlH.storeUrl(myUrl);
   }


   urlH.displayUrls();

   cout << endl;
   cout << endl;
   return 0;
}

