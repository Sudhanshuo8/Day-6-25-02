#include<iostream>

using namespace std;

class student
{
	int   roll;
	float per;
	char  grade;
	
	public:
		void get();
		friend void show(student & g);//decleration 
};

	void student::get()
	{
		cout<<"Enter the roll per grade"<<endl;
		cin>>roll>>per>>grade;
	}
	
	void show(student & g)
	{
		cout<<"roll :"<<g.roll<<endl<<"per :"<<g.per<<endl<<"grade :"<<g.grade<<endl;
	}
	
	int main()
	{
		student s1;
		s1.get();
		show(s1);
		return 0;
	}
