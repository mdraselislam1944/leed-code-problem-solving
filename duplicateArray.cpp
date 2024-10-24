#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>listArray{0,0,1,1,1,1,2,3,3};
int cnt=0;
for(int i=0;i<listArray.size();i++){
    if(listArray[i]=listArray[i+1]&&listArray[i]==listArray[i+2]){
        continue;
    }else{
    cnt++;
    }
}
return cnt;
return 0;
}
