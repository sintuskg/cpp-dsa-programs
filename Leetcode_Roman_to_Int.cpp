#include<iostream>
#include<string>
using namespace std;

    int romanToInt(string s) {
        int arr[256] = {0}; 

        arr['I'] = 1;
        arr['V'] = 5;
        arr['X'] = 10;
        arr['L'] = 50;
        arr['C'] = 100;
        arr['D'] = 500;
        arr['M'] = 1000;

        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && arr[s[i]] < arr[s[i+1]]) {
                ans += (arr[s[i+1]] - arr[s[i]]);
                i++; 
            } else {
                ans += arr[s[i]];
            }
        }
        return ans;
    }

    int main(){
        int ans = romanToInt("XXX");
        cout<<ans;
        return 0;
    }
    

