#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;

    // Input the value of N
    cout << "Enter the value of N: ";
    cin >> N;

    // Check if N is positive
    if (N <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1; // Exit the program if N is not positive
    }

    // Sum all even numbers from 1 to N
    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }
