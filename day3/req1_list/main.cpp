#include <iostream>
#include <string>
#include "strlist.h"

using namespace std;

int main()
{

   string a = "Hello";
   string a1 = "Hello";

   string b = "world";
   string b1 = "world";

   string c = "dance";
   string c1 = "dance";

   string d = "smile";
   string d1 = "smile";

   StrList sList;

   sList.ins(a);
   sList.ins(b);
   sList.ins(c);

   cout << c <<  " == " << sList.getLastAccess() << endl;
   sList.ins(c);
   sList.ins(c1);
   sList.ins(b1);
   cout << b <<  " == " << sList.getLastAccess() << endl;


   cout << "\n\n\n";
   for( auto r : sList.getDeque())
      cout << r << endl;









   return 0;
}

