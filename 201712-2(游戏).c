#include <stdio.h>
#define N 1000
int main(){
	int n,k;
	int i;
	int f[N+1]={0};
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
		f[i]=(f[i-1]+k)%i;  //f[i]是0到i-1之间的角标 
	}
	printf("%d\n",f[n]+1);
	return 0;
}

/*//暴力解可能会超时 
int main() {
	int n,k,num=0;
	long long pos=0;
	int alive[N]= {0};
	int i=0;
	scanf("%d %d",&n,&k);
	int temp=n;
	for(i=0,pos=0; n>1;) {
		printf("!!!!!!%d %d\n",i,pos);
		if(alive[i]==0) {  //报数 
			num++;
			if(num%k==0||num%10==k) {
				alive[i]=1;
				n--;
			}
		}
		pos++;
		i=pos%temp;

	}

	for(i=0; i<temp; i++) {
		if(alive[i]==0) break;
	}
	printf("%d\n",i+1);
	return 0;
}*/
