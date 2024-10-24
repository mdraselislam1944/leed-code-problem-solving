#include<iostream>
#include<vector>
using namespace std;
int main(){
int target=-1;
vector<int>listInfo{-1,0};
int left=0,right=listInfo.size()-1;
while(left<right){
    if(listInfo[left]+listInfo[right]==target){
         break;
    }
    else if(listInfo[left]+listInfo[right]>target){
        right--;
    }
    else{
        left++;
    }
}
    return [left+1,right+1];
return 0;
}
