#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int longestSubstringWithoutRepeatingCharacters(string s){
unordered_set<char>charset;
int left=0,maxlength=0;
for(int right=0;right<s.length();right++){
        char rightChar=s[right];
        while(charset.find(rightChar)!=charset.end()){
            charset.erase(s[left]);
            left++;
        }
        charset.insert(rightChar);
        maxlength=max(maxlength,right-left+1);
}
return maxlength;
}

int main(){
 string s = "abcabcbb";
cout<<longestSubstringWithoutRepeatingCharacters(s);
return 0;
}
