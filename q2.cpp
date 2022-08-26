#include<bits/stdc++.h>
using namespace std;

bool checkCons(int arr[],int n){
  sort(arr,arr+n);
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]+1){
      return false;
      }
  }
  return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  if(checkCons(arr,n)==true){
    cout<<"the array contains consecutive integers";
  }
  else
    cout<<"the array does not contains consecutive integers";

    return 0;
}