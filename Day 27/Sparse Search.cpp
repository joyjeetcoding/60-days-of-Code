int sparseSearch(vector<string>& arr, string& k) {
    int n = arr.size();

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
          return i;
        }
    }
    return -1;
}
