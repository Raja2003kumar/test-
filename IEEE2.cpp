#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int temp=arr[n-1];
    for(int i=0;i<n;i++){
        arr[n-i]=arr[n-1-i];
    }
    arr[0]=temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
}