#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Task 2: Display the Vector
void displayVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Task 1: Create and Initialize a Vector
    vector<int> numbers = {9, 1, 7, 2, 8, 6};

    // Display initial vector
    cout << "Initial vector: ";
    displayVector(numbers);

    // Task 3: Sort the Vector in Ascending Order
    sort(numbers.begin(), numbers.end());

    // Display sorted vector
    cout << "\nSorted vector: ";
    displayVector(numbers);

    // Task 4: Add Elements to the Vector
    numbers.push_back(5);
    numbers.push_back(10);
    numbers.push_back(12);

    // Display updated vector
    cout << "\nUpdated vector: ";
    displayVector(numbers);

    // Display output in requested format
    cout << "\nInput Number: 5 " << endl;
 // Change this to any desired input number
    for (int i = 1; i <=5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j ;
        }
        cout << endl;
    }
    cout << "\nInput Number: 5 " << endl;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\nInput Number: 5 " << endl;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
