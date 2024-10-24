#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    vector<int> bestBuy{7, 1, 5, 3, 6, 4};
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < bestBuy.size(); i++) {
        if (bestBuy[i] < minPrice) {
            minPrice = bestBuy[i];
        } else if (bestBuy[i] - minPrice > maxProfit) {
            maxProfit = bestBuy[i] - minPrice;
        }
    }

    cout << "Maximum profit: " << maxProfit << endl;
    return 0;
}
