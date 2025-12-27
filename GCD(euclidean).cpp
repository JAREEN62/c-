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

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << GCD(num1, num2) << endl;

    return 0;
}
