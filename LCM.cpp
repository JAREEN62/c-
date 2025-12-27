#include <iostream>
using namespace std;

// Function to calculate the Greatest Common Divisor (GCD)
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM)
int LCM(int a, int b) {
    // Calculate LCM using the formula: LCM = (a * b) / GCD(a, b)
    return (a * b) / GCD(a, b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display the LCM
    cout << "LCM of " << num1 << " and " << num2 << " is: " << LCM(num1, num2) << endl;

    return 0;
}