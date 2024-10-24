#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[count] = nums[i];  // Move non-val element to the 'count' position
                count++;
            }
        }
        return count;  // Return the number of elements not equal to val
}
int main(){
vector<int>numberList{0,1,2,2,3,0,4,2};
cout<<removeElement(numberList,2);
return 0;
}
