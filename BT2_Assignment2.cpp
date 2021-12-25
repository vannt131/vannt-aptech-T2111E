#include <stdio.h>
int main(){
    int m, d;
	printf ("Nhap so d tuong ung voi ngay:");
	scanf("%d", &d);
	printf ("Nhap so m tuong ung thang:");
	scanf ("%d", &m);
	
	if ( m>0 && m<13 && d>0 && d<32){
	    switch (m) {
	    case 1:
	       printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
	       break;
	    case 2:
	       if ( d<= 28){
	       	    d = d+31;
	       	    printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
	       	} else {
	       		printf ("Error!");
	       	}
	       	break;
	    case 3:
	        if ( d<=31 ){
	            d = d+31+28;
	            printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
	        } else {
	        	printf ("Error!");
	        }
	        break;
	    case 4:
	        if ( d<= 30 ){
	        	d = d+31+28+31;
	            printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
	        } else {
	            printf ("Error!");
			}
			break;
		case 5:
		    if ( d<=31 ){
			    d = d+31+28+31+30;
				printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
			} else {
			    printf ("Error!");
			}
			break;
		case 6:
		    if ( d<=30 ){
			    d = d+31+28+31+30+31;
			    printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
			} else {
			    printf ("Error!");
			}
			break;
		case 7:
		    if ( d<= 31 ){
		    	d = d+31+28+31+30+31+30;
		    	printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
		    } else {
		    	printf ("Error!");
		    }
		    break;
		case 8:
		    if ( d<=31 ){
		    	d = d+31+28+31+30+31+30+31;
		    	printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
		    } else {
		    	printf ("Error!");
		    }
		    break;
		case 9:
		    if ( d<= 30 ){
		    	d = d+31+28+31+30+31+30+31+31;
		    	printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
		    } else {
		    	printf ("Error!");
		    }
		    break;
		case 10:
		    if ( d<= 31 ){
		    	d = d+31+28+31+30+31+30+31+31+30;
		    	printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
		    } else {
		    	printf ("Error!");
		    }
			break; 
		case 11:
		    if ( d<=30 ){
		    	d = d+31+28+31+30+31+30+31+31+30+31;
		    	printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
		    } else {
		    	printf ("Error!");
		    }
		    break;
		case 12:
		    if ( d<=31 ){
		    	d = d+31+28+31+30+31+30+31+31+30+31+30;
		    	printf("La ngay thu %d trong nam va la thu %d", d, d%7+1);
		    } else {
		    	printf ("Error!");
		    }
		    break;
	    }
	} else {
	  printf ("Error!");
	}	
}
