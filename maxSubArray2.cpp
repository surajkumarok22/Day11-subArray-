#include<iostream>
#include<climits>
using namespace std;

void subArrayMax2(int *arr, int n){
    int maxSum =    INT_MIN;

    for(int strt = 0; strt<n; strt++){
      int CurrSum = 0;
      for(int end = strt; end< n; end++){
        CurrSum += arr[end];
        maxSum = max(maxSum, CurrSum);
      }
    }
    cout<<"maximum subarray = "<<maxSum<<endl;
}

int main(){

  int array[] = {1,2,3,4,5,6};
  int n = sizeof(array) / sizeof(n);
  subArrayMax2(array,n);


    return 0;
}