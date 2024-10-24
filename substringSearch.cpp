#include<iostream>
#include<string>
using namespace std;
int main(){
string s1="sadbutsad";
string s2="sad";
  size_t index = s1.find(s2);
if(s1.find(s2)!=string::npos){
    return index;
}
else{
    return -1;
}
return 0;
}
