// This program displays the numbers 0 through 7 and
// their squares.
//
// Gang-Ryung Uh revised the sample code that
//   prints the power of 2
//   (1) Increment i from 0 up to 6
//   (2) Print the powers of 2 being raised to i
//
#include <iostream>
using namespace std;

int main()
{
   const int MAX = 6;
   int N = 1;
   int i;

   cout << "i\t\tN\n";
   cout << "---------\n";

   for (i = 0; i <= MAX; i++) {
      cout << i << "\t\t" << N << endl;
      N = 2 * N;
   }
   return 0;
}