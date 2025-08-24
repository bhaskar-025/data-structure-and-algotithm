//to delete the elemnt from max heap
#include <stdio.h>

int compare(int arr[],int a,int b){
	if(arr[a]>arr[b]){
		return a;
	}
	else {
		return b;
	}
}

int swap(int arr[],int a,int b){
	int p;
	p=arr[a];
	arr[a]=arr[b];
	arr[b]=p;
}
int main(){
	int arr[]={50,45,35,33,16,25,34,12,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int q;
	printf("enter the index to delte from heap");
    scanf("%d",&q);
    
    arr[q]=arr[n-1];
    
    int i;
    i=q;
    while(2 * i + 1 < n){
    	int child,big;
    	child=2*i+1;
    	
		
    	big=compare(arr,child,child+1);
    	swap(arr,i,big);
    
    	i=big;
	}
    for(i=0;i<n-1;i++){
    	printf("%d\t",arr[i]);
	}
    
}
