bool isPossible(vector<int>& arr, int n, int m, int mid){
    int pages=0;
    int studentid=1;
    for(int i=0;i<n;i++){
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }else{
            studentid++;
            if(studentid>m || arr[i]>mid) return false;
            pages = arr[i];
        }
    }
    return true;
}


int findPages(vector<int>& arr, int n, int m) {
    int s = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e = sum;
    int ans=-1;
    if (m > n)
        return -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossible(arr, n, m, mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}
