#include<iostream>

using namespace std;

// check a num whether it is positive, negative, zero

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n>0) {
        cout << "Positive num" << endl;
    }
    else if (n<0) {
        cout << "Negative num" << endl;
    }
    else {
        cout << "Zero" << endl; 
    }
}