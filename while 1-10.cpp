#include <iostream>
int main()
{
    int result=0; //变量int
    int n1=1; //变量第一个数
    while (n1<=10) //条件
    {
        result=result+n1;//等价 result=result+n1
        ++n1; //每次对N1+1
    }
    std::cout <<"the result is "
    <<result <<std::endl; //cout 输出 endl结束
    system("pause");
    
}
