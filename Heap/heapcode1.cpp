#include <iostream>
#include <vector>
using namespace std;

// Function to perform Max-Heapify on a subtree rooted at index i
void maxHeapify(vector<int>& heap, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child index
    int right = 2 * i + 2; // Right child index

    // Check if left child exists and is greater than root
    if (left < n && heap[left] > heap[largest]) {
        largest = left;
    }

    // Check if right child exists and is greater than the current largest
    if (right < n && heap[right] > heap[largest]) {
        largest = right;
    }

    // If largest is not the root, swap and recursively heapify the affected subtree
    if (largest != i) {
        swap(heap[i], heap[largest]);
        maxHeapify(heap, n, largest);
    }
}

// Function to build a max heap from an unsorted array
void buildMaxHeap(vector<int>& heap) {
    int n = heap.size();
    
    // Start from the last non-leaf node and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(heap, n, i);
    }
}

// Function to print the heap
void printHeap(const vector<int>& heap) {
    for (int val : heap) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> heap = {4, 10, 3, 5, 1}; // Example unsorted array
    
    cout << "Original Array: ";
    printHeap(heap);
    
    buildMaxHeap(heap);
    
    cout << "Max Heap: ";
    printHeap(heap);
    
    return 0;
}
