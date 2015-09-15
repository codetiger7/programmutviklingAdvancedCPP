#include <iostream>
#include <date.h>

using namespace std;

int main()
{
   cout << "\n\n\n";



   Date d(15, 9, 2015);
   Date d2(15,9,2015);

   Date e(17,8,2015);
   Date e2(17,8,2015);

   Date a1(10, 10, 2010);
   Date a2(9,10, 2010);

   Date b(10, 12, 2010);
   Date c(10,10,2009);

   // test gets
   cout << d.getDay()   << endl;
   cout << d.getMonth() << endl;
   cout << d.getYear()  << endl;

   // equality tests
   if ( d == d2)
      cout << "Equality test 1 ok" << endl;
   if (d == e)
      cout << "Error in equality test 2" << endl;

   // inequality test
   if ( d != e)
      cout << "Inequality test 1  ok" << endl;

   if (d == e)
      cout << "Error in Inequality test2" << endl;

   // less than tests
   cout << "less than == false == " << (a1 < a1) << endl;
   cout << "less than == false == " << (a1 < a2) << endl;

   // greater than tests
   cout << "larger than == true == " << (b > c) << endl;
   cout << "larger than == true == " << (a1 > a2) << endl;


   // leap year tests
   Date l1(10, 10, 1996);
   Date l2(10,10,2000);

   cout << "leap year true == " << l1.isLeapYear() << endl;
   cout << "leap year true == " << l2.isLeapYear() << endl;


   Date nl1(5,5,1900);
   Date nl2(5,5,2001);
   // false
   cout << "leap year false == " << nl2.isLeapYear() << endl;
   cout << "leap year false == " << nl2.isLeapYear() << endl;







   cout << "\n\n\n";
   return 0;
}



