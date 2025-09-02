#include <iostream>

using namespace std;

void cleanScreen() {
    for (int i = 0; i < 100; i++){
        cout << "\n";
    }
}

int main() {
    cleanScreen();
    int number;
    cout << "Type a number: ";
    cin >> number;

    string result = (number % 2 == 0) ? "Pair" : "Odd";

    cout << "The number is: " << result << endl;
    
    return 0;
}
