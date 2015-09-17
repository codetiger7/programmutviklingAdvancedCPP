#include <iostream>

using namespace std;


class S
{
public:
   S()
   {
      static int a = 0;
      ++a;
   }

   static int r()
   {
      return a;
   }

private:

};


int main()
{

   S s1;
   S s2;


   cout << "\n\n";

   cout << s2.r() << endl;

   return 0;
}

