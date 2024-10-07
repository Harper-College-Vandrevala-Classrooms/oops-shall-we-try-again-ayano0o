#include <iostream>
#include <limits>

using namespace std;

int getInput( int lowerBound, int upperBound, const string& prompt, const string& error) {
    int input;
    bool validResponse = false;

    while (!validResponse) {
        cout << prompt << " : ";
        cin >> input;

        if (cin.fail() || input < lowerBound || input > upperBound) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << error << endl;
            } 
            else {
            validResponse = true; 
        }
    }

    return input; 
}

int main() {

    int choice;

    choice = getInput(1, 100, "Enter a number between 1 and 100", "Error: Number must be between 1 and 100");
    cout << "You entered: " << choice << endl;

    choice = getInput(1, 50, "Choose a number between 1 and 50", "Error: Number must be between 1 and 50");
    cout << "You entered: " << choice << endl;

    choice = getInput(55, 237, "Choose a number between 55 and 237", "Error: Number must be between 55 and 237");
    cout << "You entered: " << choice << endl;

    return 0;
}
