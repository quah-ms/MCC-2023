#include <iostream>
#include <numeric>
#include <vector>
#include <string>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

//Unsolved: Unable to find sum of each subsequence respectively(and perform further operations)

void subArray(int arr[],int n){ 
    //Pick starting point 
    for (int i=0;i<n;i++) { 
        //Pick ending point 
        for (int j=i;j<n;j++){ 
            //Print subarray between current starting and ending points 
            for (int k=i;k<=j;k++)
                cout<<arr[k]<<" "; 
                cout<<endl; 
        } 
    }
} 

int main() 
{ 
    //Output all subsequences
    int arr[]={1,2,3,4}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    cout<<"All Non-empty Subarrays:\n";
    subArray(arr,n); 

    return 0; 
} 