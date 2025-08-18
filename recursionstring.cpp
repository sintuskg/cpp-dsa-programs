// remove the latter in the string

#include<iostream>
using namespace std;

int main(){
    string s = "abdtayhdaca";
    string result;
    for(int i=0;i<s.size();i++){
        if(s[i] != 'a'){
            result += s[i];
        }
    }
    cout<<result<<endl;
    return 0;
}