#include <iostream>
#include <numeric>
#include <vector>
#include <string>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

int main() 
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int sum=accumulate(arr,arr+n,0,[](int a, int b){return a+pow(b,2);});

    cout<<sum<<endl;

    return 0; 
} 