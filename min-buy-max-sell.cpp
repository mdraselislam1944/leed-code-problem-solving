#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
vector<int>arrayList{7,6,4,3,1};
int profit=0;
for(int i=0;i<arrayList.size()-1;i++){
    if(arrayList[i]<arrayList[i+1]){
        profit+=arrayList[i+1]-arrayList[i];
    }
}
return profit;
cout<<profit<<" ";
return 0;
}
