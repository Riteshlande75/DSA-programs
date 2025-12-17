#include <iostream>
using namespace std;

int main() {
    int arr[10][10], n, sum = 0;

    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    // Calculate diagonal sum
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];   // main diagonal elements
    }

    cout << "Diagonal sum = " << sum << endl;

    return 0;
}
