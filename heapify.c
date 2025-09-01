#include <stdio.h>

int swap(int arr[] , int a ,int b){
	int temp;
	temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}

int heapify(int arr[], int n , int i){
	int large=i;
	int l=2*i+1;
	int r=2*i+2;
	
	while(l<n&&arr[large]<arr[l]) large=l;
		while(r<n&&arr[large]<arr[r]) large=r;
		
		if(large != i){
			swap(arr , large , i);
			heapify(arr , n, large);
		}
	
}



int build_heap(int arr[] , int n){
	int i;
	for (i=n/2 -  1 ;i>=0;i--){
		heapify(arr,n,i);
	}
}

int main (){
	int arr[]={34,54,1,23,22,38,78,12};
	
	int n;
	n=sizeof(arr)/sizeof(arr[0]);
	
	build_heap(arr,n);
	
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
}
