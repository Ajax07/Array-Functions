#include<stdio.h>


void selectionsort(int Arr[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(Arr[j]<Arr[i]){
				int temp = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = temp;
			}
		}
	}
}

void search(int Arr[], int size, int key){
	int i;
	int flag = 0;

	for(i=0;i<size;i++){
		if(key==Arr[i]){
			flag = 1;
			break;
		}
	}
	if(flag==1){
		printf("The Number %d is fount at index %d\n",key,i );
	}
	else{
		printf("Not found\n");
	}
}

void insert(int Arr[], int size, int pos){
	int i,num;
	printf("Enter the number want enter\n");
	scanf("%d",&num);
	for(i=size;i>=pos;i--){
		Arr[i]=Arr[i-1];
	}
	Arr[pos-1]=num;
	size++;
}

void delete(int Arr[], int size, int pos){
	int i;
	printf("Deleting the number\n");
	for(i=pos-1;i<size;i++){
		Arr[i]=Arr[i+1];
	}
	size--;
}

void frequency(int Arr[], int size){
	int i,j,count;
	int fr[5];
	for(i=0;i<5;i++){
		count = 1;
		for(j=i+1;j<5;j++){
			if(Arr[i]==Arr[j]){
				count++;
				fr[j]=-1;
			}
		}
		if(fr[i]!=-1){
			fr[i]=count;
		}
	}
	printf("the frequency of each element\n");
	for(i=0;i<5;i++)
		if(fr[i]!=-1){
			printf("frequency of Arr[%d] : %d\n",i,fr[i]);
		}
}

int main(){

	int Arr[5];
	int n,i;
	n = sizeof(Arr)/sizeof(Arr[0]);
	printf("enter array \n");
	for(i =0;i<5;i++)
		scanf("%d",&Arr[i]);
	printf("unsorted array is\n");
	for(i =0;i<5;i++)
		printf("%d\n",Arr[i]);
	insert(Arr,n,3);
	delete(Arr,n,3);
	selectionsort(Arr,n);
	frequency(Arr,n);
	printf("sorted array is\n");
	for(i =0;i<5;i++)
		printf("%d\n",Arr[i]);
	search(Arr,n,5);
	return 0;


}	