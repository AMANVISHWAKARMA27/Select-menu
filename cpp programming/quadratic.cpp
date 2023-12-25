#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    switch(signbit(discriminant)) {
        case 0: // discriminant is positive
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Two real and distinct roots:" << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
            break;
        case 1: // discriminant is negative
            cout << "No real roots. Complex roots exist." << endl;
            break;
        default: // discriminant is zero
            root1 = -b / (2 * a);
            cout << "One real root:" << endl;
            cout << "Root = " << root1 << endl;
            break;
    }

    return 0;
}