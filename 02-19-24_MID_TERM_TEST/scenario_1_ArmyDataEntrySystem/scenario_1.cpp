// CODE AND IMPLEMENTATION 
// SCENARIO-1 : ARMY DATA ENTRY SYSTEM USING LINKED LIST
// IMPLEMENTATION

#include <iostream>
#include <string>
using namespace std;

// Define a structure to represent a soldier
struct Soldier {
    string name;
    string rank;
    string unit;
    Soldier* next; // Pointer to the next soldier in the list
};

// Define a class for the Army Data Entry System
class ArmyDataEntrySystem {
private:
    Soldier* head; // Pointer to the first soldier in the list

public:
    // Constructor to initialize the head pointer
    ArmyDataEntrySystem() {
        head = nullptr;
    }

    // Function to insert a new soldier into the linked list
    void insertSoldier(string name, string rank, string unit) {
        Soldier* newSoldier = new Soldier(); // Create a new soldier node
        newSoldier->name = name; // Set the name of the soldier
        newSoldier->rank = rank; // Set the rank of the soldier
        newSoldier->unit = unit; // Set the unit of the soldier
        newSoldier->next = head; // Point the new soldier to the current head
        head = newSoldier; // Update the head to point to the new soldier
    }

    // Function to display all soldiers in the list
    void displaySoldiers() {
        Soldier* current = head; // Start from the head of the list
        while (current != nullptr) { // Loop until the end of the list
            // Print the details of the current soldier
            cout << "Name: " << current->name << ", Rank: " << current->rank << ", Unit: " << current->unit << endl;
            current = current->next; // Move to the next soldier
        }
    }
};

// Function to add soldiers to the Army Data Entry System
void addSoldiers(ArmyDataEntrySystem& system) {
    int numSoldiers; // Variable to store the number of soldiers
    cout << "Enter the number of soldiers: ";
    cin >> numSoldiers; // Input the number of soldiers from the user

    for (int i = 0; i < numSoldiers; ++i) { // Loop to input details for each soldier
        string name, rank, unit; // Variables to store soldier details
        cout << "Enter details for soldier " << i + 1 << ":" << endl; // Prompt for soldier details
        cout << "Name: ";
        cin >> name; // Input soldier name
        cout << "Rank: ";
        cin >> rank; // Input soldier rank
        cout << "Unit: ";
        cin >> unit; // Input soldier unit
        system.insertSoldier(name, rank, unit); // Insert soldier into the system
    }
}

// Main function to test the Army Data Entry System
int main() {
    ArmyDataEntrySystem armySystem; // Create an instance of the Army Data Entry System
    addSoldiers(armySystem); // Add soldiers to the system

    cout << "\nSoldier Details:\n";
    armySystem.displaySoldiers(); // Display all soldiers in the system
    return 0;
}
