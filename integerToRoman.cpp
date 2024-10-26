#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;
    int number = 3749;
    mp[1000] = "M";
    mp[900] = "CM";
    mp[500] = "D";
    mp[400] = "CD";
    mp[100] = "C";
    mp[90] = "XC";
    mp[50] = "L";
    mp[40] = "XL";
    mp[10] = "X";
    mp[9] = "IX";
    mp[5] = "V";
    mp[4] = "IV";
    mp[1] = "I";

    string s1 = "";
    for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        while (number >= it->first) {
            s1 += it->second;
            number -= it->first;
        }
    }
   return s1;
    return 0;
}
