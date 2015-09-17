#include <iostream>
#include <handle.h>
#include <stdexcept>
using namespace std;

int main()
{




   Handle d(4,8,2015);

   cout << d.getYear() << endl;


//   try
//   {
//      Date d( 3, 3, -1);
//   }
//   catch(std::invalid_argument& e)
//   {
//      cout << "\n\n\n";
//      std::cerr << e.what() << endl;
//   }
//   catch(...)
//   {
//      std::cerr << "something went wrong" << endl;
//   }

   return 0;
}

