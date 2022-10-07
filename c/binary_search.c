
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	if(result == -1){
		 printf("Element is not present in array");
		 printf("Element is present at index %d", result);
	return 0;
}










// logic
// int binarysearch(int arr[], int n, int k){
//         if(arr[0]==k)
//         {
//             return 0;
//         }
//         int mid,left=0,right=n-1;
//         while(left<=right)
//         {
//             mid=(left+right)/2;
//             if(arr[mid]==k)
//             {
//                 return mid;
//             }
//             else if(arr[mid]<k)
//             {
//                 left=mid+1;
//             }
//             else{
//                 right=mid-1;
//             }
//         }
//         return -1;
   
//     }
// };







