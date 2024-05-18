#include<iostream>
#include <climits>
using namespace std;

void maxSubArraySum(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start = 0; start<n; start++){
        for(int end = start; end < n; end++){
            int CurrSum = 0;
            for(int i = start; i<=end; i++){
                CurrSum += arr[i]; 
            }
            cout<<CurrSum<<", ";
            maxSum = max(maxSum, CurrSum);
        }
        cout<< endl;
    }
    cout<<" max sum of sub array is: "<<maxSum<<endl;
}

int main(){

    int array[] = {1,2,3,4,5};
    int n = sizeof(array) / sizeof(int);

    maxSubArraySum(array,n);

    return 0;
}