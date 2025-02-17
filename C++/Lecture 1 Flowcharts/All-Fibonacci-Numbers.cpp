#include <iostream>
using namespace std;

// Function to print all Fibonacci numbers in the given range
void printFibonacciInRange(int start, int end) {
    int a = 0, b = 1;

    // Check if the range includes the first Fibonacci number (0)
    if (start <= a && a <= end) {
        cout << a << " ";
    }

    // Check if the range includes the second Fibonacci number (1)
    if (start <= b && b <= end) {
        cout << b << " ";
    }

    // Generate Fibonacci numbers and print those within the range
    while (true) {
        int next = a + b;
        if (next > end) break;  // Stop if the next Fibonacci number exceeds the range

        if (next >= start) {
            cout << next << " ";  // Print the number if it's within the range
        }

        // Move to the next Fibonacci numbers
        a = b;
        b = next;
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

    // Check if the start is positive
    if (start <= 0 || end <= 0 || start > end) {
        cout << "Enter valid positive range where start is less than or equal to end." << endl;
        return 1;  // Exit the program if the range is invalid
    }

    // Print Fibonacci numbers in the given range
    cout << "Fibonacci numbers between " << start << " and " << end << " are: ";
    printFibonacciInRange(start, end);

    return 0;
}
