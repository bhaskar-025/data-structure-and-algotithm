//to take the input and arrange in max heap
#include <stdio.h>

int compare(int arr[],int a ,int b){
	if(arr[a]>arr[b])return a;
	else {
			return b;
	}

}

void swap(int arr[],int a , int b){
	int p;
	p=arr[a];
	arr[a]=arr[b];
	arr[b]=p;
}

int main(){
	
	// to make a max array
	int arr[50];
	
	int y=1;
	int i=0;
	int parent,big,temp;
	while(y==1){
		printf("enter the element");
		scanf("%d",&arr[i]);
		temp=i;
		if (i>0){
			while(temp>0){
			
			
			// to know the parent index
			parent =(temp-1)/2;
			big=compare(arr,parent,temp);
			if(big==temp){
				swap(arr,parent,temp);
			}
//			else {
//				return 0;
//			}
			temp=parent;
		}
	}
		
		printf("enter 1 for continue");
		scanf("%d",&y);
		i++;
	}
	int j;
	for(j=0;j<i;j++){
		printf("%d\t",arr[j]);
	}
	
}
