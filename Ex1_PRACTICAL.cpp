#include <stdio.h>
int main(){
	int n; 
	float Tong;
	
	printf ("Nhap so n tu ban phim:");
	scanf ("%d", &n);
	if (n > 0){
		Tong = 0;
		for (int i = 0; i<n; i++){
		    Tong = Tong + 1/i; 
		}
		printf("Tong cua day S la: %f", Tong);
	}
	else {
		printf("Error!");
	}
}

