#include <stdio.h>
#define N 1000
#define K 1000
struct Node {
	int num;
	int time;
	int ttl;
} b[K+1];

int sort(struct Node b[],int n) {
	int i,j;
	struct Node temp;
	for(i=1; i<n; i++) {
		for(j=1; j<n-i+1; j++) {
			if(b[j].time>b[j+1].time) {
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
	return 0;
}

int main() {
	int n,k,a[N+1]= {0}; //记录钥匙盒的状态，未知为0，其余是哪间教室就为几
	int index[N+1]={0}; //记录i钥匙存在钥匙盒的第几个位置 
	int i,j=1,m,l,max=0;
	int c[N+1]= {0},count=0,temp=0; //记录当前教室剩余占用时间,正在上课的数量
	scanf("%d %d",&n,&k);

	for(i=1; i<=k; i++) {
		scanf("%d %d %d",&b[i].num,&b[i].time,&b[i].ttl);
		if((b[i].time+b[i].ttl)>max) max=b[i].time+b[i].ttl;
	}
	for(i=1; i<=n; i++) {
		a[i]=i; //钥匙盒的初始状态
		index[i]=i;
	}
	sort(b,k);  //总共k个老师
	for(i=b[1].time; i<=max; i++) { //每个时刻检查
		for(l=1; l<=n; l++) { //从小到大更新各个教室的占用时间
			int temp=count;
			if(temp>0) { 	//有老师在上课
				if(c[l]>0) {
					c[l]--;
					temp--;
					if(c[l]==0) { //上课结束，还钥匙，更新钥匙盒状态
						for(m=1; m<=n; m++) {
							if(a[m]==0) {
								a[m]=l;
								index[l]=m;
								count--;
								break;
							}
						}
					}
				}
			}
		}
		if(count<n) {
			while(1) {  //如果有多个老师来取钥匙
				if(i==b[j].time) { //开始上课，更新教室的占用时间，以及钥匙盒状态
					c[b[j].num]=b[j].ttl;  //更新教室占用时间
					count++;
					a[index[b[j].num]]=0;  //该老师对应教室对应的钥匙盒位置置零 
					index[b[j].num]=0;   // 该老师对应教室对应的钥匙被取走 
					if(i==b[j+1].time) {
						j++;
						continue;
					} else {
						j++;
						break;
					}
				} else break;
			}
		}
	}
	for(i=1; i<=n; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
