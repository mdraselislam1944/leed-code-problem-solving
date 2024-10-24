#include<iostream>
#include<cctype>
#include <algorithm>
using namespace std;
int main(){
string s1="aaaaaa";
string s2="bbaaaa";
int check=0,k=0;
for(int i=0;i<s1.length();i++){
        for(int j=k;j<s2.length();j++){
            if(s1[i]==s2[j]){
                check++;
                k=j+1;
                cout<<s1[i]<<" "<<s2[j];
                break;
            }
        }
}
cout<<endl<<check<<" "<<s1.length();
if(check==s1.length()){
    return true;
}
else{
    return false;
}

return 0;
}
