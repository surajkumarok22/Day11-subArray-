#include<iostream>
using namespace std;

int doublicateValue(int arr[], int n){
    
    bool istrue = 0;

    for(int i = 0; i<n; i++){
        for(int j = i; j<n-1; j++){
            if(arr[i] == arr[j+1]){
                istrue = 1;
                return istrue;
            }
        }
    }

    return istrue;
}

int main()
{
    int array[] = {1,2,3,4,5,6,8,13,7};
    int lengthArray = sizeof(array) / sizeof(int);


   cout<< doublicateValue(array, lengthArray);


    return 0;
}