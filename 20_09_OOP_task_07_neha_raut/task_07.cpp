#include<iostream>
using namespace std;

class volume
{
	private:
		float L,B,H;
	public:
		volume()
		{
			L=B=H=0;
		}
		
		volume(int a,int b,int c)
		{
			L=a;
			B=b;
			H=c;
		}
		
		double getvolume()
		{
			return L*B*H;
		}
		
		void input()
		{
			cout<<"\nEnter a length: ";
			cin>>L;
			cout<<"\nEnter a breadth: ";
			cin>>B;
			cout<<"\nEnter a height: ";
			cin>>H;
		}
		
		void print()
		{
			cout<<"\nLength, Breadth, Height = "<<L<<" "<<B<<" "<<H;
		}
		
		int operator <(volume obj)
		{
			if(getvolume()<obj.getvolume())
				return 1;
			else
				return 0;
		}
		
		int operator >(volume obj)
		{
			if(getvolume()>obj.getvolume())
				return 1;
			else
				return 0;
		}
		
		int operator <=(volume obj)
		{
			if(getvolume()<=obj.getvolume())
				return 1;
			else
				return 0;
		}
		
		int operator >=(volume obj)
		{
			if(getvolume()>=obj.getvolume())
				return 1;
			else
				return 0;
		}
		
		int operator ==(volume obj)
		{
			if(getvolume()==obj.getvolume())
				return 1;
			else
				return 0;
		}
		
};


int main()
{
	int option;
	volume V1(2,3,4),V2(1,2,3);
	V1.input();
	V2.input();
	V1.print();
	V2.print();
	cout<<"\nEnter which operator you want to use\n1.<\n2.>\n3.<=\n4.>=\n5.==\n";
	cin>>option;
	switch(option)
	{
		case(1):
			if(V1<V2)
				cout<<"True";
			else
				cout<<"False";
		break;
		case(2):
			if(V1>V2)
				cout<<"True";
			else
				cout<<"False";
		break;
		case(3):
			if(V1<=V2)
				cout<<"True";
			else
				cout<<"False";
		break;
		case(4):
			if(V1>=V2)
				cout<<"True";
			else
				cout<<"False";
		break;
		case(5):
			if(V1==V2)
				cout<<"True";
			else
				cout<<"False";
		break;
	}
	
}

