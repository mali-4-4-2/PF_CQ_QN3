
#include <iostream>
using namespace std;

// Function to calculate the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction
int reduce(int &num, int &denom) {
    // Check for invalid input
    if (num <= 0 || denom <= 0) {
        return 0;  // Indicate failure to reduce
    }

    int divisor = gcd(num, denom);  // Calculate the GCD of num and denom

    // Divide both num and denom by their GCD to reduce the fraction
    num /= divisor;
    denom /= divisor;

    return 1;  // Indicate success
}

int main() {
    int num, denom;

    cout << "Enter the numerator: ";
    cin >> num;
    cout << "Enter the denominator: ";
    cin >> denom;

    int result = reduce(num, denom);

    if (result == 1) {
        cout << "The reduced fraction is: " << num << "/" << denom << endl;
    } else {
        cout << "Reduction failed due to invalid input." << endl;
    }
return 0;}
