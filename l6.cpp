#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
void printF(int i, vector<int> &ds, int arr[],int n){
    if(i==n){
        for(auto it:ds){
            cout<< it << " ";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[i]);
    printF(i+1,ds,arr,n);
    ds.pop_back();
    printF(i+1,ds,arr,n);
    
}

int main()
{
    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    printF(0,ds,arr,n);

    return 0;
}
