#include <iostream>
using namespace std;

int queueArr[100];
int front = -1, rear = -1;

// ENQUEUE operation
void enqueue(int value) {
    if (rear == (100) - 1) {
        cout << "Queue Overflow! Cannot insert.\n";
        return;
    }

    if (front == -1)  front = 0;// first insertion
     rear++;
    cout << queueArr[rear] << " inserted into queue.\n";
}

// DEQUEUE operation
void dequeue() {
    if (front == -1 ) {
        cout << "Queue Underflow! Cannot delete.\n";
        return;
    }

    cout << queueArr[front] << " removed from queue.\n";
    front++;
}

// DISPLAY queue
void display() {
    if (front == -1 ) {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
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
