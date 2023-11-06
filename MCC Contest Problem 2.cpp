#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int A=4;
    int B=17;
    int n[]={7,7,6,4,3};
    int size=5;
    int sum=0;

    for (int i=0;i<size;i++){
        //Run through the array to find the enemy of highest level(but still lower than A)
        if (A>n[i]){
            A=A+n[i];
            sum+=1;
            cout<<sum<<endl;
            cout<<A<<endl;
            n[i]=1000000000;//Set the enemy killed to an unreachable level to prevent from running through the same enemy again
            i=-1;//Start loop again to find next enemy of highest level
        }
        if (A<=n[i]){
            cout<<-1<<endl;
        }
        if (A>=B){
            cout<<"Completed"<<endl;
            break;
        }
    }
    if (A<B){
        cout<<"Yet to complete"<<endl;
    }

    return 0;
}