#include <stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int len = 9, temp =0,n,i,j;
	printf("Enter the number \n" );
	scanf("%d",&n);
	printf("The array is : \n");
	for(i=0;i<n;i++){
		for(j=0;j<len;j++){
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
	for(i=0;i<len;i++){
		printf("%d\n",arr[i] );
	}
	return 0;
}