#include <stdio.h>
#include <stdlib.h>
#define N 2000 
#define M 1000000
int main(){
	int a[N],b[N],c[N],d[N],*m; 
	int n,i,j;
	int sum=0,max;
	m=(int *)malloc(sizeof(int)*M);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d %d",&c[i],&d[i]);
	}
	if(b[n-1]>d[n-1]) max=b[n-1];
	else max=d[n-1]; 
	for(i=0;i<n;i++){      //����ÿ��ʱ��� 
		for(j=a[i];j<b[i];j++){  //a[i]��b[i]���ʱ���У�ÿ��ʱ�ζ�Ӧ��m[j]���� 
			(*(m+j))++;
		}
		for(j=c[i];j<d[i];j++){
			(*(m+j))++;
		}
	}
	for(i=1;i<max;i++){
		if((*(m+i))==2) sum++;  //m[j]=2˵�����ʱ�������˶���װ�� 
	}
	free(m);
	printf("%d\n",sum);
	return 0;
}
