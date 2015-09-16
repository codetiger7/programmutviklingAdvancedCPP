
#include <cassert>
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

   // first deque
   StrList sList;


   sList.insertString(d);
   sList.insertString(d);
   sList.insertString(a);
   sList.insertString(b);
   sList.insertString(c);

   cout << c <<  " == " << sList.getLastAccess() << endl;
   sList.insertString(c);
   sList.insertString(c1);
   sList.insertString(a);
   sList.insertString(d);
   sList.insertString(a);
   sList.insertString(b1);
   cout << b <<  " == " << sList.getLastAccess() << endl;

   cout << "\n\n\n";
   for( auto r : sList.getDeque())
      cout << r << endl;


   // second deque
   cout << "\n\n\n";
   StrList l2(2);

   l2.insertString(c);
   l2.insertString(d);
   l2.insertString(c);
   l2.insertString(c);
   l2.insertString(d);
   l2.insertString(d);
   l2.insertString(a);

   assert( l2.getUpperLimit() == 2);

   for( auto r : l2.getDeque())
      cout << r << endl;












   return 0;
}

