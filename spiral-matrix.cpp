#include<iostream>
#include<vector>
using namespace std;

void showSpiralList(vector<vector<int>>& matrix) {
    vector<int> informationList;
    int row = matrix.size();
    int col = matrix[0].size();


    int top = 0, left = 0;
    int bottom = row - 1, right = col - 1;


    while (top <= bottom && left <= right) {

        for (int i = left; i <= right; i++) {
            informationList.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            informationList.push_back(matrix[i][right]);
        }
        right--;


        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                informationList.push_back(matrix[bottom][i]);
            }
            bottom--;
        }


        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                informationList.push_back(matrix[i][left]);
            }
            left++;
        }
    }
return informationList;
}

int main() {
    vector<vector<int>> matrix{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    showSpiralList(matrix);
    return 0;
}
