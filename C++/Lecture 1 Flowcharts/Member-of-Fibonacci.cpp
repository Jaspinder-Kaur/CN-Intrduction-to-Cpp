#include <iostream>
using namespace std;
bool isFibonacci(int n) {
    if (n <= 0) return false;  // Fibonacci numbers are positive

    // Start with the first two Fibonacci numbers
    int a = 0, b = 1;

    // Check if the number is part of the Fibonacci sequence
    while (b < n) {
        int temp = b;
        b = a + b;
        a = temp;
    }

    return (b == n);  // If we find the number, return true
}

int main() {
    int num;

    // Input the number
    cout << "Enter a positive number: ";
    cin >> num;

    // Ensure the number is positive
    if (num <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;  // Exit the program if number is not positive
    }

    // Check if the number is in the Fibonacci sequence
    if (isFibonacci(num)) {
        cout << "Yes, " << num << " is part of the Fibonacci sequence." << endl;
    } else {
        cout << "No, " << num << " is not part of the Fibonacci sequence." << endl;
    }

    return 0;
}
