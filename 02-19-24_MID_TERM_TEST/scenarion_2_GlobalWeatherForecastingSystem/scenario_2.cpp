// CODE AND IMPLEMENTATION
// SCENARIO_2 :GLOBAL WEATHER FORECASTING SYSTEM USING BINARY TREE
// IMPLEMENTATION


#include <iostream>
#include <string>
using namespace std;

// Define a structure to represent weather data for a location
struct WeatherData {
    string location;
    int temperature;
    int humidity;
    WeatherData* left; // Pointer to the left child node
    WeatherData* right; // Pointer to the right child node
};

// Define a class for the Global Weather Forecasting System
class GlobalWeatherForecastingSystem {
private:
    WeatherData* root; // Pointer to the root of the binary tree

public:
    // Constructor to initialize the root pointer
    GlobalWeatherForecastingSystem() {
        root = nullptr;
    }

    // Function to insert weather data into the binary tree
    void insertWeatherData(string location, int temperature, int humidity) {
        WeatherData* newNode = new WeatherData(); // Create a new node for the weather data
        newNode->location = location; // Set the location
        newNode->temperature = temperature; // Set the temperature
        newNode->humidity = humidity; // Set the humidity
        newNode->left = nullptr;
        newNode->right = nullptr;

        if (root == nullptr) { // If the tree is empty, set the new node as the root
            root = newNode;
            return;
        }

        WeatherData* current = root; // Start from the root of the tree
        while (true) { // Loop until the new node is inserted
            if (location < current->location) { // If the location is less than the current node's location
                if (current->left == nullptr) { // If the left child is empty, insert the new node here
                    current->left = newNode;
                    break;
                }
                else {
                    current = current->left; // Move to the left child
                }
            }
            else if (location > current->location) { // If the location is greater than the current node's location
                if (current->right == nullptr) { // If the right child is empty, insert the new node here
                    current->right = newNode;
                    break;
                }
                else {
                    current = current->right; // Move to the right child
                }
            }
            else { // Handle duplicate locations if needed
                break;
            }
        }
    }

    // Function to search for weather data for a given location and print it
    void searchAndPrintWeather(string location) {
        WeatherData* current = root; // Start from the root of the tree
        while (current != nullptr) { // Loop until the end of the tree
            if (location == current->location) { // If the location is found
                cout << "Location: " << current->location << ", Temperature: " << current->temperature
                    << "°C, Humidity: " << current->humidity << "%" << endl; // Print weather data
                return;
            }
            else if (location < current->location) { // If the location is less than the current node's location
                current = current->left; // Move to the left child
            }
            else {
                current = current->right; // Move to the right child
            }
        }
        cout << "Weather data not found for location: " << location << endl; // If location not found
    }
};

// Function to add weather data to the Global Weather Forecasting System
void addWeatherData(GlobalWeatherForecastingSystem& system) {
    int numLocations; // Variable to store the number of locations
    cout << "Enter the number of locations: ";
    cin >> numLocations; // Input the number of locations from the user

    for (int i = 0; i < numLocations; ++i) { // Loop to input weather data for each location
        string location; // Variables to store weather data
        int temperature, humidity;
        cout << "Enter weather data for location " << i + 1 << ":" << endl; // Prompt for weather data
        cout << "Location: ";
        cin >> location; // Input location
        cout << "Temperature: ";
        cin >> temperature; // Input temperature
        cout << "Humidity: ";
        cin >> humidity; // Input humidity
        system.insertWeatherData(location, temperature, humidity); // Insert weather data into the system
    }
}

// Main function to test the Global Weather Forecasting System
int main() {
    GlobalWeatherForecastingSystem weatherSystem; // Create an instance of the Global Weather Forecasting System
    addWeatherData(weatherSystem); // Add weather data to the system

    string location; // Variable to store the location to search for
    cout << "Enter location to search: ";
    cin >> location; // Input location from the user
    cout << endl;

    weatherSystem.searchAndPrintWeather(location); // Search for weather data and print it
    return 0;
}
