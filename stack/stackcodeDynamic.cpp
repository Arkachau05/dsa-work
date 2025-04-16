#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> stackContainer;

public:
    void push(int data) {
        stackContainer.push_back(data);
        cout << "Pushed " << data << " onto the stack.\n";
    }

    void pop() {
        if (stackContainer.empty()) {
            cout << "Stack is empty! Nothing to pop.\n";
            return;
        }
        cout << "Popped " << stackContainer.back() << " from the stack.\n";
        stackContainer.pop_back();
    }

    int peek() {
        return stackContainer.empty() ? -1 : stackContainer.back();
    }

    bool isEmpty() {
        return stackContainer.empty();
    }
};

int main() {
    Stack myStack;
    myStack.push(7);
    myStack.push(14);
    cout << "Top element: " << myStack.peek() << endl;
    myStack.pop();
    myStack.pop();
    return 0;
}
