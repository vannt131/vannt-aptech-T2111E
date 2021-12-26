#include <stdio.h>
int main(){
	int n, i = 1;
	printf("Nhap so n:");
	scanf("%d", &n);
	while ( i<n ){
		int j = 1; 
		int count =0;
		while ( j <= i){
			if ( i%j == 0){
		        count++;
		    }
		    j++;
		} 
        if ( count==2 ){
		    printf("%d la so nguyen to \n", i);
	    }
		i++;
	}
}
