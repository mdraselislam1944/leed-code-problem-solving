#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    string ransomNote = "aa";
    string magazine = "aab";
    unordered_map<char,int>mp;
    for(char c:magazine){
        mp[c]++;
    }
    for(char c:ransomNote){
            if(mp[c]>0){
                mp[c]--;
            }
            else{
                return false;
            }
    }
    return true;
return 0;
}
