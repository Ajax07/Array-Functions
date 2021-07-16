#include <stdio.h>

int main(){
	int Arr[] = {1,2,8,3,2,2,2,5,1};
	int i,j,count;
	int size = sizeof(Arr)/sizeof(Arr[0]);
	int fr[9];
	int visited = -1;
	for(i=0;i<size;i++){
		count = 1;
		for(j=i+1;j<size;j++){
			if(Arr[i]==Arr[j]){
				count++;
				fr[j] = visited;
			}
		}
		if(fr[i]!=visited)
			fr[i] = count;
	}
	printf("------------\n");
	printf("Element | frequency\n");
	printf("-------------\n");
	for(i=0;i<size;i++){
		if(fr[i]!=visited){
			printf(" %d",Arr[i] );
			printf("  |  ");
			printf("%d\n",fr[i] );
		}
	}
	printf("\n--------------\n");
	return 0;

}