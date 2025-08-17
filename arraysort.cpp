#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
     int n;  //take input that how many number short that array
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){  //using for loop to enetr the number like iput degit
        int ele; cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){        // use a loop that print the sorting data 
        cout<<v[i]<<" ";
    }cout<<endl;
    
}
