#include<iostream>
#include<cmath>
using namespace std;

int binarytoDecimal(int binaryNo) {
    int decimalNo = 0;
    int i = 0;
    while (binaryNo) {
        int bit = binaryNo % 10;
        decimalNo = decimalNo + bit * pow(2,i++);
        binaryNo = binaryNo / 10;
    }
    return decimalNo;
}

int main() {
    int binaryNum;
    cout << "Enter a binary number: ";
    cin >> binaryNum;

    int decimalNum = binarytoDecimal(binaryNum);
    cout << "Binary conversion of " << binaryNum << " " << "is " << decimalNum; 
}