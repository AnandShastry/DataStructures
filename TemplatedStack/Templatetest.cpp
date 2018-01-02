#include "Stack.h"

using namespace std;

//template<typename T1>
//
//T1 max1(const T1& i,const T1& j)
//{
//	return i>j?i:j;
//}
int main()
{
	Stack<int> sObj;
	int data=0;
	sObj.push(5);
	sObj.push(6);
	sObj.push(7);
	sObj.push(8);
	sObj.push(4);
	sObj.push(7);
	sObj.push(8);
	sObj.push(4);
	sObj.push(7);
	sObj.print();
	std::cout<<"-------------------------"<<std::endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	cout<<sObj.pop()<<endl;
	std::cout<<"-------------------------"<<std::endl;
	sObj.print();
	return 0;
}
