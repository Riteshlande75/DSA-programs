#include <iostream>
using namespace std;

#define MAX 100  
int stackArr[MAX];
int top = -1;

// PUSH operation
void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot push.\n";
        return;
    }
    top++;     
    stackArr[top] = value;
    cout << value << " pushed into stack.\n";
}

// POP operation
void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Cannot pop.\n";
        return;
    }
    cout << stackArr[top] << " popped from stack.\n";
    top--;
}

// Display stack
void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }
}
