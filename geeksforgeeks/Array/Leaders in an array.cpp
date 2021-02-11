vector<int> leaders(int a[], int n){
vector<int> v;
    
    long long max = a[n-1];
    
    // start traversing the array from last element
    // and compare the element with the max element
    // on its right. If current element is the maximum
    // till now, then current element is also leader
    for(long long i =n-1; i >= 0; i--){
        if(a[i] >= max){
            max = a[i];
            v.push_back(max);
        }
    }
    
    // finally reverse the vector in which leaders are stored
    reverse(v.begin(), v.end());
    
    return v;
