#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>digits{1,2,3};
    int c=1;
    for(int i=digits.size()-1;i>=0;i--){
        if(digits[i]+c==10){
            digits[i]=0;
            c=1;
        }else{
         digits[i]= digits[i]+c;
         c=0;
        }
    }
    if(c==0){
        return digits;
    }
    vector<int>newArray;
    newArray.push_back(c);
    for(int i=0;i<digits.size();i++){
        newArray.push_back(digits[i]);
    }
    return newArray;
return 0;
}
