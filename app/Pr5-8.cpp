// This program displays a menu and asks the user to make a
// selection. A do-while loop repeats the program until the
// user selects item 4 from the menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   // Constants for menu choices
   const int ADULT_CHOICE = 1,
             CHILD_CHOICE = 2,
             SENIOR_CHOICE = 3,
             QUIT_CHOICE = 4;

   // Constants for membership rates
   const double ADULT = 40.0,
                CHILD = 20.0,
                SENIOR = 30.0;
   
   // Variables
   int choice;       // Menu choice
   int months;       // Number of months
   double charges;   // Monthly charges

   // Set up numeric output formatting.
   cout << fixed << showpoint << setprecision(2);

   // prepare do-while loop

   {
      // Display the menu.
      cout << "\n\t\tHealth Club Membership Menu\n\n"
           << "1. Standard Adult Membership\n"
           << "2. Child Membership\n"
           << "3. Senior Citizen Membership\n"
           << "4. Quit the Program\n\n"
           << "Enter your choice: ";
      cin >> choice;
      
      // 1. Validate the menu selection choice until the user
      //    type in the valid choice


      // 2. Validate and process the user's choice.
      if (choice != QUIT_CHOICE)
      {
         // Get the number of months.
         cout << "For how many months? ";

         // Compute the charges according to the choice and months.
         // Display the monthly charges.
         cout << "The total charges are $"
              << charges << endl;
      }

   } // repeat this until choice != 4 (Quit the Program)

   return 0;
}