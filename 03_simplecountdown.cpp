#include <iostream>
using namespace std;

int main() {
    int seconds;

    cout << "🚀 Countdown Timer" << endl;


    while (true) {  // Infinite loop — we'll break only when input is valid
        cout << "Enter the number of seconds to count down from: ";
        cin >> seconds;

        if (seconds > 0) {
            break;  
        }

        
        cout << "Invalid input: Please enter a positive number (1 or higher)." << endl;
        cout << "Let's try again...\n" << endl;
    }

    cout << "\nCountdown starting..." << endl;

    // Main countdown loop
    for (int i = seconds; i >= 1; i--) {
        cout << "T-" << i << " seconds" << endl;
        cout << "Press Enter to continue...";
        cin.get(); cin.get();  // Wait for Enter
    }

    cout << "T-0 seconds" << endl;
    cout << "🎉 🚀 BLASTOFF! 🚀 🎉" << endl;

    return 0;
}
