#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> myStack;
    queue<int> myQueue;

    // Populate the stack (example)
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    // Print the elements in the stack
    stack<int> tempStack = myStack; // Create a temporary stack to preserve the original stack
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Transfer elements from stack to queue
    while (!myStack.empty()) {
        myQueue.push(myStack.top());
        myStack.pop();
    }

    // Print the elements in the queue (now in FIFO order)
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }

    cout << endl;

    return 0;
}