#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <math.h>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int arr[]={3,2,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+size,greater<int>()); 

    for (int i=0;i<size;i++) 
        cout<<arr[i]<<" "; 

    return 0;
}