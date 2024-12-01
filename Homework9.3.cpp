#include<stdio.h>
int main(){
	int currentLength, deleteIndex, number, numbers[100];
	printf("Moi ban nhap so luong phan tu trong mang: ");
	scanf("%d", &currentLength);
	printf("Moi ban nhap gia tri phan tu cua mang:\n"); 
	for(int i = 0; i < currentLength; i++){
		printf("Numbers[%d] = ", i);
	    scanf("%d", &numbers[i]);
	} 
	printf("Moi ban nhap vi tri muon xoa phan tu vao trong mang: ");
	scanf("%d", &deleteIndex);
	if( 0 < deleteIndex <= currentLength){
		for (int i = deleteIndex; i < currentLength - 1; i++) {
            numbers[i] = numbers[i + 1];
        }
        currentLength--;
        printf("Mang sau khi xoa: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", numbers[i]);
        }
        printf("\n");
	} else {
	    printf("Vi tri phan tu khong hop le\n ");
	}
	return 0; 
}
