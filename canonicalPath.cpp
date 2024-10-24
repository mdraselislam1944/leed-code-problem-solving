#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

string simplifyPath(string path) {
    stack<string> st;
    stringstream ss(path);
    string token;

    while (getline(ss, token, '/')) {

        if (token == "" || token == ".") {
            // Ignore empty tokens or current directory "."
            continue;
        }
        else if (token == "..") {
            // Pop from stack if it's not empty (go up one directory)
            if (!st.empty()) {
                st.pop();
            }
        }
        else {
            // Push valid directory names to the stack
            st.push(token);
        }
    }

    // Build the simplified canonical path from the stack
    string result = "";
    while (!st.empty()) {
        result = "/" + st.top() + result;
        st.pop();
    }

    // Return "/" if result is empty (for root directory)
    return result.empty() ? "/" : result;
}

int main() {
    string path = "/home/user/Documents/../Pictures";
    cout << "Simplified Path: " << simplifyPath(path) << endl;
    return 0;
}

