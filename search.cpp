#include<iostream>
#include<vector>
using namespace std;
int countNotMatchNumber(vector<int>&ArrayList,int val){
int NotMatchNumber=0;
for(int i=0;i<ArrayList.size();i++){
    if(ArrayList[i]!=val){
        NotMatchNumber++;

    }
}
return NotMatchNumber;
}

int main(){
    vector<int>ArrayList{3,2,2,3};
    int val=3;
    cout<<countNotMatchNumber(ArrayList,val)<<" ";
return 0;
}
