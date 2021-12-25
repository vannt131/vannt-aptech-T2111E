#include <stdio.h>
int main(){
	int n, m, sd;
	printf("Nhap vao so n=");
	scanf("%d", &n);
	m = 0;
	sd = n%10;
	m = m*10 + sd;
	n = n/10;
	if ( n>0 ){
		sd = n%10;
		m = m*10 + sd;
		n = n/10;
		if ( n>0 ){
			sd = n%10;
		    m = m*10 + sd;
		    n = n/10;
		    if ( n>0 ){
		    	sd = n%10;
		        m = m*10 + sd;
		        n = n/10;
		        printf("So nghich dao cua a la: %d", m);
		    } else {
		    	printf("So nghich dao cua a la: %d", m);
		    }
		} 
		else {
		        printf("So nghich dao cua a la: %d", m);
		}
	}
	else {
		printf("So nghich dao cua a la: %d", m);
	}
}
	
