 #include<stdio.h>
void main()
{
    int item,n,i,a[20],end,beg,mid,loc=-1;
    printf("enter the number of elements to be entered\n");
    scanf("%d",&n);
    printf("enter the elements in asending order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be searched:");
    scanf("%d",&item);
    beg=0,end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(item==a[mid])
        {
            loc=mid;
            break;
        }
        else if (a[mid]<item)
        {
            beg=mid+1;
        }
        else
        end=mid-1;
    }
    if(loc==-1)
    {
        printf("Elements are not present");
    }
    else
    printf("Element found at =%d",loc);
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







