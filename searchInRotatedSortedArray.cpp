int pivot(vector<int>& arr, int s, int e){
    while(s < e){
        int mid = s + (e - s) / 2;
        if(arr[0] <= arr[mid])
            s = mid + 1;
        else
            e = mid;
    }
    return s;
}

int bs(vector<int>& arr, int s, int e, int k){
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(arr[mid] == k) return mid;
        else if(arr[mid] > k) e = mid - 1;
        else s = mid + 1;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k){
    int p = pivot(arr, 0, n - 1);
    if(k >= arr[p] && k <= arr[n - 1])
        return bs(arr, p, n - 1, k);
    else
        return bs(arr, 0, p - 1, k);
}
