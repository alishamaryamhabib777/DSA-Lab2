#include <iostream>
#include <cassert>

using namespace std;

// Incomplete stub to simulate initial test failure
bool isSorted(const int* arr, const int size) {
    return false; // Will fail for sorted arrays
}

// 1. Sorted array
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

// 2. Unsorted array
void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}

// 3. Array with duplicates
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

// 4. Single element array
void testSingleElement() {
    int arr[] = {10};
    assert(isSorted(arr, 1) == true);
}

// 5. Descending array
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

// 6. Array with negative values
void testNegativeValues() {
    int arr[] = {-10, -5, 0, 5, 10};
    assert(isSorted(arr, 5) == true);
}

// 7. Custom Edge Case 1: Empty array
void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
}

// 8. Custom Edge Case 2: All identical elements
void testAllIdenticalElements() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
}

int main() {
    cout << "Running tests..." << endl;
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllIdenticalElements();
    cout << "All tests passed!" << endl;
    return 0;
}