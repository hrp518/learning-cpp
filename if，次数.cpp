#include <iostream>
#include "stdafx.h"
using namespace std;
int main()
{
	int stat = 0;//ͳ������
	int n1 = 0;//��ֵ
	if (cin >> stat)
	{
		int fre = 1;//Ƶ��
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