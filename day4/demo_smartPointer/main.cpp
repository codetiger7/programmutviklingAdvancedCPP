// pointer to a T obj
// pointer to a count

#include <iostream>
#include <string>
#include <sp.h>
#include <cassert>
#include <memory>

// using Sp = std::shared_ptr;

using namespace std;

int main()
{
   cout << "\n\n\n";
   Sp<int> sp(new int(5));
   Sp<int> sp2(sp);
   assert(sp.use_count() == 2);
   Sp<int> sp3(new int(10));
   sp3 = sp;

   assert(*sp == 5);
   *sp = 6;
   assert(*sp == 6);

   Sp<std::string> sps(new std::string("hello world"));



//   assert()


   return 0;
}

