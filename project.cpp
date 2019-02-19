#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;
class ph
{
	public:
	float p;
		void get()
		{
			cout<<"enter the ph value of water"<<endl;
			cin>>p;
			if(p>14 || p<0){
			cout<<"enter the valid input"<<endl;
			return get();
		}
		}
		void show()
		{
			if(p==7)
			{
				cout<<"water is elegible to drink"<<endl;
			}
			if(p<7 && p>=0)
			{
				cout<<"water is not elegible to drink AND THE WATER IS ACIDIC"<<endl;
			}
				if(p>7 && p<=14)
			{
				cout<<"water is not elegible to drink AND THE WATER IS BASIC"<<endl;
			}
		}
};
class oxygen
{
	public:
	float o;

		void getdata()
		{
			cout<<"enter the value disolved oxygen in the water"<<endl;
			cin>>o;
		}
		void showdata()
		{
			if(o==1)
			{
				cout<<"water is elegible to drink"<<endl;
			}
			if(o!=1)
			{
				cout<<"water is not elegible to drink"<<endl;
			}
		}
};
class mg
{
	public:
	int x;
		void input()
				{
			cout<<"enter if the magnesium and calcium sulphates are present or not"<<endl<<"enter 1 to yes and 0 to no"<<endl;
			cin>>x;
			if(x!=0&&x!=1)
			{
				cout<<"enter the valid input"<<endl;
				return input();
			}
		}
		void output()
		{
			if(x==1)
			{
				cout<<"the water is hard not elegible to drink"<<endl;
			}
			 if(x==0)
			{
			cout<<"the water is soft and elegible to drink"<<endl ;
		}

		}
};
int main()
{
	ph e;
	oxygen i;
	mg m;
	char place[20];
	cout<<"enter the place from where sample is collected"<<endl;
	cin>>place;
	e.get();
	e.show();
	i.getdata();
	i.showdata();
	m.input();
	m.output();
	 if(e.p==7 && i.o==1 && m.x==0)
    {
    	cout<<"THE WATER IS ELEGIBLE TO DRINK"<<endl;
    }
    else
    {
    	cout<<"THE WATER IS NOT ELEGIBLE TO DRINK"<<endl;
    }
    cout<<"====================================================================================================================="<<endl;
	 if(e.p==7 && i.o==1 && m.x==0)
	 {
	 	cout<<place<<"-"<<e.p<<"-"<<i.o<<"-"<<"softwater"<<"-"<<"The water is elegible to drink"<<endl;
	 }
	 else
	 cout<<place<<"-"<<"Ph of water is "<<e.p<<"-"<<"oxygen content in the water is "<<i.o<<"-"<<"hardwater"<<"-"<<"The water is not elegible to drink"<<endl;
	 ofstream myfile;
	 myfile.open("water.txt");
	 if(e.p==7 && i.o==1 && m.x==0){
	 myfile<<place<<endl<<"Ph of water is "<<e.p<<endl<<"oxygen content in the water is "<<i.o<<endl<<"softwater"<<endl<<"the water is elegible to drink.\n";}
	 else  myfile<<place<<endl<<e.p<<endl<<i.o<<endl<<"hardwater"<<endl<<"the water is not elegible to drink.\n";
	 myfile<<"===================================================================================================================="<<endl;
	 myfile.close();
	 cout<<"data saved";
}
