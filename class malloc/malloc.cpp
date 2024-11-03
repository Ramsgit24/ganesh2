#include<iostream>
using namespace std;
class A
{
	int *ptr;
	int x;
	//int *ptr2;
public:

	A()
	{
	    ptr=&x;
		x=100;
		
		ptr=(int*)malloc(sizeof(int));
		
	}
	void assign(int a)
	{
		ptr=a+100;
		ptr2=a+200;
		x=a+300;
		
	
	}
	void display()
	{
		cout<<x<<endl;
	}
	~A()
	{
		//free(x);
		cout<<"A distructor"<<endl; 
	}

};
int main()
{
	/*A* obj;*/
	//obj.assign(11);
	////obj.display();
	//A*obj=(A*)malloc(sizeof(A));
	//obj->assign(11);
	//obj->display();
	int* ptr=new int;
	*ptr=200;
	cout<<*ptr<<endl;
	delete ptr;
	/*A* obj=new A;
	obj->assign(23);
	obj->display();
	delete(obj);*/
}
