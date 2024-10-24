#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main() {
    vector<string> s{"(([])"};
    stack<char> st;
    for (int i = 0; i < s[0].length(); i++) {
        char c = s[0][i];

        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else if (c == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                break;
            }
        }
        else if (c == '}') {
            if (!st.empty() && st.top() == '{') {
                st.pop();
            } else {
                break;
            }
        }
        else if (c == ']') {
            if (!st.empty() && st.top() == '[') {
                st.pop();
            } else {
                break;
            }
        }
    }

    if(st.empty()){
        return true;
    }
    return false;

    cout << st.size() << endl;

    return 0;
}
