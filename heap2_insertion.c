// insertion in the heap 
#include <stdio.h>
void swap(int arr[],int a , int b){
	int p;
	p=arr[a];
	arr[a]=arr[b];
	arr[b]=p;
}
int main(){
	int arr[50]={10,8,7,5,4,6,1,3};
	int n=8;
	// for insertion
	
	printf("enter the element to add");
	scanf("%d",&arr[n]);
	
	int parent;
	int i=n;
	while(i>0){
	
	parent=(i-1)/2;
	if(arr[parent]<arr[i]){
		swap(arr,parent,i);
			i=parent;
	}
	else{
		break;
	}

}
	int j;
	for(j=0;j<n+1;j++){
		printf("%d\t",arr[j]);
	}
}
