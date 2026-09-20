#include <iostream>
using namespace std;

// Part 1: Function to display memory address and pointed-to value
void analyze_pointer(int *ptr) {
    if (ptr != nullptr) {
        cout << "Memory Location (Address): " << ptr << endl;
        cout << "Pointed Value: " << *ptr << endl;
    } else {
        cout << "Pointer is null!" << endl;
    }
}

int main() {
    cout << "--- Stack Allocation ---" << endl;
    // Task 2a: Allocate an int on the stack
    int iValue = 42;
    // Pass its address using the address-of (&) operator
    analyze_pointer(&iValue);

    cout << "\n--- Heap Allocation ---" << endl;
    // Task 2b: Allocate an int on the heap using 'new'
    int *heapPtr = new int;
    *heapPtr = 99;
    // Pass the pointer directly to analyze_pointer
    analyze_pointer(heapPtr);

    // Free heap allocated memory
    delete heapPtr;
    heapPtr = nullptr;

    return 0;
}