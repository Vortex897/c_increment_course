#include <iostream>

using namespace std;

void cleanScreen() {
    for (int i = 0; i < 100; i++){
        cout << "\n";
    }
}

int main() {
    cleanScreen();
    for (int i = 0; i <= 10; i++) {
        cout << i << endl; 
    }
    
    return 0;
}
