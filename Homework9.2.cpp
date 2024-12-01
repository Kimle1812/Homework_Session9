#include<stdio.h>
int main(){
	int currentLength, addIndex, number, numbers[];
	printf("Moi ban nhap so luong phan tu trong mang: ");
	scanf("%d", &currentLength);
	printf("Moi ban nhap gia tri phan tu cua mang:\n"); 
	for(int i = 0; i < currentLength; i++){
		printf("Numbers[%d] = ", i);
	    scanf("%d", &numbers[i]);
	} 
	printf("Moi ban nhap vi tri muon sua phan tu vao trong mang: ");
	scanf("%d", &addIndex);
	printf("Moi ban nhap gia tri phan tu muon sua vao trong mang: ");
	scanf("%d", &number);
	if( addIndex < currentLength){
		numbers[addIndex] = number;
		printf("Mang khi ban them moi gia tri la:\n"); 
		for(int i = 0; i < currentLength; i++){
		    printf("%d ", numbers[i]);
	    }  
	} else {
		currentLength = addIndex + 1;
		numbers[addIndex] = number;
		printf("Mang khi ban them moi gia tri la:\n"); 
		for(int i = 0; i < currentLength; i++){
		    printf("%d ", numbers[i]);
		}
	}
	return 0; 
} 
