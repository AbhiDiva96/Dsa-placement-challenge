#include<bits/stdc++.h>
 using namespace std;

 void clockRotate(int arr[] , int n){
     
     int lastEle = arr[n-1];
     for(int i=n-2; i>=0; i--){
         arr[i+1] = arr[i];
     }
     arr[0] = lastEle;
 }

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    clockRotate(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
return 0;}
