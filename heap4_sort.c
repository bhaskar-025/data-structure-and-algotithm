// heap sort done by me 
#include <stdio.h>

int compare(int arr[],int a,int b,int n){
	if (b >= n) return a;
	if(arr[a]>arr[b]){
		return a;
	}
	else {
		return b;
	}
}

void swap(int arr[],int a,int b){
	int p;
	p=arr[a];
	arr[a]=arr[b];
	arr[b]=p;
}
int main(){
	int arr[]={100,70,50,65,4,45,32,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int q;
	int j;
	 int i;
	 i=0;
	 int t;
	 t=n;
   for(j=0;j<t-1;j++){
   i=0;
   swap(arr,0,n-1);
    while(2 * i + 1 < n-1){
//    	 q=arr[0];
//    arr[0]=arr[n-1];
//    arr[n-1]=q;

   
    
    	int child,big;
    	child=2*i+1;
    	
		
    	big=compare(arr,child,child+1,n-1);
    	  if(arr[i] < arr[big]){
                swap(arr, i, big);
                i = big;
            } else {
                break;
            }
    
    	
    
	}
	n--;
}
    for(i=0;i<t;i++){
    	printf("%d\t",arr[i]);
	}
    
}
