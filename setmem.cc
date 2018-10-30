#include <iostream>
#include <algorithm>
using namespace std;
 
int binarySearch(int arr[], int l, int r, int x);
 
void check(int arr1[],  int m, int n)
{
    sort(arr1, arr1 + m);
    if (binarySearch(arr1, 0, m-1, n) != -1)
            cout <<n<<"is a member of the set";
}
 

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = (l + r)/2;
 
        if (arr[mid] == x)  return mid;
 
        if (arr[mid] > x) 
          return binarySearch(arr, l, mid-1, x);
 
        return binarySearch(arr, mid+1, r, x);
    }
 
    return -1;
}

int main()
{
    int arr1[] = {7, 1, 5, 2, 3, 6};
    
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n ;
    cout<<"enter element";
    cin>>n;
    check(arr1,m,n);
    return 0;
}