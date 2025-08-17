#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sorthngEvenAndOdd(vector<int> &v){
    int even_count = 0;
    int odd_count = v.size()-1;

    while(even_count<odd_count){
        if(v[even_count] % 2 == 1 && v[odd_count]%2==0){
            swap(v[even_count],v[odd_count]);
        }
        if(v[even_count]%2==0){
            v[even_count++];
            // swap(v[even_count++],v[odd_count]);
            // v[odd_count--] == v[even_count];

        }
        if(v[odd_count]%2 == 1){
            v[odd_count++];
            
        }
    }

   
}



int main(){
    cout<<"Enter the number here"<<" ";
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    sorthngEvenAndOdd(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;

}
