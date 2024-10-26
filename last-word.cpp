#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
string s1="a good   example",reversed,word;
stringstream ss(s1);
while(ss>>word){
if(!reversed.empty()){
    reversed=word+" "+reversed;
}
else{
        reversed=word;
}
cout<<word<<endl;
}
cout<<reversed<<endl;
 return 0;
}
