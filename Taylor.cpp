#include <bits/stdc++.h>
using namespace std;
double f(double x, double y) {
    return x + y; 
}
double f1(double x, double y) {
    return 1 + f(x, y); 
}
double f2(double x, double y) {
    return f1(x, y); 
}
double f3(double x, double y) {
    return 0; 
}
int main() {
    double x0, y0, h, x_target;
    cout << "Enter initial value of x (x0): ";
    cin >> x0;
    cout << "Enter initial value of y (y0): ";
    cin >> y0;
    cout << "Enter step size (h): ";
    cin >> h;
    cout << "Enter the target x value: ";
    cin >> x_target;
    int n = (x_target - x0) / h;
    cout<<"value of n"<<n<<endl;
    cout << "\nInitial values:\n";
    cout << "x0 = " << fixed << setprecision(6) << x0 << ", y0 = " << y0 << endl;
    cout << "Step size h = " << h << endl;
    double k1_step1 = f(x0, y0);   
    double k2_step1 = f1(x0, y0);  
    double k3_step1 = f2(x0, y0);  
    double k4_step1 = f3(x0, y0);  
    cout << "\nStep 1 (Current x = " << x0 << ", y = " << y0 << "):\n";
    cout << "  f(x, y)  = " << k1_step1 << " (dy/dx)\n";
    cout << "  f'(x, y) = " << k2_step1 << " (d²y/dx²)\n";
    cout << "  f''(x, y) = " << k3_step1 << " (d³y/dx³)\n";
    cout << "  f'''(x, y) = " << k4_step1 << " (d⁴y/dx⁴)\n";
    y0 += h * k1_step1 + (h * h / 2) * k2_step1 + (h * h * h / 6) * k3_step1 + (h * h * h * h / 24) * k4_step1;
    x0 += h;  
    cout << "  New y = " << fixed << setprecision(6) << y0 << " (after Taylor expansion)\n";
    double k1_step2 = f(x0, y0);   
    double k2_step2 = f1(x0, y0);  
    double k3_step2 = f2(x0, y0); 
    double k4_step2 = f3(x0, y0); 
    cout << "\nStep 2 (Current x = " << x0 << ", y = " << y0 << "):\n";
    cout << "  f(x, y)  = " << k1_step2 << " (dy/dx)\n";
    cout << "  f'(x, y) = " << k2_step2 << " (d²y/dx²)\n";
    cout << "  f''(x, y) = " << k3_step2 << " (d³y/dx³)\n";
    cout << "  f'''(x, y) = " << k4_step2 << " (d⁴y/dx⁴)\n";
    y0 += h * k1_step2 + (h * h / 2) * k2_step2 + (h * h * h / 6) * k3_step2 + (h * h * h * h / 24) * k4_step2;
    x0 += h; 
    cout << "  New y = " << fixed << setprecision(6) << y0 
              << " (after Taylor expansion)\n";

    cout << "\nFinal value: y(" << x_target << ") = " << fixed << setprecision(6) << y0 << endl;

    return 0;
}