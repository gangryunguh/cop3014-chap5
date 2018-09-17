// This program calculates the charges for DVD rentals.
// Every third DVD is free - exercise for continue statement
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int dvdCount = 1;    // DVD counter
   int numDVDs;         // Number of DVDs rented
   double total = 0.0;  // Accumulator
   char current;        // Current release, Y or N

   // Get the number of DVDs.
   cout << "How many DVDs are being rented? ";
   cin >> numDVDs;
   
   // Determine the charges using do-while with the continue statement.





   // Display the total.
   cout << fixed << showpoint << setprecision(2);
   cout << "The total is $" << total << endl;
   return 0;
}