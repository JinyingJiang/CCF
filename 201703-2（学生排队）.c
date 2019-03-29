#include <stdio.h> 
#define N 1000

int main(){
	int n,m; 
	int p,q;
	int a[N+1]={0},b[N+1]={0};
	int i,j,temp,temp1;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=1;i<=n;i++){
		a[i]=i;b[i]=i;
	}
	for(i=1;i<=m;i++){
		scanf("%d %d",&p,&q);  //p同学移动q 
		temp=b[p]+q;
		if(q>0){
			for(j=b[p];j<temp;j++){  //j位置移动到temp位置 
				temp1=a[j];
				a[j]=a[j+1];
				a[j+1]=temp1;
				b[a[j]]=j;
				b[a[j+1]]=j+1;
			}
		}else if(q<0){
			for(j=b[p];j>temp;j--){
				temp1=a[j];
				a[j]=a[j-1];
				a[j-1]=temp1;
				b[a[j]]=j;
				b[a[j-1]]=j-1;
			}
		}else continue;
	} 
	for(i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
