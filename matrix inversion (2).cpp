#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s[10][10], s1[10][10], transpose[10][10], adj[10][10];
    double inv[10][10], determinant;
    int r, c, r1, c1;

    cout << "Enter the row number of the first matrix:" << endl;
    cin >> r;
    cout << "Enter the column number of the first matrix:" << endl;
    cin >> c;
    cout << "\n2D Array Input:\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> s[i][j];
        }
    }

    cout << "\nThe 2-D Array is:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\t" << s[i][j];
        }
        cout << endl;
    }

    cout << "Enter the row number of the second matrix:" << endl;
    cin >> r1;
    cout << "Enter the column number of the second matrix:" << endl;
    cin >> c1;
    cout << "\n2D Array Input:\n";

    for (int k = 0; k < r1; k++)
    {
        for (int l = 0; l < c1; l++)
        {
            cin >> s1[k][l];
        }
    }
    cout << "\nThe 2-D Array is:\n";
    for (int k = 0; k < r1; k++)
    {
        for (int l = 0; l < c1; l++)
        {
            cout << "\t" << s1[k][l];
        }
        cout << endl;
    }

    if (r == 3 && c == 3)
    {
        // Calculate determinant for 3x3 matrix
        int x = (s[1][1] * s[2][2]) - (s[2][1] * s[1][2]);
        int y = (s[1][0] * s[2][2]) - (s[2][0] * s[1][2]);
        int z = (s[1][0] * s[2][1]) - (s[2][0] * s[1][1]);

        determinant = (s[0][0] * x) - (s[0][1] * y) + (s[0][2] * z);

        cout << "\nThe Determinant of the Matrix = " << determinant;

        if (determinant == 0)
        {
            cout << "\nThe matrix is singular and cannot have an inverse.";
            return 0;
        }

        // Computing transpose of the matrix
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
            {
                transpose[j][i] = s[i][j];
            }

        // Printing the transpose
        cout << "\nTranspose of Matrix: " << endl;
        for (int i = 0; i < c; ++i)
        {
            for (int j = 0; j < r; ++j)
            {
                cout << transpose[i][j] << " ";
            }
            cout << endl;
        }

        // Compute adjoint
        adj[0][0] = transpose[1][1] * transpose[2][2] - transpose[1][2] * transpose[2][1];
        adj[0][1] = -(transpose[1][0] * transpose[2][2] - transpose[1][2] * transpose[2][0]);
        adj[0][2] = transpose[1][0] * transpose[2][1] - transpose[1][1] * transpose[2][0];
        adj[1][0] = -(transpose[0][1] * transpose[2][2] - transpose[0][2] * transpose[2][1]);
        adj[1][1] = transpose[0][0] * transpose[2][2] - transpose[0][2] * transpose[2][0];
        adj[1][2] = -(transpose[0][0] * transpose[2][1] - transpose[0][1] * transpose[2][0]);
        adj[2][0] = transpose[0][1] * transpose[1][2] - transpose[0][2] * transpose[1][1];
        adj[2][1] = -(transpose[0][0] * transpose[1][2] - transpose[0][2] * transpose[1][0]);
        adj[2][2] = transpose[0][0] * transpose[1][1] - transpose[0][1] * transpose[1][0];

        cout << "\nAdjoint of Matrix: " << endl;
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }

        // Compute inverse
        for (int i = 0; i < c; ++i)
        {
            for (int j = 0; j < r; ++j)
            {
                inv[i][j] = (1 / determinant) * (adj[i][j]);
            }
        }

        cout << "\nInverse of Matrix: " << endl;
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                cout << inv[i][j] << " ";
            }
            cout << endl;
        }

        // Multiply s1 with inverse of s
        if (r1 == 3 && c1 == 1)
        {
            double x1 = s1[0][0] * inv[0][0] + s1[1][0] * inv[0][1] + s1[2][0] * inv[0][2];
            double y1 = s1[0][0] * inv[1][0] + s1[1][0] * inv[1][1] + s1[2][0] * inv[1][2];
            double z1 = s1[0][0] * inv[2][0] + s1[1][0] * inv[2][1] + s1[2][0] * inv[2][2];

            cout << "\nResult of multiplication:" << endl;
            cout << x1 << endl;
            cout << y1 << endl;
            cout << z1 << endl;
        }
        else
        {
            cout << "\nThe second matrix must be 3x1 for multiplication with the inverse of the first matrix.";
        }
    }
    else
    {
        cout << "\nThe first matrix must be 3x3 to calculate its determinant and inverse.";
    }

    return 0;
}


/*
3 3
3 1 2
2 -3 -1
1 2 1
3 1
3
-3
4
*/