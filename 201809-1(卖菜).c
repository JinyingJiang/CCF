#include <stdio.h>
#define N 10000 
int main(){
	int n;
	int i;
	int a[N],b[N];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	b[0]=(a[0]+a[1])/2;
	for(i=1;i<n-1;i++){
		b[i]=(a[i-1]+a[i]+a[i+1])/3;
	}
	b[n-1]=(a[n-2]+a[n-1])/2;
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
} 
