#include <iostream>
using namespace std;

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;

    // Input size of matrices
    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    // Input Matrix A
    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    // Input Matrix B
    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    int choice;
    while (true) {
        cout << "\n--- Matrix Operations ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            // Matrix Addition
            case 1:
                if (r1 != r2 || c1 != c2) {
                    cout << "Addition not possible! Size mismatch.\n";
                } else {
                    for (int i = 0; i < r1; i++)
                        for (int j = 0; j < c1; j++)
                            C[i][j] = A[i][j] + B[i][j];

                    cout << "Result (A + B):\n";
                    for (int i = 0; i < r1; i++) {
                        for (int j = 0; j < c1; j++)
                            cout << C[i][j] << " ";
                        cout << endl;
                    }
                }
                break;

            // Matrix Subtraction
            case 2:
                if (r1 != r2 || c1 != c2) {
                    cout << "Subtraction not possible! Size mismatch.\n";
                } else {
                    for (int i = 0; i < r1; i++)
                        for (int j = 0; j < c1; j++)
                            C[i][j] = A[i][j] - B[i][j];

                    cout << "Result (A - B):\n";
                    for (int i = 0; i < r1; i++) {
                        for (int j = 0; j < c1; j++)
                            cout << C[i][j] << " ";
                        cout << endl;
                    }
                }
                break;

            // Matrix Multiplication
            case 3:
                if (c1 != r2) {
                    cout << "Multiplication not possible! (c1 must equal r2)\n";
                } else {
                    for (int i = 0; i < r1; i++) {
                        for (int j = 0; j < c2; j++) {
                            C[i][j] = 0;
                            for (int k = 0; k < c1; k++) {
                                C[i][j] += A[i][k] * B[k][j];
                            }
                        }
                    }

                    cout << "Result (A × B):\n";
                    for (int i = 0; i < r1; i++) {
                        for (int j = 0; j < c2; j++)
                            cout << C[i][j] << " ";
                        cout << endl;
                    }
                }
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}

