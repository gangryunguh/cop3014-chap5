// This program reads numbers from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inFile;
   int value1, value2, value3, sum;

   // Open the file "NumericData.txt"




   // Read the three integer numbers from the file.



   // Close the file.
   inFile.close();

   // Calculate the sum of the numbers.
   sum = value1 + value2 + value3;

   // Display the three numbers.
   cout << "Here are the numbers:\n"
        << value1 << " " << value2
        << " " << value3 << endl;

   // Display the sum of the numbers.
   cout << "Their sum is: " << sum << endl;
   return 0;
} 