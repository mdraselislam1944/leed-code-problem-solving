#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<char, int> mp;

    string s1 = "LVIII";
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int sum = 0;


    for (int i = 0; i < s1.size(); i++) {

        if (i + 1 < s1.size() && mp[s1[i]] < mp[s1[i + 1]]) {
            sum -= mp[s1[i]];
        } else {
            sum += mp[s1[i]];
        }
    }


   return sum;

    return 0;
}
