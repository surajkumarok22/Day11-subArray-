#include<iostream>
#include<climits>
using namespace std;

void kadaneAlgorithm(int *arr, int n){
    int maxSum = INT_MIN;
    int CurrSum = 0;

    for(int i = 0; i<n; i++){
        CurrSum +=  arr[i];
        maxSum = max(CurrSum, maxSum);
        if(CurrSum<0){
            CurrSum = 0;
        } 
    }
    cout<<" maximum sum of array is: "<<maxSum<<endl;
}

int main()
{
        int array[] = {1,2,3,4,5,6,7};

        int n = sizeof(array) / sizeof(int);

        kadaneAlgorithm(array, n);

    return 0;
}