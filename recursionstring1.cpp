#include<iostream>
#include <string>
using namespace std;

string s(string &str,string part){
    // size_t ans;
    // while((ans = str.find(part)) != string :: npos){
    //     str.erase(ans,part.length());
    // }
    // return str;
    
}

int main(){

    string str = "mhfgkabcjhgabc";
    string part = "abc";
    string result = s(str,part);
    cout<<result<<endl;
    return 0;
}