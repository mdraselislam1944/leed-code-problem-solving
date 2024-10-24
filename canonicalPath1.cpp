#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main(){
string path={"/home/user/Documents/../Pictures"};
stringstream ss(path);
string token;
stack<string>st;
while(getline(ss,token,'/')){
    if(token==""||token=="."){
        continue;
    }
    if(token==".."){
        if(!st.empty()){
            st.pop();
        }
    }
    else{
        st.push(token);
    }
}
string result="";
while(!st.empty()){
    result="/"+st.top()+result;
    st.pop();
}
return result;
return 0;
}
