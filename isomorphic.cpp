#include<iostream>
#include<string>
#include <unordered_map>
using namespace std;
int main(){
 string s11="egg",s22="add";
 unordered_map<char,int>s;
 unordered_map<char,int>t;
    if (s11.length() != s22.length()) {
        return false;
    }
    for(int i=0;i<s11.length();i++){
            char c1=s11[i],c2=s22[i];
        if(s.count(c1) &&s[c1]!=c2){
            return false;
        }
        if(t.count(c2) &&t[c2]!=c1){
            return false;
        }
        s[c1]=c2;
        t[c2]=c1;
    }
    return true;
return 0;
}
