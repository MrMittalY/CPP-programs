#include<iostream>
using namespace std;

class timer
{
	int hr;
	int min;
	int sec;
public:
	void gettime(int ,int, int);
	void puttime();
	void sum(timer, timer);
};
void timer::gettime(int h, int m, int s)
{
	hr=h;
	min=m;
	sec=s;
}
void timer::puttime()
{	cout<<"\nHours: "<<hr<<"\nMinutes: "<<min<<"\nSeconds: "<<sec;
	cout<<endl;
}
void timer::sum(timer t1,timer t2)
{
sec=t1.sec+t2.sec;
min=sec/60;
sec=sec%60;
min=min+t1.min+t2.min;
hr=min/60;
min=min%60;
hr=hr+t1.hr+t2.hr;
}

int main()
{timer t1, t2, t3;
t1.gettime(15,48,45);
t2.gettime(2,34,58);
t3.sum(t1,t2);

cout<<"\n T1 ";t1.puttime();
cout<<"\n T2 ";t2.puttime();
cout<<"\n T3 ";t3.puttime();
cout<<endl;
return 0;
}
	
