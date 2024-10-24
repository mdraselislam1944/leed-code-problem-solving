#include<iostream>
#include<vector>
using namespace std;
int main(){
int target=7;
vector<int>v{2,3,1,2,4,3};
int sum=0,initial=0,end=0;
bool flag=false;

for(int i=0;i<v.size();i++){
    if(sum==target){
        end=i;
        flag=true;
        break;
    }
   else if(sum<target){
        sum=sum+v[i];
    }
    else{
        sum=sum+v[i]-v[initial];
        initial++;
    }
    cout<<sum<<" "<<v[i]<<" "<<initial<<endl;
}
return 0;
}
