#include<iostream>
#include<vector>
using namespace std;
bool main(){
vector<int>v{2,3,1,1,4};
int t=v[0]-1,flag=0;
while(t<v.size()){
    if(v[t]==1||v[t]==0){
        flag=1;
        break;
    }
    t=t+v[t];
}
if(flag==0){
    return true;
}
return false;
}
