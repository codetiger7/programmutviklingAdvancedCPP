#include <iostream>
#include <date.h>

using namespace std;

int main()
{
   cout << "\n\n\n";



   Date d(15, 9, 2015);

   // test gets
   cout << d.getDay()   << endl;
   cout << d.getMonth() << endl;
   cout << d.getYear()  << endl;








   cout << "\n\n\n";
   return 0;
}



