#include <iostream>

using namespace std;
// 하나의 예외상황이 처리되는 경우
// 예외처리 매커니즘ㅋ
// 던져지는 예외처리 
void Divide(int num1, int num2)
{
	 try 
	 {
		 if(num2 ==0)
			 throw num2;
	 }
	 catch(int expn)
	 {
		 cout << "first catch" << endl;
		 throw;
	 }
}

int main(void)
{

	try
	{
		Divide(9,2);
		Divide(4,0);
	}
	catch(char expn)
	{
		cout << "second catch" << endl;
		cout << "catch(char expn)"<<endl;
	}
	catch(int expn)
	{
		cout << "second catch" << endl;
		cout << "catch(int expn)"<<endl;
	}
	catch(long expn)
	{
		cout << "second catch" << endl;
		cout << "catch(long expn)"<<endl;

	}

	cout << "end of main"<< endl;

	return 0;
}