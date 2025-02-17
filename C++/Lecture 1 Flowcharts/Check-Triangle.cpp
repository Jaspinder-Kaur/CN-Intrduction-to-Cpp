#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;

    // Input the sides of the triangle
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Check if the input forms a valid triangle
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        cout << "Sides must be positive numbers." << endl;
        return 1;
    }

    // Check for a valid triangle (sum of two sides must be greater than the third side)
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        cout << "This is not a valid triangle." << endl;
        return 1;
    }

    // Determine the type of triangle based on the side lengths
    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is Equilateral." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is Isosceles." << endl;
    } else {
        cout << "The triangle is Scalene." << endl;
    }

    return 0;
}
