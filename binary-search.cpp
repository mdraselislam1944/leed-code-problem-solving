#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&v,int target){
int low=0,high=v.size();
while(low<=high){
   int mid=low+(high-low)/2;
    if(v[mid]==target){
        return mid;
        break;
    }
    else if(v[mid]<target){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return low;
}
int main(){
vector<int>v{1,3};
int target=2;
cout<<binarySearch(v,target);
return 0;
}
