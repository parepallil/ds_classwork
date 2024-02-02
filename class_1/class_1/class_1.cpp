//   NAME -       PAREPALLI MANOHAR
//  STUDENT ID -  0938792
//   CLASS -      DATA STRUCTURES 


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    // Initializing an array named myNumbers with five integers
    int myNumbers[5] = { 10, 20, 30, 40, 50 };
    // using for loop to iterate the array elements
    for(int i : myNumbers ){
        cout<<i<<"\n";// printing the each element in a new line
     }
    // Initializing an array of strings named cars
    string cars[] = {"volvo", "bmw", "Ford"};
    // Modifying elements in the array
    cars[1]= "opel";
    cars[2]= "Bmw";
    for(int i=0; i<4; i++)
    {
        cout<< cars[i]<<" ";
    }  

    //  Integer array
    int myNumbers[5]= {10,20,30,40,50};
    // Printing the size of the integer array
    cout << sizeof(myNumbers);
   
    // String array
    string cars[] = {"volve", "BMW" , "Ford", "MAzde"};
    // Calculating the number of elements in the string array
    int n = sizeof(cars)/sizeof(string);
    for(int i; i < n; i++){
        cout << cars[i]<<"\n";
    }

    // initialize an array of strings named letters and uses nested loops to iterate
    string letters[2][4]={{"A","B","C","D"},{"E","F","G","H"}};
    // Accessing and printing an element from the array
    cout<<letters[0][2]<<"\n";


    string letters[2][2][2]={
        {
            {"A","B"},
            {"C","D"}
        },
        {
            {"E","F"},
            {"G","H"}
        }

    };
    //Using nested loops to iterate over the elements of the  array
    for (int i=0;i<2;i++){
        for (int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                cout<< letters[i][j][k]<<"\t";
            }
        }
    }

    // We put "1" to indicate there is a ship.
 bool ships[4][4] = {
   { 0, 1, 1, 0 },
   { 0, 0, 0, 0 },
   { 0, 0, 1, 0 },
   { 0, 0, 1, 0 }
 };

 // Keep track of how many hits the player has and how many turns they have played in these variables
 int hits = 0;
 int numberOfTurns = 0;

 // Allow the player to keep going until they have hit all four ships
 while (hits < 4) {
   int row, column;

   cout << "Selecting coordinates\n";

   // Ask the player for a row
   cout << "Choose a row number between 0 and 3: ";
   cin >> row;

   // Ask the player for a column
   cout << "Choose a column number between 0 and 3: ";
   cin >> column;

   // Check if a ship exists in those coordinates
   if (ships[row][column]) {
     // If the player hit a ship, remove it by setting the value to zero.
     ships[row][column] = 0;

     // Increase the hit counter
     hits++;

     // Tell the player that they have hit a ship and how many ships are left
     cout << "Hit! " << (4-hits) << " left.\n\n";
   } else {
     // Tell the player that they missed
     cout << "Miss\n\n";
   }

   // Count how many turns the player has taken
   numberOfTurns++;
 }

 cout << "Victory!\n";
 cout << "You won in " << numberOfTurns << " turns";

   

}