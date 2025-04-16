#include <iostream>
using namespace std;

#define MAX_SIZE 5

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() { top = -1; }

    void push(int data) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow! Cannot push " << data << ".\n";
            return;
        }
        arr[++top] = data;
        cout << "Pushed " << data << " onto the stack.\n";
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! Nothing to pop.\n";
            return;
        }
        cout << "Popped " << arr[top--] << " from the stack.\n";
    }

    int peek() {
        return (top < 0) ? -1 : arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    cout << "Top element: " << myStack.peek() << endl;
    myStack.pop();
    myStack.pop();
    cout << "Stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
