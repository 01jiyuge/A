#include <stdio.h>
int main()
{
	int a0=1;
	int a1=1;
	int n=7;
	int res=0;
	for(int i=0;i<n-2;i++) {
		res =a0+a1;
		int t=a1;
		a1=res;
		a0=t;
	}
	printf("��%d���ֵ��:%d\n",n,res);
	
	return 0;
}
