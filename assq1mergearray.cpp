#include<iostream>
using namespace std;
int main(){
    //taken input array and its length 
    int arr1[]={4,5,6,};
    int arr2[]={1,2,3};
    int n=3;
    int m=3;

    //calculate result whwwn to stored the result

    int result[m+n];
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<m and j<n){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            k++;
            i++;
        }else{
            result[k]=arr2[j];
            k++;
            j++;

        }
    }
    while(i<m){
        result[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n){
        result[k]=arr2[j];
        k++;
        j++;
    }

    // display the result

    for(int i=0; i<(m+n);i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0; 

}