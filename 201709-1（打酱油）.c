#include <stdio.h>
int main(){
	int n;
	int num=0,temp=0;
	scanf("%d",&n);
	n/=10;
	num+=n/5*2;
	temp=n%5;
	num+=temp/3;
	temp%=3;
	num+=n;
	printf("%d\n",num);
	return 0;
}
