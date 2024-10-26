#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    vector<int> arrayList{3, 2, 6, 5, 0, 3};
    int min_price = INT_MAX;
    int max_profit=0;
    for(int price:arrayList){
       min_price=min(min_price,price);
       int profit=price-min_price;
       max_profit=max(max_profit,profit);
    }
    return max_profit;
    return 0;
}
