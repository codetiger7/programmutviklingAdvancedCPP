#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
   cout << "\n\n";

   vector<int> v(10);
   list<int> l(10);

   cout << (&v[5] - &v[0]) << endl;

   cout << std::distance(v.begin(), v.end()) << endl;
   cout << std::distance(l.begin(), l.end()) << endl;

   // tag dispatch

//   std::iterator_traits<vector<int>::iterator> v;




   return 0;
}

