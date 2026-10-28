#include "Angle.hpp"  //包含hpp文件
#include <iostream> 


int main(){
    Angle myAngle(20.0,9.8);  //定义函数

    double d;  //以下为交互功能
    double h;
    std::cout << "请输入距离d为(单位m):";
    std::cin >> d;
    std::cout << "请输入高度h为(单位m):";
    std::cin >> h;
    


//  调用solver，接受结构体  //
HwResult result =myAngle.solver(d,h);


//  验证有无解并输出  //
if (result.tof)
{
    std::cout<<"高抛情况下角度为："<<result.deg1<<"度，飞行时间："<<result.t1<<"秒"<<std::endl;
    std::cout<<"低抛情况下角度为："<<result.deg2<<"度，飞行时间："<<result.t2<<"秒"<<std::endl;
}
else
{
    std::cout<<"数值无效，无解！"<<std::endl;
}
    return 0;
}

