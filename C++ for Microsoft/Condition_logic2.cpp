#include <iostream>
using namespace std;

int main() {
    int playerLevel;
    char difficulty;
    
    // STEP 1: Get the player's level
    cout << "Enter your player level (1-10): ";
    cin >> playerLevel;
    // Check whether the entered level is within
    // the valid range of 1 to 10.
    if (playerLevel < 1 || playerLevel > 10) {
        cout << "Invalid level! Setting to level 1." << endl;
        playerLevel = 1;
    }

    // STEP 2: Display difficulty options
    cout << "\nChoose difficulty:" << endl;
    cout << "E - Easy" << endl;
    cout << "M - Medium" << endl;
    cout << "H - Hard" << endl;
    cout << "Enter choice (E/M/H): ";
    cin >> difficulty;

    switch (difficulty) {
        // EASY MODE
        // Both uppercase E and lowercase e are accepted.
        case 'E':
        case 'e':

            cout << "Easy mode selected." << endl;

            // Experienced players at level 5 or higher
            // receive an extra health bonus.
            if (playerLevel >= 5) {
                cout << "Bonus: Extra health for experienced player!"<< endl;
            }
            break;
        case 'M':
        case 'm':

            cout << "Medium mode selected." << endl;

            // Players at level 7 or higher unlock
            // a special weapon.
            if (playerLevel >= 7) {
                cout << "Bonus: Special weapon unlocked!" << endl;
            }

            // Stop the switch here.
            break;


        // --------------------------------------------------
        // HARD MODE
        // --------------------------------------------------

        // Both uppercase H and lowercase h are accepted.
        case 'H':
        case 'h':

            cout << "Hard mode selected. Good luck!" << endl;

            // Check whether the player has reached
            // level 8 or higher.
            if (playerLevel >= 8) {

                // High-level players receive elite status.
                cout << "Bonus: Elite status achieved!" << endl;

            } else {

                // Players below level 8 receive a warning
                // because hard mode may be difficult for them.
                cout << "Warning: This will be challenging "
                     << "for your level." << endl;
            }

            // Stop the switch here.
            break;


        // --------------------------------------------------
        // INVALID DIFFICULTY
        // --------------------------------------------------

        // If the user enters something other than
        // E, e, M, m, H, or h, this case runs.
        default:

            cout << "Invalid choice! "<< "Defaulting to Easy mode." << endl;
            // Actually change the difficulty to Easy.
            difficulty = 'E';

            // Stop the switch.
            break;
    }
    // STEP 4: Start the game
    // Display the final player level.
    cout << "\nGame starting with Level "<< playerLevel << " character..." << endl;

    return 0;
}