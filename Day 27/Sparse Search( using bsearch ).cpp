int binarySearch(vector<string>& arr, int low, int high, string& x) {

    if (low > high)
       return -1;

    int mid = (low + high) / 2;
    
    if (arr[mid] == x)
       return mid;
    else if (arr[mid] > x)
       return binarySearch(arr, low, mid - 1, x);
    else
       return binarySearch(arr, mid + 1, high, x);
}

int sparseSearch(vector<string>& arr, string& k) {
    int n = arr.size();

    if(n==0)
        return 0;
    return binarySearch(arr, 0, n - 1, k);
}
