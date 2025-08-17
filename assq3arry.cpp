#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;   //sioze of the array
    int x=7;    //target absolute different of the arary
    int count_diference=0;   //count how many pair are exist.
    bool count_absdifference = false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i] - arr[j])==x){
                count_diference++;
                count_absdifference=true;
                
            }
        }
    }

    cout<<"The total number of pairs "<<count_diference<<endl;
    cout<<(count_absdifference ? "yes it is true pair is exist":"no pair is not exist")<<endl;
    return 0;
}
