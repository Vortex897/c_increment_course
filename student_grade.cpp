#include <iostream>

using namespace std;

void cleanScreen() {
    for (int i = 0; i < 100; i++){
        cout << "\n";
    }
}

int main() {
    cleanScreen();
    float grade;

    cout << "Type the student grade (0 to 10): ";
    cin >> grade;

    if (grade >= 9 && grade <= 10) {
        cout << "Concept A" << endl;
    }
    else if (grade >= 7 && grade < 9) {
        cout << "Concept B" << endl;
    }
    else if (grade >= 5 && grade < 7) {
        cout << "Concept C" << endl;
    }
    else if (grade >= 0 && grade < 5) {
        cout << "Concept D" << endl;
    }
    else {
        cout << "Invalid grade!" << endl;
    }

    return 0;
}
