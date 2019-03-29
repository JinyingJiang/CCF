#include <stdio.h> 
#define L 1000
struct Node{
	int id;
	int pos;
	int step;
}b[L+1];

int sort_pos(struct Node b[],int n){
	int i,j;
	struct Node temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(b[j].pos>b[j+1].pos){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
}

int sort_id(struct Node b[],int n){
	int i,j;
	struct Node temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(b[j].id>b[j+1].id){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
}

int main(){
	int n,l,t;
	int i,j;
	scanf("%d %d %d",&n,&l,&t);
	for(i=0;i<n;i++){
		b[i].id=i;
		scanf("%d",&b[i].pos);
		if(b[i].pos==l) b[i].step=-1;
		else b[i].step=1;
	}
	sort_pos(b,n);  //先根据位置排序,用于处理数轴上每个小球接下来每个时刻的位置状态 
	for(i=1;i<=t;i++){    //模拟每一秒过后各个球的状态 
		for(j=0;j<n;j++){ //遍历每个小球得到该球当前时刻的位置 
			b[j].pos+=b[j].step; 
			if(b[j].pos==0||b[j].pos==l) b[j].step=-b[j].step;  //每次位置更改后同时判断方向是否需要更改 
		}
		for(j=0;j<n-1;j++){
			if(b[j].pos==b[j+1].pos) {
				b[j].step=-b[j].step;
				b[j+1].step=-b[j+1].step;
			}
		}
	}
	sort_id(b,n);  //根据ID号进行排序，恢复原来的顺序 
	for(i=0;i<n;i++){
		printf("%d ",b[i].pos);
	} 
	printf("\n");
	return 0;
}
