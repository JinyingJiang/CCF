#include <stdio.h>
#define N 1000 
int main(){
	int n,k,count=0;
	int temp=0;
	int a[N]={0};
	int i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	for(i=0;i<n;i++){
		if(temp+a[i]<k){
			temp+=a[i];
			if(i==n-1){   //�����ˣ����һ���˻�û���� 
				count++;continue;
			} 
			continue;
		}
		temp=0;
		count++;  //���˷����� 
	}
	printf("%d\n",count);
	return 0;
}
