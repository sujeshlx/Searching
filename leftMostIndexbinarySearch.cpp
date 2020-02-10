#include<iostream>
#include<unistd.h>
using namespace std;

int binarySearch(int arr[],int l, int r,int x)
{

     
  if(l > r) return -1;

  int mid = (l + r )/ 2;

  if( arr[mid] == x && (mid == 0 || arr[mid - 1] != x))
  {
    return mid;
  }
   
   if(arr[mid] >=  x )
   {
     return binarySearch(arr,l,mid-1,x);
   }
  else
  {
     return binarySearch(arr,mid + 1,r,x);
   
  }  
  return -1;
}
int main(void) 
{ 
    int arr[] = { 2, 3,3,3,3, 4,4, 10, 40,40,40 }; 
    int x = 3; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result<<endl;
    return 0; 
} 
