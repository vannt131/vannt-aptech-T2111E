#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d", &n);
	if (n>0){
		int i, s=0;
		for (i=1; i<=n; i++){
			s = s + 1/i;
		}
		printf("Tong cua day S la: %d", s);
	} else {
		printf("Error!");
	}
}
