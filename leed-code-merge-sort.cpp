#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& array2, int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    vector<int> leftArray(leftSize);
    vector<int> rightArray(rightSize);


    for (int i = 0; i < leftSize; i++)
        leftArray[i] = array2[left + i];
    for (int i = 0; i < rightSize; i++)
        rightArray[i] = array2[mid + 1 + i];

    int i = 0, j = 0, k = left;


    while (i < leftSize && j < rightSize) {
        if (leftArray[i] <= rightArray[j]) {
            array2[k] = leftArray[i];
            i++;
        } else {
            array2[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        array2[k] = leftArray[i];
        i++;
        k++;
    }


    while (j < rightSize) {
        array2[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergesort(vector<int>& array2, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;


        mergesort(array2, left, mid);
        mergesort(array2, mid + 1, right);

        merge(array2, left, mid, right);
    }
}

void concateTwoArray(vector<int>& array1, vector<int>& array2) {

    for (int i = 0; i < array1.size(); i++) {
        array2.push_back(array1[i]);
    }


    mergesort(array2, 0, array2.size() - 1);
}

int main() {
    vector<int> array1{4, 5, 2, 8};
    vector<int> array2{7, 9, 3, 20, 15};

    concateTwoArray(array1, array2);


    for (int num : array2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
