#include<bits/stdc++.h> 
using namespace std; 
//Insertion Sort 
void Insertion_Sort(int A[],int n) 
{ 
 	int key=0,i=0; 
 	for(int j=1;j<n;j++) 
 	{ 
 		key=A[j]; 
 		i=j-1; 
 		while(i>=0 && A[i]>key) 
 		{ 
 			A[i+1]=A[i]; 
 			i=i-1; 
 		} 
 		A[i+1]=key; 
 	} 
} 
//Merge sort 
void merge(int arr[],int low,int mid,int high) 
{ 
 	int n1=mid-low+1; 
 	int n2=high-mid; 
 	int L[n1+1],R[n2+1]; 
 	L[n1]=10001; 
 	R[n2]=10001; 
 	for(int i=0;i<n1;i++) 
 	L[i]=arr[low+i]; 
 	for(int j=0;j<n2;j++) 
 	R[j]=arr[mid+j+1]; 
 	int i=0,j=0,k; 
 	for(k=low;k<=high;k++) 
 	{ 
 		if(L[i]<=R[j]) 
 		{ 
 			arr[k]=L[i]; 
 			i++; 
 		} 
 		else 
 		{ 
 			arr[k]=R[j]; 
 			j++; 
 		} 
 	} 
} 
void Merge_Sort(int arr[],int low,int high) 
{ 
 	if(low<high) 
 	{ 
 		int mid=(low+high)/2; 
 		Merge_Sort(arr,low,mid); 
 		Merge_Sort(arr,mid+1,high); 
 		merge(arr,low,mid,high); 
 	} 
} 
//Heap sort 
int Left(int i) 
{ 
 	return i*2+1; 
} 
int Right(int i) 
{ 
 	return 2*i+2; 
} 
int Parent(int i) 
{ 
 	return i/2; 
} 
void Max_Heapify(int A[],int i,int n) 
{ 
 	int l=Left(i); 
 	int r=Right(i); 
 	int largest=0; 
 	if(l<n && A[l]>A[i]) 
 		largest=l; 
 	else 
 		largest=i; 
 	if(r<n && A[r]>A[largest]) 
 		largest=r; 
 	if(largest!=i) 
 	{ 
 		int t=A[i]; 
 		A[i]=A[largest]; 
 		A[largest]=t; 
 		Max_Heapify(A,largest,n); 
 	} 
} 
void Build_Heap(int A[],int n) 
{ 
 	for(int i=(n/2)-1;i>=0;i--) 
 	{ 
 		Max_Heapify(A,i,n); 
 	} 
} 
void Heap_Sort(int A[],int n) 
{ 
 	Build_Heap(A,n); 
 	for(int i=n-1;i>=0;i--) 
 	{ 
 		int t=A[i]; 
 		A[i]=A[0]; 
 		A[0]=t; 
 		n-=1; 
 		Max_Heapify(A,0,n); 
 	} 
} 
//Quick sort 
int Partition(int A[],int p,int r) 
{ 
 	int x=A[r]; 
 	int i=p-1; 
 	for(int j=p;j<=r-1;j++) 
 	{ 
 		if(A[j]<=x) 
 		{ 
 			int t=A[i+1]; 
 			A[i+1]=A[j]; 
 			A[j]=t; 
 			i++; 
 		} 
 	} 
 	int t=A[i+1]; 
 	A[i+1]=A[r]; 
 	A[r]=t; 
 	return i+1; 
} 
void Quick_Sort(int A[],int p,int r) 
{ 
 	if(p<r) 
 	{ 
 		int q=Partition(A,p,r); 
 		Quick_Sort(A,p,q-1); 
 		Quick_Sort(A,q+1,r); 
 	} 
 	return; 
} 
int main() 
{ 
 	int n; 
 	char ch;
 	cout<<"\nEnter number of elements: ";
 	cin>>n;
 	cout<<"\nEnter the elements: ";
 	for(i=0;i<n;i++) 
 		cin>>A[i];
 	cout<<"\n1.Insertion Sort \n2.Merge Sort \nHeap Sort \n4.Quick Sort"
	cout<<"\nEnter your chocice: ";
	cin>>ch;	 
 	if(ch=='1')  
 		Insertion_Sort(A,n); 
 	else if(ch=='2') 
 		Merge_Sort(A,0,n-1); 
 	else if(ch=='3') 
 		Heap_Sort(A,n); 
 	else if(ch=='4') 
 		Quick_Sort(A,0,n-1); 
 	cout<<"\nSorted array: "; 
 	for(i=0;i<n;i++) 
 		cout<<A[i]<<" "; 
 	return 0; 
}
