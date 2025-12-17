#include <iostream>
using namespace std;

int main() {
    int n ;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum=0;  
    // Calculate sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of elements = " << sum ;

    return 0;
}
