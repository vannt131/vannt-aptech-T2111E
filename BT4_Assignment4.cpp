#include <stdio.h>
int main(){
	int n;
	int i, count;
	
	printf("Nhap so n tu ban phim:");
	scanf("%d", &n);
	
	count = 0;
	for (i=1; i<+n; i++){
		if ( n%i==0 ){
		    count++;
		}
	}
	if(count ==2){
	   printf("%d la so nguyen to", n);	
	} else {
	   printf("%d khong la so nguyen to", n);
	}
}
