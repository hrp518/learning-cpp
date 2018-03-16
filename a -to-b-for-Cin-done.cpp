// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


using namespace std;
int main()
{
	int a;
	int b;
	int n1 = 1;


	cin >> a >> b;

	while (n1 <= b) //条件
	{
		a = a + n1;//等价 result=result+n1
		++n1;//每次对N1+1
	}
	int result = a - 1;
	std::cout << "the result is "
		<< result << endl;

	system("pause");
}



