#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    // Best case (first element)
    int key1 = 10;
    int comparisons1 = 0;

    for(int i = 0; i < n; i++) {
        comparisons1++;
        if(arr[i] == key1) break;
    }

    // Worst case (last element)
    int key2 = 50;
    int comparisons2 = 0;

    for(int i = 0; i < n; i++) {
        comparisons2++;
        if(arr[i] == key2) break;
    }

    cout << "Best case comparisons: " << comparisons1 << endl;
    cout << "Worst case comparisons: " << comparisons2 << endl;
}