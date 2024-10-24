#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,k,x;
vector<int>v;
cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
}
int sum=0;
for(int i=0;i<k;i++){
    sum+=v[i];
}
for(int i=k;i<n;i++){
    cout<<k<<endl;
        sum=max(sum,sum-v[i-k]+v[i]);
}
return sum;
}
