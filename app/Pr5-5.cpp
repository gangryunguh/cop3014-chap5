// This program calculates the number of soccer teams
// that a youth league may create from the number of
// available players. Input validation is demonstrated
// with while loops.
#include <iostream>
using namespace std;

int main()
{
   // Constants for minimum and maximum players
   const int MIN_PLAYERS = 9,
             MAX_PLAYERS = 15;

   // Variables
   int players,      // Number of available players
       teamPlayers,  // Number of desired players per team
       numTeams,     // Number of teams
       leftOver;     // Number of players left over

   // 1. Get the number of players per team.
   cout << "How many players do you wish per team? ";
   // Reading in the number of teamPlayers until the number is in MIN_PLAYERS..MAX_PLAYERS



   // 2. Get the number of players available.
   cout << "How many players are available? ";
   // Reading in number of (available) players until the players > 0




   // 3. Calculate the number of teams.


   
   // 4. Calculate the number of leftover players.


   
   // Display the results.
   cout << "There will be " << numTeams << " teams with "
        << leftOver << " players left over.\n";
   return 0;
}