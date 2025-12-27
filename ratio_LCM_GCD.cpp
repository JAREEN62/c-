#include <iostream>
using namespace std;

// Function to calculate the Greatest Common Divisor (GCD) using Euclidean Algorithm
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
    return (a * b) / GCD(a, b);
}

// Function to calculate the ratio of LCM to GCD
float numRatio(int a, int b) {
    int gcd = GCD(a, b);
    int lcm = LCM(a, b);
    return static_cast<float>(lcm) / gcd;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display the ratio of LCM to GCD
    cout << "Ratio of LCM to GCD: " << numRatio(num1, num2) << endl;

    return 0;
}

