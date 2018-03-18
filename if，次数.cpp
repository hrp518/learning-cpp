#include <iostream>
#include "stdafx.h"
using namespace std;
int main()
{
	int stat = 0;//统计数字
	int n1 = 0;//新值
	if (cin >> stat)
	{
		int fre = 1;//频率
		while (cin >> n1)
		{
			if (n1 = stat)
				++fre;
			else
			{
				cout << stat << "fre is" << fre << "times" << endl;
				stat = n1;
				fre = 1;


			}



		}//done here
		cout << stat << "fre is"
			<< fre << "times" << endl;


	}
	system("pause");







}