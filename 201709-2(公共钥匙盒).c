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
	int n,k,a[N+1]= {0}; //��¼Կ�׺е�״̬��δ֪Ϊ0���������ļ���Ҿ�Ϊ��
	int index[N+1]={0}; //��¼iԿ�״���Կ�׺еĵڼ���λ�� 
	int i,j=1,m,l,max=0;
	int c[N+1]= {0},count=0,temp=0; //��¼��ǰ����ʣ��ռ��ʱ��,�����Ͽε�����
	scanf("%d %d",&n,&k);

	for(i=1; i<=k; i++) {
		scanf("%d %d %d",&b[i].num,&b[i].time,&b[i].ttl);
		if((b[i].time+b[i].ttl)>max) max=b[i].time+b[i].ttl;
	}
	for(i=1; i<=n; i++) {
		a[i]=i; //Կ�׺еĳ�ʼ״̬
		index[i]=i;
	}
	sort(b,k);  //�ܹ�k����ʦ
	for(i=b[1].time; i<=max; i++) { //ÿ��ʱ�̼��
		for(l=1; l<=n; l++) { //��С������¸������ҵ�ռ��ʱ��
			int temp=count;
			if(temp>0) { 	//����ʦ���Ͽ�
				if(c[l]>0) {
					c[l]--;
					temp--;
					if(c[l]==0) { //�Ͽν�������Կ�ף�����Կ�׺�״̬
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
			while(1) {  //����ж����ʦ��ȡԿ��
				if(i==b[j].time) { //��ʼ�ϿΣ����½��ҵ�ռ��ʱ�䣬�Լ�Կ�׺�״̬
					c[b[j].num]=b[j].ttl;  //���½���ռ��ʱ��
					count++;
					a[index[b[j].num]]=0;  //����ʦ��Ӧ���Ҷ�Ӧ��Կ�׺�λ������ 
					index[b[j].num]=0;   // ����ʦ��Ӧ���Ҷ�Ӧ��Կ�ױ�ȡ�� 
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
