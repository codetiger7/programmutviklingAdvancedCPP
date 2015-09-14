#include <iostream>
#include <url.h>

using namespace std;

int main()
{
   cout << "\n\n\n";

   string u = "http://www.google.com";
   Url myUrl = u;

   string urlString;

   cout << myUrl.getProtocol() << endl;
   cout << myUrl.getResource() << endl;


   cout << "\n\n\n";
   return 0;
}

