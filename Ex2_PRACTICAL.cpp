#include <stdio.h>
int reverseArray(int ary[], int x){
	for (int i=1; i<x/2; i++){
		int temp = ary[i];
		ary[i]= ary[x-1-i];
		ary[x-1-i]= temp;
	}
	
}

int main(){
	int n,ary[n];
	printf ("Nhap so n:");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("Nhap gia tri cho ary[%d]:",i);
		scanf("%d", &ary[i]);
	}
	reverseArray(ary, n);
	printf("Mang sau khi dao nguoc la: %d", ary[n]);
}
