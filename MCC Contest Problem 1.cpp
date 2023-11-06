#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int n[]={1,2,3,4};
    int size=4;
    int repeat=0;
    
    while (repeat<990){
        for (int i=0;i<size;i++){
            if (n[i]%2==0){
                n[i]=n[i]/2;
            }else{
                n[i]=(n[i]*3)+1;
            }
        }
        repeat++;
    }

    cout<<accumulate(n,n+size,0)<<endl;
    
    return 0;
}
