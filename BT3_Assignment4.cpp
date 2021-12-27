#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n tu ban phim:");
	scanf("%d", &n);
	
	printf("Cac so chan be hon n la:");
	for (int a=0; a<n; a++){
		if (a%2==0){
			printf("%d", a);
		} else {}
	}
}
