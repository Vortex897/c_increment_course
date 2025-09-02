#include <iostream>

using namespace std;

void cleanScreen() {
    for (int i = 0; i < 100; i++){
        cout << "\n";
    }
}

int main() {
    cleanScreen();
    for (int i = 0; i <= 5; i++) {
        cout << "Value of i: " << i << endl;
        if (i == 3) {
            continue;
        }
    }
    
    return 0;
}
