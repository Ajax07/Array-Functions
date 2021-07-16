#include <stdio.h>
#include <stdlib.h>

void getMax(int a[], int size){
	int i,j,count=0, maxCount=1, maxElement;

	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i] == a[j]){
				count++;
				if(count>maxCount){
					maxCount = count;
					maxElement = a[j];	
				}
			}
		}
	}
	printf("Maximum Repeating Element : %d\n count: %d",maxElement, maxCount);

}

int main(){
	int Arr[] = {1,3,5,0,1,5,3,0};   
	int size = sizeof(Arr)/sizeof(Arr[0]);
	getMax(Arr,size);
	return 0;
	}