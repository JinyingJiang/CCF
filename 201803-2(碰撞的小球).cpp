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
	for(i=1;i<=t;i++){    //ģ��ÿһ�����������״̬ 
		for(j=0;j<n;j++){ //����ÿ��С��õ�����ǰʱ�̵�λ�� 
			pos[j]+=step[j]; 
			if(pos[j]==0||pos[j]==l) step[j]=-step[j];  //ÿ��λ�ø��ĺ�ͬʱ�жϷ����Ƿ���Ҫ���� 
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
