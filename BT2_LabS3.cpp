#include <stdio.h>
int main(){
	int a = 4000;
    int d = 0.08;
	int lai;
	int tsau = a;
	for (int i=1; i<=4; i++){
	    lai = a*d;
		tsau = a + lai;
		printf ("So tien gui sau %d nam la: %d\n", i, a);
	}
}	
