// This program averages test scores. It asks the user for the
// number of students and the number of test scores per student.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int numStudents,  // Number of students
       numTests;     // Number of tests per student
   double total,     // Accumulator for total scores
          average;   // Average test score

   // Set up numeric output formatting.
   cout << fixed << showpoint << setprecision(1);

   // Get the number of students.
   cout << "This program averages test scores.\n";
   cout << "For how many students do you have scores? ";
   cin >> numStudents;
   
   // Get the number of test scores per student.
   cout << "How many test scores does each student have? ";
   cin >> numTests;
   
   // Determine each student's average score.
   // Implement this using two nested for-loops










   return 0;
}