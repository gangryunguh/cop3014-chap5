// This program reads data from a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   ifstream inputFile;
   string name;

   inputFile.open("Friends.txt");
   if (!inputFile.is_open()) {
       cout << "Fail to open file \"Friends.txt\"" << endl;
       return 1;
   }

   cout << "Reading data from the file.\n";

   // Display the names until there is no more name to display




   inputFile.close();      // Close the file
   return 0;
} 