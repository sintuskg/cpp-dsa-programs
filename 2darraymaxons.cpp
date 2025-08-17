#include<iostream>
#include<vector>
using namespace std;
//usinhg function to be find that the maximum number ones.

int maxNumberOfOnsa(vector<vector<int>> &v){
    int maxOne = INT16_MIN;
    int maxOneRow=-1; // index
    int coloum = v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberOfOnes = coloum - j;
                if(numberOfOnes > maxOne){
                    maxOne = numberOfOnes;
                    maxOneRow = i;
                }
                break;
            }
        }
    }
    return maxOneRow;
}

int main(){

    int n,m;
    cout<<"Eneter the number of row and colomn: ";
    cin>>n>>m;

    vector<vector<int>>vec(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int result = maxNumberOfOnsa(vec);
    cout<<"The index number is: "<<result<<endl;
}