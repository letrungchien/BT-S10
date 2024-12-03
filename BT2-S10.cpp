#include<stdio.h>

int main(){

	int numbers[5]={3,1,7,9,4};
	 printf(" mang chua duoc sap xep\n");
	 
	 for(int i=0;i<5;i++){
    	printf("  %d  ",numbers[i]);
	 }
    	 printf("\n");
	 for(int i=0;i<4;i++){
	 	for(int j=0;j<5-i-1;j++){
	 		if(numbers[j]>numbers[j+1]){
	 			int temp =numbers[j];
	 			numbers[j]=numbers[j+1];
	 			numbers[j+1]=temp;
			 }
		 }
	 }
	 printf("mang sau khi sap xep\n");
	 for(int i=0;i<5;i++){
	 	printf("   %d   ",numbers[i]);
	 }
	return 0;
}

