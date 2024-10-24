#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> li{1, 2, 3, 4, 5, 6, 7};
    vector<int> newArray;
    int k = 3;
    int n = li.size();  // Store the size of the vector

    // Push the last k elements to the new array
    for (int i = n - k; i < n; i++) {
        newArray.push_back(li[i]);
    }

    // Push the remaining elements
    for (int i = 0; i < n - k; i++) {
        newArray.push_back(li[i]);
    }

    // Output the rotated array
    for (int i = 0; i < newArray.size(); i++) {
        cout << newArray[i] << " ";
    }

    return 0;
}
