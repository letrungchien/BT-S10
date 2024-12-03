#include<stdio.h>

int main(){
	int arr[] ={6,4,9,3,1,0};
	for(int i=0;i<6;i++){
		int key =arr[i];
		int j=i-1;
		
		while (j>= 0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	printf("mang sau khi sap xep\n");
	for(int i=0;i<6;i++){
		printf("  %d ",arr[i]);
	}
	return 0;
}
