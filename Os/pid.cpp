#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    pid_t pid = fork();

    if(pid == 0) {
        // Child process
        cout << "Child Process ID: " << getpid() << endl;
    } else if(pid > 0) {
        // Parent process
        cout << "Parent Process ID: " << getpid() << endl;
    } else {
        cout << "Fork failed!";
    }
}