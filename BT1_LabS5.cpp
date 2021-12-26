#include <stdio.h>
int main(){
   int n, s;
   printf("Nhap so n=");
   scanf("%d", &n);
   
   int count =0;
   for (int i=1; i<=n; i++){
   	    if (n%i == 0){
   	    	s = s + i;
   	    	count++;
   	    	printf("Uoc thu %d cua so n la: %d \n", count, i);
   	    }
   	}
   	printf("Tong cac uoc cua n la: %d", s);
}
