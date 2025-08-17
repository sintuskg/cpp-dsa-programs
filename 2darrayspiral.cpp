#include<iostream>
#include<vector>
using namespace std;

void spiraalOrder(vector<vector<int>> &matrix){
    int left =0;
    int right = matrix[0].size()-1;
    int top= 0;
    int buttom = matrix.size()-1;

    int direction = 0;

    while(left <= right && top<=buttom){
        //left to right
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<matrix[top][col]<<" ";
            }
            top++;
        }
        //for top to buttom
        else if(direction == 1){
            for(int row=top;row<=buttom;row++){
                cout<<matrix[row][right]<<" ";
            }
            right--;
        }
        //for right to left
        else if(direction == 2){
            for(int col=right; col>=left;col--){
                cout<<matrix[buttom][col]<<" ";
            }
            buttom--;
        }
        else{
            for(int row=buttom;row>=top;row--){
                cout<<matrix[row][left]<<" ";
            }
            left++;
        }
        direction = (direction+1)%4;

    }
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j =0; j<m;j++){
            cin>>matrix[i][j];
        }
    }

    spiraalOrder(matrix);

    return 0;
}