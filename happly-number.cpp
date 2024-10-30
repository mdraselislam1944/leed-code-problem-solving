#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
int main(){
long long int n=19;
while(n>10){
    int sum=0,m=n;
    while(m>0){
        sum+=pow((m%10),2);
        m=m/10;
    }
    n=sum;
}
if(n==1||n==7){
    return true;
}
return false
 cout<<n<<" ";
return 0;
}
