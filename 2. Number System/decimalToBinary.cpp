#include <iostream>
#include <cmath>
using namespace std;

// division method
int decimalToBinary1(int n) {
    int binary = 0;
    int i = 0;
    while (n > 0) {
        int m = n % 2;
        binary = m * pow(10, i++) + binary;
        n = n / 2;
    }
    return binary;
}

// bitwise method
int decimalToBinary2(int n) {
    int binary = 0;
    int i = 0;
    while (n > 0) {
        int m = (n&1);
        binary = m * pow(10, i++) + binary;
        n = n >> 1;
    }
    return binary;
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    // division
    int binaryNum = decimalToBinary1(num);
    cout << "Binary number of " << num << " " << "is" << " " << binaryNum << endl;

    // btiwise
    int binaryNo = decimalToBinary2(num);
    cout << "Binary number of " << num << " " << "is" << " " << binaryNo << endl;
}