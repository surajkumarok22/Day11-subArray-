#include<iostream>
#include<climits>
using namespace std;

void minSumSubArray(int arr[], int n){
    int minSum = INT_MAX;

    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            int CurrSum = 0;
            for(int i = st; i<=end; i++){
                CurrSum += arr[i];
            
            }
            minSum = min(CurrSum, minSum);
                cout<<minSum;
                cout<<", ";
        }
            cout<<endl;
    }
    cout<<minSum;
}

int main()
{
    int array[] = {1,2,-3,-4,5};
    int n = sizeof(array) / sizeof(int);
    minSumSubArray(array,n);

    return 0;
}