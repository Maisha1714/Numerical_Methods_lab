#include <bits/stdc++.h> 
using namespace std; 
void jacobi(vector<vector<double>>& A, vector<double>& b, int maxit, vector<double>& x) { 
    int n = A.size(); // Determine the size of the system 
    vector<double> x_new(n); 
    cout << "Iteration Results:" << endl; 
    for (int iter = 1; iter <= maxit; iter++) { 
        for (int i = 0; i < n; i++) { 
            x_new[i] = b[i]; 
            for (int j = 0; j < n; j++) { 
                if (j != i) { 
                    x_new[i] -= A[i][j] * x[j]; 
                } 
            } 
            x_new[i] /= A[i][i]; 
        } 
        x = x_new; // Update the solution vector 
        cout << "Iteration " << iter << ": ";// Display results for the current iteration 
        for (int i = 0; i < n; i++) { 
            cout << fixed << setprecision(4) << x[i] << " "; 
        } 
        cout << endl; 
    } 
} 
int main() { 
    int n; 
    cout << "Enter the number of variables: "; 
    cin >> n; 
    vector<vector<double>> A(n, vector<double>(n)); 
    vector<double> b(n); 
    vector<double> x(n, 0); // Initialize the solution vector with zeros 
    cout << "Enter the coefficient matrix A:" << endl; 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            cin >> A[i][j]; 
        } 
8 
 
    } 
    cout << "Enter the constant vector b:" << endl; 
    for (int i = 0; i < n; i++) { 
        cin >> b[i]; 
    } 
    int maxit; 
    cin>>maxit; 
    jacobi(A, b, maxit, x); 
    return 0; 
}