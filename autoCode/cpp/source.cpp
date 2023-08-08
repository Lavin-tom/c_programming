//multipath inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		A()
		{
			cout<<"constructor-A"<<endl;
			cin>>x;
		}
		~A()
		{
			cout<<"destructor-A"<<endl;
		}
};
class B : virtual public A
{
	public:
		int y;
		B()
		{
			cout<<"constructor-B"<<endl;
			cin>>y;
		}
		~B()
		{
			cout<<"destructor-B"<<endl;
		}
};
class D : virtual public A
{
	public:
		int z;
		D()
		{
			cout<<"constructor-D"<<endl;
			cin>>z;
		}
		~D()
		{
			cout<<"destructor-D"<<endl;
		}
};
class C : public B, public D
{
	public:
		int w;
		C()
		{
			cout<<"constructor-C"<<endl;
			cin>>w;
		}
		~C()
		{
			cout<<"destructor-C"<<endl;
		}
		void get_data()
		{
			//cout<<"x - B : "<<B::x<<endl;
			//cout<<"x - D : "<<D::x<<endl;
			cout<<"x: "<<x<<endl;
			cout<<"y: "<<y<<endl;
			cout<<"z: "<<z<<endl;
			cout<<"w: "<<w<<endl;
		}

};
int main()
{
	C obj_c;
	cout<<"size of A: "<<sizeof(A)<<endl;		//4
	cout<<"size of B: "<<sizeof(B)<<endl;		//8
	cout<<"size of C: "<<sizeof(C)<<endl;		//20
	cout<<"size of D: "<<sizeof(D)<<endl;		//8
	obj_c.get_data();
}
