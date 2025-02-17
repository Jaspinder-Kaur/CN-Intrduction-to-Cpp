#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false; // 1 and less are not prime
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; // divisible by i, so not prime
        }
    }
    return true; // number is prime
}

int main() {
    int start, end;
    
    // Input the range
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: \n";
    
    // Loop through the range and print primes
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
