// This program writes data to a single line in a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream outputFile;
   outputFile.open("demofile.txt");

   cout << "Now writing data to the file.\n";

   // Write four names to the file in a same line
   //     - "Bach", "Beenthoven", "Mozart", and "Schubert"




   // Close the file




   cout << "Done.\n";
   return 0;
} 