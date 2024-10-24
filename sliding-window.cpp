#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int printMaxSum(vector<int>&v,int target){
int left=0,sum=0,minLimit=INT_MAX;
for(int right=0;right<v.size();right++){
sum+=v[right];
while(sum>=target){
    minLimit=min(minLimit,right-left+1);
    sum-=v[left];
        left++;
}
}
return minLimit==INT_MAX?0:minLimit;
}

int main(){
vector<int>v{2,3,1,2,4,3};
int target=7;
cout<<printMaxSum(v,target)<<endl;
return 0;
}
