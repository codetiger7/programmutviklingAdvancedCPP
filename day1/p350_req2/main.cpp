#include <iostream>
#include <string>
#include <url.h>
#include <urlhistory.h>


using namespace std;

int main()
{
   cout << "\n\n\n";

   string s1 = "http://www.google.com";
   string s2 = "ftp://www.dance.com";
   string s3 = "https://www.cpp.com";
   string s4 = "blaldakal.dfsf";
   string s5 = "";
   string s6 = "http://smile.com";

   UrlHistory urlH;

   urlH.storeUrl(s1);
   urlH.storeUrl(s2);
   urlH.storeUrl(s3);
   urlH.storeUrl(s4);
//   urlH.storeUrl(s5);
//   urlH.storeUrl(s6);


   cout << urlH.displayLastAccessed() << endl;




   cout << "\n\n\n";
   return 0;
}

