#include <stdio.h>
int main(){
	int n, arr[n], x;
	printf("Nhap so n=");
	scanf("%d", &n);
	
	printf("Nhap so x=");
	scanf("%d", &x);
	
	int flag = 0;
	for (int i=0; i<n; i++){
	    printf("Nhap pt arr[%d]:", i);
	    scanf("%d", &arr[i]);
	    if ( x == arr[i]){
	        printf("x co thuoc mang n");
	        flag = 1;
	        break;
	    }
	}
	if (flag == 0)
	{
		printf("x khong nam trong danh sach");
	}
}
