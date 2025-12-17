#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter how many numbers you want to insert: ";
    cin >> n;

    cout << "Enter " << n <<" Number\n" ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Numbers in the array are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }

    return 0;
}
