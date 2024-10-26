#include<iostream>
#include<vector>
#include<map>
using namespace std;

void calculateDeplicateArray(vector<int>&arrayList){
    map<int,int>mp;
    for(int i=0;i<arrayList.size();i++){
            if(mp[arrayList[i]]<2){
                        mp[arrayList[i]]++;
            }
    }
    arrayList.clear();
    map<int,int>::iterator it=mp.begin();
    while(it!=mp.end()){
            for(int i=0;i<min(it->second,2);i++){
                arrayList.push_back(it->first);
            }
        ++it;
    }

    return arrayList;
}

int main(){
    vector<int>arrayList{1,1,1,2,2,3};
    calculateDeplicateArray(arrayList);
return 0;
}
