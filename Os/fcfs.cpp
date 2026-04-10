#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int bt[] = {5, 3, 8, 6}; // burst time
    int wt[10], tat[10];

    wt[0] = 0;

    for(int i = 1; i < n; i++)
        wt[i] = wt[i-1] + bt[i-1];

    for(int i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];

    cout << "Process\tWT\tTAT\n";
    for(int i = 0; i < n; i++)
        cout << i+1 << "\t" << wt[i] << "\t" << tat[i] << endl;
}