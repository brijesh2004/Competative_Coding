

pair<long long, long long> getMinMax(long long a[], int n) {
// sorting of array 
    sort(a,a+n);
return first and last element 
    return {a[0],a[n-1]};
}