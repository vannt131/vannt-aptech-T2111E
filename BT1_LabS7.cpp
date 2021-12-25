#include <stdio.h>
int main(){
	int n, arr[n], s=0 ;
	printf("Nhap so n:");
	scanf("%d", &n);
	
	for (int i= 0; i<n; i++){
		printf("Nhap pt so arr[%d]:", i);
		scanf("%d", &arr[i]);
	}
	int count = 0;
	for (int i=0; i<=n; i++){
		if ( arr[i]%2 == 1){
			s= s+arr[i];
			count++;
		}
	}
	if ( count> 0){
	    printf("Trung binh cong cua cac so le la: %d", s/count);
	} else {
		printf(" Mang khong co so le, khong the tinh trung bình cong");
}
