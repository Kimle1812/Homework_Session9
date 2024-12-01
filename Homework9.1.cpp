#include<stdio.h>
int main(){
	int currentLength, addIndex, addNumber, numbers[100];
	printf("Moi ban nhap so luong phan tu trong mang: ");
	scanf("%d", &currentLength);
	printf("Moi ban nhap gia tri phan tu cua mang:\n"); 
	for(int i = 0; i < currentLength; i++){
		printf("Numbers[%d] = ", i);
	    scanf("%d", &numbers[i]);
	} 
	printf("Moi ban nhap vi tri muon them phan tu vao trong mang: ");
	scanf("%d", &addIndex);
	printf("Moi ban nhap gia tri phan tu muon them vao trong mang: ");
	scanf("%d", &addNumber);
	if(addIndex < 0 and addIndex > 99){
		printf("Vi tri khong hop le\n");
	} else {
		if(addIndex >= currentLength){
			numbers[addIndex] = addNumber;
			currentLength = addNumber + 1;
		} else {
			for (int i = currentLength + 1; i >= addIndex; i--) {
                numbers[i] = numbers[i - 1];
            }
            numbers[addIndex] = addNumber;
            currentLength++;
            printf("Mang sau khi them phan tu la: ");
            for (int i = 0; i < currentLength; i++) {
                printf("%d ", numbers[i]);
            }
            printf("\n");
		}
	}
	return 0; 
} 
