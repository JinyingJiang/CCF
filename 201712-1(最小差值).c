#include <stdio.h> 
#include <math.h> 
#define N 10000

int sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	return 0;
}

int main(){
	int a[N]={0},n,min,temp;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n);
	min=abs(a[0]-a[1]);
	for(i=1;i<n-1;i++){
		temp=abs(a[i]-a[i+1]);
		if(temp<min) min=temp;
	}
	printf("%d\n",min);
	return 0;
}
