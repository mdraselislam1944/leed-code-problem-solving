#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v{7, 1, 5, 3, 6, 4};
    int index = 0, value = 1000000000;
    for (int i = 1; i <= v.size(); i++) {
        if (value > v[i-1]) {
            value = v[i-1];
            index = i - 1;
        }
    }
    if (index == v.size() - 1) {
        return 0;
    }

    int max_profit = 0;
    for (int i = index + 1; i < v.size(); i++) {
        if (v[i] > value) {
            max_profit = max(max_profit, v[i] - value);
        }
    }
    return max_profit;
}
