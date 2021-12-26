#include <stdio.h>
int main(){
	int n;
	int x1 = 1, x2 = 1, x3 = 3;
	int i;
	printf("Nhap so n:");
	scanf("%d", &n);
	for (i=4; i<=n; i++){
		x1 = x2;
		x2 = x3;
		x3 = x1 + x2;
	}
	printf("So dung o vi tri thu n la: %d", x3);
}
