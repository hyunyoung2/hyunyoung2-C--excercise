#include <iostream>
using namespace std;

void SimpleFunThree(void)
{
	try{
	cout << "void SimpleFunThree(void)" << endl;
	throw -1;
	}
	catch(char expn)
	{
		cout << "catch(char esf)" <<endl;
	}
}


void SimpleFunTwo(void)
{
	cout << "void SimpleFunTwo(void)" << endl;
	SimpleFunThree();
}

void SimpleFunOne(void)
{
	cout << "void SimpleFunOne(void)" << endl;
	SimpleFunTwo();
}

int main()
{
	try
	{
		SimpleFunOne();
	}
	catch(long expn)
	{
		cout << "예외코드 : " << expn << endl;
	}

	return 0;
}
