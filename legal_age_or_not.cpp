#include <iostream>

using namespace std;

void cleanScreen() {
    for (int i = 0; i < 100; i++){
        cout << "\n";
    }
}

int main() {
    cleanScreen();    
    int age;
    
    cout << "How old are you? ";
    cin >> age;

    if (age >= 18) {
        cout << "You are of legal age!" << endl;
    }
    else {
        cout << "You are not of legal age!" << endl;
    }

    return 0;
}
