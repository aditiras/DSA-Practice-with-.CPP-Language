#include<iostream>

using namespace std;

// check a num whether it is even or odd

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n%2 == 0) {
        cout << "Even num" << endl;
    }
    else {
        cout << "Odd num" << endl;
    }
}