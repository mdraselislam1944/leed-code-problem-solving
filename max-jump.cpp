#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
vector<int>arrayList{2,3,1,1,4};
   int farthest = 0;
    bool canReachEnd = true;

    for (int i = 0; i < arrayList.size(); i++) {
        if (i > farthest) {
            canReachEnd = false;
            break;
        }
        farthest = max(farthest, i + arrayList[i]);

        cout<<farthest<<" ";
    }
return 0;
}
