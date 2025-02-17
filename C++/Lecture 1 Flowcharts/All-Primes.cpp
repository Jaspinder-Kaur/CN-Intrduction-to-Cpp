#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;  // Divisible by i, so it's not prime
        }
    }
    return true;  // If no divisors are found, it's prime
}

// Function to print all prime numbers in a given range
void printPrimesInRange(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            cout << i << " ";  // Print the prime number
        }
    }
    cout << endl;
}

int main() {
    int start, end;

    // Input the range values
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    // Check if the range is valid
    if (start <= 0 || end <= 0 || start > end) {
        cout << "Enter valid positive range where start is less than or equal to end." << endl;
        return 1;  // Exit the program if the range is invalid
    }

    // Print prime numbers in the given range
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    printPrimesInRange(start, end);

    return 0;
}
