// This program demonstrates the prefix and postfix
// modes of the increment and decrement operators.
#include <iostream>
using namespace std;

int main()
{
   int num = 4;
   
   cout << num << endl;   // Displays 4
                          // Displays 4, then adds 1 to num
   cout << num << endl;   // Displays 5
                          // Adds 1 to num, then displays 6
   cout << endl;          // Displays a blank line
   
   cout << num << endl;   // Displays 6
                          // Displays 6, then subtracts 1 from num
   cout << num << endl;   // Displays 5
                          // Subtracts 1 from num, then displays 4
      
   return 0;
}