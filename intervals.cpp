#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<int> arrayList{0, 1, 2, 4, 5, 7};
    vector<string> intervalList;
    int initial = 0;

    for(int i=0;i<arrayList.size();i++){
       if(i==(arrayList.size()-1)||arrayList[i]+1!=arrayList[i+1]){
        if(initial==i){
            intervalList.push_back(to_string(arrayList[initial]));
        }
        else{
             intervalList.push_back(to_string(arrayList[initial])+"->"+to_string(arrayList[i]));
        }
        initial=i+1;
       }
    }
    return intervalList
    for (int i=0;i<intervalList.size();i++) {
        cout << intervalList[i] << endl;
    }

    return 0;
}
