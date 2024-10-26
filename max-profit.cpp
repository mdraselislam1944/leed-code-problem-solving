#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arrayList{3,2,6,5,0,3};
int profit=0;
for(int i=0;i<arrayList.size();i++){
    for(int j=i+1;j<arrayList.size();j++){
        profit=max(profit,arrayList[j]-arrayList[i]);
    }
}
return profit;
return 0;
}
