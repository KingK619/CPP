#include<iostream>
using namespace std;
class time
{
	int hr,Min;
	public:
		void get()
		{
			cin>>hr>>Min;
		}
		void disp()
		{
			cout<<hr<<":"<<Min;

		}
		void diff(time,time);
};
void time::diff(time t1,time t2)
{

	Min=Min+t1.Min-t2.Min;
	Min=Min%60;
	hr=Min/60;
	hr=hr+t1.hr-t2.hr;


}

int main()
{
	time t1,t2,t3;
	cout<<"Enter 1st time:";
	t1.get();
	cout<<"Enter 2nd time:";
	t2.get();
	t3.diff(t1,t2);
	cout<<"\nThe resultant time is";
	t3.disp();
}
