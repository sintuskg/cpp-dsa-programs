#include<iostream>
using namespace std;
// using iteration method
// int powerAll(int p,int q){
//     int sum = 1;
//     for(int i=0;i<q;i++){
//         sum *= p;
//     }
//     return sum;
// }/

double powerAll(int p, int q){
    if(q==0) return 1; 

    if(q>0){
        return p*powerAll(p,q-1);
    }
    else{
        return 1.0 / powerAll(p, -q); 
    }
}

int main(){
    double result = powerAll(2,3);
    cout<<result;
    return 0;
}