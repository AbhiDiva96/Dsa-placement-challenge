#include<bits/stdc++.h>
 using namespace std;
int  searchElement(int arr[], int n, int x){
       // n=5 arr= 1 2 3 4 5  , x=4  
       for(int i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
       }
       return -1;
}

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int arr[n];
    int x;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    cout << searchElement(arr, n, x) << endl;
 }
return 0;}
