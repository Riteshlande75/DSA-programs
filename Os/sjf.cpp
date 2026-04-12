#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int bt[n], wt[n], tat[n];

    cout << "Enter burst times:\n";
    for(int i = 0; i < n; i++)
        cin >> bt[i];

    // Sort burst time
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(bt[j] > bt[j+1])
                swap(bt[j], bt[j+1]);
        }
    }

    wt[0] = 0;
    for(int i = 1; i < n; i++)
        wt[i] = wt[i-1] + bt[i-1];

    for(int i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];

    cout << "\nBT\tWT\tTAT\n";
    for(int i = 0; i < n; i++)
        cout << bt[i] << "\t" << wt[i] << "\t" << tat[i] << endl;
}