#include<iostream>
#include<climits>

using namespace std;

void maxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i =0; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]); 
    }

    int maxProfit = 0;
    for(int i =0; i<n; i++){
        int CurrProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, CurrProfit);
    }

    cout<<" max profit = "<< maxProfit<<endl;
}

int main()
{   
    int array[] = {10,21,3,45,5,6,7};

    int n = sizeof(array)/ sizeof(int);

    maxProfit(array, n);

    return 0;
}