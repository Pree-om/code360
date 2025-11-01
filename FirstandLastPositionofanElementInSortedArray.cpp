#include <bits/stdc++.h> 

int fo(vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int m = s + (e-s)/2;
        if(arr[m]==k){
            ans=m;
            e=m-1;
        }else if(arr[m]<k){
            s=m+1;
        }else{
            e=m-1;
        }
    }
    return ans;
}

int lo(vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int m = s + (e-s)/2;
        if(arr[m]==k){
            ans=m;
            s=m+1;
        }else if(arr[m]<k){
            s=m+1;
        }else{
            e=m-1;
        }
    }
    return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
   pair<int, int> p;
   p.first=fo(arr,n,k);
   p.second=lo(arr,n,k);
   return p;
}
