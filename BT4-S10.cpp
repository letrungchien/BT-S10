#include<stdio.h>
int main(){
	int array[] = {9,4,5,6,3};
	for(int i =0;i<4;i++){
		int minidx = i;
		for(int j =i+1;j<5;j++){
			if(array[j]<array[minidx]){
				minidx = j;
				
		}
		
	}
	int temp = array[minidx];
	array[minidx] = array[i];
	array[i] = temp;
}
	for(int i =0;i<5;i++){
		printf("%d\t",array[i]);
	}
	
	return 0;
	
}

