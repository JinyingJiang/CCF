#include <stdio.h>
int main(){
	int a;
	int sum=0,times=0;
	while(1){
		scanf("%d",&a);
		if(a==1) {
			sum+=1;
			times=0;
		}
		else if(a==2){
			times++;
			sum=sum+2*times;
		} 
		else{
			break;
		}
	}
	printf("%d\n",sum);
//	return 0;
} 

