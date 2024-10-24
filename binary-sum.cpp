#include <iostream>
#include <vector>
#include <string>
using namespace std;

string binarySum(string A, string B) {
    if (A.length() > B.length()) {
        return binarySum(B, A);
    }
    vector<int> sum;
    int diff = B.length() - A.length();
    for (int i = 0; i < diff; i++) {
        A = '0' + A;
    }
    int c = 0, cal;
    for (int i = B.length() - 1; i >= 0; i--) {
        int first = A[i] - '0';
        int second = B[i] - '0';
        cal = c + first + second;

        if (cal <= 1) {
            c = 0;
            sum.push_back(cal);
        } else if (cal == 2) {
            c = 1;
            sum.push_back(0);
        } else {
            c = 1;
            sum.push_back(1);
        }
    }
    if (c == 1) {
        sum.push_back(c);
    }
     string result = "";
    for (int i = sum.size() - 1; i >= 0; i--) {
          result += to_string(sum[i]);
    }
    return result;
}

int main() {
    string A = "11", B = "1";
    cout<<binarySum(A, B);
    return 0;
}
