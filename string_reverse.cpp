#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Dynamically allocate memory for a string on the heap
    string *strPtr = new string;

    // Get input string from the user
    cout << "Enter a string to reverse: ";
    getline(cin, *strPtr);

    // Reverse the string using standard library algorithm
    reverse(strPtr->begin(), strPtr->end());

    // Display the reversed result
    cout << "Reversed string: " << *strPtr << endl;

    // Free the dynamically allocated memory
    delete strPtr;
    strPtr = nullptr;

    return 0;
}