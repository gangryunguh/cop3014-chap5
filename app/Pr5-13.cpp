// This program calculates the total number of points a 
// soccer team has earned over a series of games. The user
// enters a series of point values, then -1 when finished.
// report both total goals and average goals per game.
#include <iostream>
using namespace std;

int main()
{
   int game = 1,   // Game counter
       points,     // To hold a number of points
       total = 0;  // Accumulator

   double average;

   cout << "Enter the number of points your team has earned\n";
   cout << "so far in the season, then enter -1 when finished.\n\n";
   cout << "Enter the points for game " << game << ": ";
   cin >> points;

   // Implement the task described above using while loop


   

   cout << "\nThe total points are " << total << endl;
   cout << "\nThe total points are " << average << endl;
   return 0;
}