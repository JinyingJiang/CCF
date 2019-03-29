#include <stdio.h> 
#define N 100
#define M 20
struct rule{
	char minutes[2];
	char hours[2];
	int day;
	int month;
	int week;
	char command[N];
}r[M]; 

enum week{
	Sun = 0; Mon = 1; Tue = 2; Wed = 3; Thu = 4; Fri = 5; Sat = 6;
};

enum month{
	Jan = 1; Feb = 2; Mar = 3; Apr = 4; May = 5; Jun = 6;
	Jul = 7; Aug = 8; Sep = 9; Oct =10; Nov =11; Dec =12;
};

int main(){
	int n;
	int i;
	int minutes1,hours1,day1,month1,year1;
	int minutes2,hours2,day2,month2,year2;
	char s[12],t[12];
	scanf("%d %s %s",&n,s,t);
	for(i=0;i<n;i++){
		scanf("%s %s %d %d %d %s",r.minutes,r.hours,&r.day,&r.month,&r.week,r.command);
	}
	year1=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
	year2=(t[0]-'0')*1000+(t[1]-'0')*100+(t[2]-'0')*10+(t[3]-'0');
	month1=(s[4]-'0')*10+(s[5]-'0');
	month2=(t[4]-'0')*10+(t[5]-'0');
	day1=(s[6]-'0')*10+(s[7]-'0');
	day2=(t[6]-'0')*10+(t[7]-'0');
	hours1=(s[8]-'0')*10+(s[9]-'0');
	hours2=(t[8]-'0')*10+(t[9]-'0');
	minutes1=(s[10]-'0')*10+(s[11]-'0');
	minutes2=(t[10]-'0')*10+(t[11]-'0');
	for(;year1<=year2;year1++){
		for(;month1<=)
	}
	
	return 0;
}
