/*user define to user define casting
1.operator casting
2.constructor*/
#include<iostream>
using namespace std;
//operator
class cup;
class cup{
	int a,b;
	public:
		void show()
		{
			cout<<"Capacity of cup:"<<a<<endl<<"Weight of cup:"<<b;
		}
		void set(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
};
class glass{
	int a,b;
	public:
		glass()
		{
			cout<<"Enter the capacity of glass and weight:\n";
			cin>>a>>b;
		}
		operator cup()
		{
			cup d;
			d.set(a,b);
			return d;
		}
};

int main()
{
	cup c;
	 glass g;
	c=g;
	c.show();
	return 0;
}
