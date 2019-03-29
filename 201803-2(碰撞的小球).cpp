#include <stdio.h> 
#define L 1000
int main(){
	int n,l,t;
	int step[L+1],pos[L+1];
	int i,j;
	scanf("%d %d %d",&n,&l,&t);
	for(i=0;i<n;i++){
		scanf("%d",&pos[i]);
		if(pos[i]==l) step[i]=-1;
		else step[i]=1;
	}
	for(i=1;i<=t;i++){    //模拟每一秒过后各个球的状态 
		for(j=0;j<n;j++){ //遍历每个小球得到该球当前时刻的位置 
			pos[j]+=step[j]; 
			if(pos[j]==0||pos[j]==l) step[j]=-step[j];  //每次位置更改后同时判断方向是否需要更改 
		}
		for(j=0;j<n-1;j++){
			if(pos[j]==pos[j+1]) {
				step[j]=-step[j];
				step[j+1]=-step[j+1];
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",pos[i]);
	} 
	printf("\n");
	return 0;
}
