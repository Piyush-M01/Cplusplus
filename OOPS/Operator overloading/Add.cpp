#include<iostream> 
using namespace std;

class Addition {
public:
    int real, over;
	Addition(int real, int over) {
		this->real = real;
		this->over = over;
	}

	Addition operator+ (Addition &ob);
};
Addition Addition::operator+(Addition &ob) {
		ob.real = real + ob.real;
		ob.over = over + ob.over;
		return ob;
	}
int main()
{
	cout<<"Enter the values"<<endl;
	int a,b,c,d;
	cout<<"enter the real values"<<endl;
	cin>>a>>b;
	cout<<"enter the complex part values"<<endl;
	cin>>c>>d;
	Addition ob(a, c), ob1(b, d);
	Addition sum = ob + ob1;
	cout<<sum.real<< " + i" <<sum.over<<endl;
    return 0;
}
