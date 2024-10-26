#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
vector<string>str{"dog","racecar","car"};

 sort(str.begin(), str.end());
 string s1=str.front(),s2=str.back();
 int minlength=min(s1.size(),s2.size()),i=0;
 while(i<minlength&&s1[i]==s2[i]){
        i++;
 }

return i==0?"":s1.substr(0,i);
 cout<<s1.substr(0,i);
return 0;
}
