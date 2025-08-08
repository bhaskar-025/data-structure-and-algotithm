#include <stdio.h>

int main(){
	
	int arr[10]={432,8,530,90,88,231,11,45,677,199};
	int count[10];
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp[n];
	
	int i;
	for(i=0;i<10;i++){
		count[i]=0;
	}
	//to find the gretest number
	int max=0;
	for(i=1;i<n;i++){
		if(arr[i]>arr[max]){
			max=i;
		}
	}
	
	//to find the number of digit
	
	int maxn=arr[max];
	int nod;
	nod=0;
	while(maxn>0){
		maxn=maxn/10;
		nod++;
	}
	printf("no of digit of max nunber is %d",nod);
	
	//code for unit place
	int p,c,r;
	for(i=0;i<n;i++){
		
		p=arr[i];
		c=p%10;
		count[c]++;
	}

	for(i=1;i<10;i++){
		count[i]+=count[i-1];
	}
		for(i=0;i<10;i++){
		printf("\n%d\t",count[i]);
	}

	for(i=n-1;i>=0;i--){
		p=arr[i];
		c=p%10;
		count[c]--;
		r=count[c];
		temp[r]=p;
	}
	for(i=0;i<n;i++){
		printf("\n%d\t",temp[i]);
	}
	//updating array
	for(i=0;i<n;i++){
		arr[i]=temp[i];
	}
	//code for tenth place
	for(i=0;i<10;i++){
		count[i]=0;
	}
		for(i=0;i<n;i++){
		
		p=arr[i];
		p=p/10;
		c=p%10;
		count[c]++;
	}

	for(i=1;i<10;i++){
		count[i]+=count[i-1];
	}
		for(i=0;i<10;i++){
		printf("\n%d\t",count[i]);
	}

	for(i=n-1;i>=0;i--){
		p=arr[i];
		p=p/10;
		c=p%10;
		count[c]--;
		r=count[c];
		temp[r]=arr[i];
	}
	for(i=0;i<n;i++){
		printf("\n%d\t",temp[i]);
	}
	
	//for the hundreth place 
	//updating array
	for(i=0;i<n;i++){
		arr[i]=temp[i];
	}
	//code for tenth place
	for(i=0;i<10;i++){
		count[i]=0;
	}
		for(i=0;i<n;i++){
		
		p=arr[i];
		p=p/100;
		c=p%10;
		count[c]++;
	}

	for(i=1;i<10;i++){
		count[i]+=count[i-1];
	}
		for(i=0;i<10;i++){
		printf("\n%d\t",count[i]);
	}

	for(i=n-1;i>=0;i--){
		p=arr[i];
		p=p/100;
		c=p%10;
		count[c]--;
		r=count[c];
		temp[r]=arr[i];
	}
	for(i=0;i<n;i++){
		printf("\n%d\t",temp[i]);
	}
	
}
