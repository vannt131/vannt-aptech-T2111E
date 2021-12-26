#include <stdio.h>
int main(){
	int A;
	printf("Nhap vao so A tu ban phim:");
	scanf("%d", &A);
	switch(A)
	{
		case 2:
		{
			printf("Day la thu 2");
			break;
		}
		case 3:
		{
			printf("Day la thu 3");
			break;
		}
		case 4:
		{
			printf("Day la thu 4");
			break;
		}
		case 5:
		{
			printf("Day la thu 5");
			break;
		}
		case 6:
		{
			printf("Day la thu 6");
			break;
		}
		case 7:
		{
			printf("Day la thu 7");
			break;
		}
		default:
		{
			printf("Day khong phai la thu trong tuan");
		}
	}
}
