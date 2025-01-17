#include <bits/stdc++.h>
using namespace std;

// Function definition
// f(x) = x^2 - 4x - 10
double f(double x) {
    return x * x - 4 * x - 10;
}

int main() {
    // Initial guesses
    double x1 = 4.0;
    double x2 = 2.0;
    double x3;
    int iterations = 5;

    cout << fixed << setprecision(4);
    cout << "Secant Method Iterations:\n";
    cout << "Iter\tx1\t\tx2\t\tx3\t\tf(x1)\t\tf(x2)\t\n";

    for (int i = 1; i <= iterations; ++i) {
        double fx1 = f(x1);
        double fx2 = f(x2);

        // Secant Method Formula
        x3 = x2 - (fx2 * (x2 - x1)) / (fx2 - fx1);

        // Output the current iteration details
        cout << i << "\t" << x1 << "\t" << x2 << "\t" << x3 << "\t" << fx1 << "\t" << fx2 << "\n";

        // Update variables for next iteration
        x1 = x2;
        x2 = x3;
    }

    std::cout << "\nApproximate root after " << iterations << " iterations: " << x3 << "\n";

    return 0;
}
