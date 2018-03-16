#include <iostream>
int main()
{
    int result=0;
    for (int n1 =1;n1 <= 10;++n1)
    
    result += n1;//等价 result=result+n1
    std::cout <<"the result is "
    <<result <<std::endl;
    
    system("pause");
}