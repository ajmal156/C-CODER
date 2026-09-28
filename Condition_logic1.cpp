#include <iostream>
using namespace std;
int main() {
    int menuChoice;
    cout << "=== GAME MENU ===" << endl;
    cout << "1. Start New Game" << endl;
    cout << "2. Load Game" << endl;
    cout << "3. View High Scores" << endl;
    cout << "4. Settings" << endl;
    cout << "5. Exit Game" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> menuChoice;
    switch (menuChoice) {
        case 1:
            cout << "Starting new adventure..." << endl;
            cout << "Welcome, brave explorer!" << endl;
             break;
        case 2:
            cout << "Loading saved game..." << endl;
            cout << "Game loaded successfully." << endl;
            break;
        case 3:
            cout << "=== HIGH SCORES ===" << endl;
            cout << "1. Alice - 15,000 points" << endl;
            cout << "2. Bob - 12,500 points" << endl;
            break;
        case 4:
            cout << "Opening settings menu..." << endl;
            cout << "Sound: ON, Difficulty: Medium" << endl;
            break;
        case 5:
            cout << "Thanks for playing! Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please select 1-5." << endl;
            break;
        }

    return 0;
}