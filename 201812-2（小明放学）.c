//#include <stdio.h> 
//int k1,t1,k2,t2;
//int r,y,g;
//int sum=0;
//int get_real_time1(){
//	int temp = (sum-t1)%(r+y+g);
//	if(k1==1){
//		if(temp<=g) {k1=3;t1=g-temp;}
//		else if(temp>g && temp<=g+y) {k1=2;t1=g+y-temp;}
//		else {k1=1;t1=r+y+g-temp;}
//	}else if(k1==2){
//		if(temp<=r) {k1=1;t1=r-temp;}
//		else if(temp>r && temp<=r+g) {k1=3;t1=r+g-temp;}
//		else{k1=2;t1=r+g+y-temp;}
//	}else if(k1==3){
//		if(temp<=y) {k1=2;t1=y-temp;}
//		else if(temp>y&&temp<=y+r) {k1=1;t1=y+r-temp;}
//		else{k1=3;t1=y+r+g-temp;}
//	}
//}
//
//int get_real_time2(){
//	int temp = (sum-t2)%(r+y+g);
//	if(k2==1){
//		if(temp<=g) {k2=3;t2=g-temp;}
//		else if(temp>g && temp<=g+y) {k2=2;t2=g+y-temp;}
//		else {k2=1;t2=r+y+g-temp;}
//	}else if(k2==2){
//		if(temp<=r) {k2=1;t2=r-temp;}
//		else if(temp>r && temp<=r+g) {k2=3;t2=r+g-temp;}
//		else{k2=2;t2=r+g+y-temp;}
//	}else if(k2==3){
//		if(temp<=y) {k2=2;t2=y-temp;}
//		else if(temp>y&&temp<=y+r) {k2=1;t2=y+r-temp;}
//		else{k2=3;t2=y+r+g-temp;}
//	}
//}
//
//int main(){
//	
//	int n;
//	
////	int sum=0;
//	scanf("%d %d %d",&r,&y,&g);
//	scanf("%d",&n);
//	scanf("%d %d",&k1,&t1);
//	while(n>0){
//		if(k1==1) {
//			sum+=t1;n--;
//			if(n>0) {
//				scanf("%d %d",&k1,&t1);
//				get_real_time1();
//			}
//			printf("%d\n",sum);
//			continue;
//		}
//		else if(k1==2){
//			sum=sum+t1+r;n--;
//			if(n>0) {
//				scanf("%d %d",&k1,&t1);
//				get_real_time1();
//			}
//			printf("%d\n",sum);
//			continue;
//		}else if(k1==0){
//			if(--n>0){
//				scanf("%d %d",&k2,&t2);
//				if(k2==1){ 
//					if((t1-t2)<=0){
//						sum+=t2;n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue;
//					}else if((t1-t2)%(r+g+y)>=g){
//						sum+=t1+g+y+r-(t1-t2)%(r+g+y);n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue;
//					}else{
//						sum+=t1;n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue;
//					}	
//				}
//				else if(k2==2){
//					if((t1-t2)<=0){
//						sum+=t2+r;n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue; 
//					} else if((t1-t2)%(r+y+g)<=r){
//						sum+=t1+r-(t1-t2)%(r+y+g);n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue;
//					}else if((t1-t2)%(r+y+g)>=r+g){
//						sum+=t1+2*r+y+g-(t1-t2)%(r+y+g);n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue;
//					}else{
//						sum+=t1;n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue;
//					}
//				}else if(k2==3){
//					if(t1-t2<=0){
//						sum+=t1;n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue;
//					}else if((t1-t2)%(r+y+g)<=(r+y)){
//						sum+=t1+r+y-(t1-t2)%(r+y+g);n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue;
//					}else{
//						sum+=t1;n--;
//						if(n>0) {
//							scanf("%d %d",&k1,&t1);
//							get_real_time1();
//						}
//						printf("%d\n",sum);continue;
//					}
//				}else if(k2==0){
//					sum+=t1;
//					k1=k2;t1=t2;n--;
//					if(n>0) {
//						scanf("%d %d",&k1,&t1);
//						get_real_time1();
//					}
//					printf("%d\n",sum);continue;
//				}
//			}else{
//				sum+=t1;n--;
//				if(n>0) {
//					scanf("%d %d",&k1,&t1);
//					get_real_time1();
//				}
//				printf("%d\n",sum);continue;
//			}
//		}
//	}
//	printf("%d\n",sum);
//	return 0;
//}

#include <stdio.h>  //必须得用long long，int会溢出 
int main(){
	long long k,t;
	long long n;
	long long r,y,g;
	long long sum=0,cur=0;
	long long tot;
	scanf("%lld %lld %lld",&r,&y,&g);
	scanf("%lld",&n);
	tot=r+y+g; 
	while(n--){
		scanf("%lld %lld",&k,&t);
		if(k==0){
			sum+=t;continue;
		}
		else if(k==1){
			cur=sum-t+r; //归一化成接下来都是r,g,y   
			cur%=tot;  
		}else if(k==2) {
			cur=sum-t+y+g+r; 
			cur%=tot;
		} else {
			cur=sum-t+g+r;
			cur%=tot;
		}
		if(cur<r){
			k=1;
			t=r-cur;
			sum+=t;
			continue;
		}else if(cur>=r&&cur<=r+g){
			k=3;
			t=r+g-cur;
			continue;
		}else{
			k=2;
			t=r+g+y-cur;
			sum+=t+r; 
			continue;
		}
	}
	printf("%lld\n",sum);
	return 0;
} 

