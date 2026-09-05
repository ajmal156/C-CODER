#include <iostream>
#include <iomanip>
using namespace std;

// Constants for temperature conversion
const double FREEZING_POINT_C = 0.0;      // Freezing point of water in Celsius
const double FREEZING_POINT_F = 32.0;     // Freezing point of water in Fahrenheit
const double ABSOLUTE_ZERO_C = -273.15;   // Absolute zero in Celsius

const double F_TO_C_FACTOR = 5.0 / 9.0;   // Fahrenheit to Celsius factor
const double C_TO_F_FACTOR = 9.0 / 5.0;   // Celsius to Fahrenheit factor


// Celsius to Fahrenheit
double Celsius_To_Fahrenheit(double celsius) {
    return (celsius * C_TO_F_FACTOR) + FREEZING_POINT_F;
}

// Fahrenheit to Celsius
double Fahrenheit_To_Celsius(double fahrenheit) {
    return (fahrenheit - FREEZING_POINT_F) * F_TO_C_FACTOR;
}

// Celsius to Kelvin
double Celsius_To_Kelvin(double celsius) {
    return celsius - ABSOLUTE_ZERO_C;
}

// Kelvin to Celsius
double Kelvin_To_Celsius(double kelvin) {
    return kelvin + ABSOLUTE_ZERO_C;
}

// Fahrenheit to Kelvin
double Fahrenheit_To_Kelvin(double fahrenheit) {
    return Celsius_To_Kelvin(Fahrenheit_To_Celsius(fahrenheit));
}

// Kelvin to Fahrenheit
double Kelvin_To_Fahrenheit(double kelvin) {
    return Celsius_To_Fahrenheit(Kelvin_To_Celsius(kelvin));
}

// Display interesting facts about the temperature
void displayTemperatureFacts(double celsius) {
    cout << "\nInteresting facts about this temperature:" << endl;
    
    if (celsius < ABSOLUTE_ZERO_C) {
        cout << "This temperature is below absolute zero, which is physically impossible!" << endl;
    }
    else if (celsius == ABSOLUTE_ZERO_C) {
        cout << "This is absolute zero, the lowest possible temperature in the universe!" << endl;
    }
    else if (celsius < FREEZING_POINT_C) {
        cout << "This temperature is below the freezing point of water." << endl;
    }
    else if (celsius == FREEZING_POINT_C) {
        cout << "This is the freezing point of water at standard pressure." << endl;
    }
    else if (celsius < 20.0) {
        cout << "This is a cool temperature." << endl;
    }
    else if (celsius <= 30.0) {
        cout << "This is a comfortable room temperature." << endl;
    }
    else if (celsius <= 40.0) {
        cout << "This is a hot temperature." << endl;
    }
    else if (celsius <= 100.0) {
        cout << "This is a very hot temperature." << endl;
    }
    else if (celsius == 100.0) {
        cout << "This is the boiling point of water at standard pressure." << endl;
    }
    else {
        cout << "This is above the boiling point of water." << endl;
    }
}


int main() {

    // Display program header
    cout << "=======================================" << endl;
    cout << "       TEMPERATURE CONVERTER           " << endl;
    cout << "=======================================" << endl;

    cout << "This program converts temperatures between" << endl;
    cout << "Celsius, Fahrenheit, and Kelvin." << endl << endl;


    bool keepRunning = true;

    while (keepRunning) {

        // Display menu
        cout << "\nTemperature Conversion Options:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "7. Exit Program" << endl;

        // Get user's menu choice
        int choice;
        cout << "\nEnter your choice (1-7): ";
        cin >> choice;

        // Variable for temperature input and result
        double inputTemp, result;

        // Process user's choice
        switch (choice) {

            case 1:  // Celsius to Fahrenheit
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                result = Celsius_To_Fahrenheit(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °C = " << result << " °F" << endl;
                displayTemperatureFacts(result);
                break;

            case 2:  // Fahrenheit to Celsius
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                result = Fahrenheit_To_Celsius(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °F = " << result << " °C" << endl;
                displayTemperatureFacts(result);
                break;

            case 3:  // Celsius to Kelvin
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                result = Celsius_To_Kelvin(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °C = " << result << " K" << endl;
                displayTemperatureFacts(result);
                break;

            case 4:  // Kelvin to Celsius
                cout << "Enter temperature in Kelvin: ";
                cin >> inputTemp;
                result = Kelvin_To_Celsius(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " K = "<< result << " °C" << endl;
                displayTemperatureFacts(result);
                break;

            case 5:  // Fahrenheit to Kelvin
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                result = Fahrenheit_To_Kelvin(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °F = " << result << " K" << endl;
                displayTemperatureFacts(result);
                break;


            case 6:  // Kelvin to Fahrenheit
                cout << "Enter temperature in Kelvin: ";
                cin >> inputTemp;
                result = Kelvin_To_Fahrenheit(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " K = "<< result << " °F" << endl;
                displayTemperatureFacts(result);
                break;


            case 7:  // Exit
                keepRunning = false;
                cout << "Thank you for using the Converter!" << endl;
                break;


            default:
                cout << "Invalid choice! "<< "Please select a number between 1 and 7."<< endl;

                break;
        }
    }

    return 0;
}
