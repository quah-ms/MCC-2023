#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h> 

using namespace std;

//Unsolved: Unable to reset the number of wild cards to find optimum run

int main()
{
    int run=1;
    int k=0;
    int arr[]={1,1,1,1,1,1,2,3,4,5,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    //Sort array in ascending order
    sort(arr,arr+size); 

    for (int i=0;i<size;i++){
        //Specify each integer card runned through
        cout<<arr[i]<<" "<<endl; 
        //Identify if two integers form a run
        if (arr[i]==arr[i+1]){
            run+=0;
            cout<<"Run:"<<run<<endl;
        }
        if (arr[i]==arr[i+1]-1){
            run+=1;
            cout<<"Run:"<<run<<endl;
        }
        //Decrease number of wild cards by the number of integers missing between two adjacent integers in the array
        int n=arr[i+1]-arr[i];
        if (arr[i]<arr[i+1]-1){
            //Case 1: Where wild cards are less than the missing integers
            if (k<n-1){
                run+=k;
                cout<<"Run:"<<run<<endl;
                cout<<"End of run"<<endl;
                run=1;//Start a new run (Issue: Excludes parts of the run that are less than arr[i])
                k=0;//Manually change this value into k initial
            }
            //Case 2: Where wild cards equal to the missing integers
            if (k=n-1){
                run+=k+1;
                cout<<"Run:"<<run<<endl;
                k=0;
            }
            //Case 3: Where wild cards are more than the missing integers
            if (k>n-1){
                run+=n;
                k-=n-1;
            }
        }
    }
    //Output remaining wild cards unused
    if (k>0){
        cout<<"Wild cards left:"<<k<<endl;
    }

    return 0;
}