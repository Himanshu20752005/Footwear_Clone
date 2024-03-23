#include <bits/stdc++.h>
using namespace std;

int main() {
   int arr1[]={4,1,6};
   int n = sizeof(arr1)/sizeof(arr1[0]);
   sort(arr1,arr1+n);
   int max = arr1[n-1] + arr1[n-2];
   cout<<max;
   return 0 ;
}