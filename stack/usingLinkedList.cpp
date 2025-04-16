#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int data) {
        value = data;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;
public:
    Stack() { top = nullptr; }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
        cout << "Pushed " << data << " onto the stack.\n";
    }

    void pop() {
        if (!top) {
            cout << "Stack is empty! Nothing to pop.\n";
            return;
        }
        cout << "Popped " << top->value << " from the stack.\n";
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        return top ? top->value : -1;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack myStack;
    myStack.push(5);
    myStack.push(10);
    cout << "Top element: " << myStack.peek() << endl;
    myStack.pop();
    cout << "Top after pop: " << myStack.peek() << endl;
    return 0;
}
