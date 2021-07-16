#include<stdio.h>
#include <stdlib.h>

void getmax(int *a,int x){
	int count=0,Maxcount=1,i,j, Maxelement;

	for(i =0;i<x;i++){
		for(j=i+1;j<x;j++){
			if(a[j]==a[i]){
				count ++;
				if(count>Maxcount){
					Maxcount =count;
					Maxelement = a[j];
				}
			}
		}
	}
	printf("The Maxcount is %d and Maxelement is %d \n",Maxcount,Maxelement );
}

int main(){
	int *Arr,n,i;
	printf("Enter the size of Array\n");
	scanf("%d",&n);
	Arr = (int *)malloc(10);

	for(i =0;i<n;i++){
		printf("Enter the element Arr[%d]\n",i );
		scanf("%d",&Arr[i]);
	}

	getmax(Arr,n);
	free(Arr);
	return 0;

}