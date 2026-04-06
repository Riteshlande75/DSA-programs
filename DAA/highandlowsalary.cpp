#include <iostream>
using namespace std;

int main() {
    int arr[] = {30000, 50000, 25000, 70000, 40000};
    int n = 5;

    int max = arr[0], min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cout << "Max: " << max << "\nMin: " << min;
}