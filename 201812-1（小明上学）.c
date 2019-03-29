#include <stdio.h> 
int main(){
	int r,y,g;
	int n;
	int k,t;
	int i,sum=0;
	scanf("%d %d %d",&r,&y,&g);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&k,&t);
		if(k==0 || k==1) sum+=t;
		else if(k==2) sum=sum+t+r; 
	}
	printf("%d\n",sum);
	return 0;
}
