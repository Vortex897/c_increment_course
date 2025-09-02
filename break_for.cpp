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
        if (i == 3) {
            break;
        }
        cout << "i = " << i << endl;
    }
    
    return 0;
}
