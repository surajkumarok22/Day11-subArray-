#include<iostream>
#include<climits>

using namespace std;

void trap(int *heights, int n){
    int leftMax[20000],rightMax[20000];

    leftMax[0]  = INT_MIN;
    rightMax[0] = INT_MIN;

    // cout<<leftMax[0]<<",";

    for(int i = 1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
        // cout<<leftMax[i]<<",";
    }

    for(int i = n - 2; i>= 0; i-- ){
        rightMax[i] = max(leftMax[i-1], heights[i+1]);
        //   cout<<rightMax[i]<<","; 
    }
        //  cout<<rightMax[n-1]<<","; 
        //    cout<<endl;


        int waterTrapped = 0;
        for(int i = 0; i<n; i++){
            int currWater = min(leftMax[i], rightMax[i]-heights[i]);

            if(currWater > 0){
                waterTrapped += currWater;
            }
        }


          cout<<"water traped is " << waterTrapped<<endl;
}


int main()
{
        int array[] = {4,2,8,0,6,3,2};

        int n = sizeof(array) / sizeof(int); 

        trap(array, n);


    return 0;
}