#include "Angle.hpp"  //包含hpp文件（相当于录入图纸）
#include <cmath>      //引用用于计算的库

//  一、写构造函数  //

Angle::Angle(double v0, double g) : v0(v0),g(g){}
//冒号后面的作用是初始化列表，即：让外部的输入参数v0和g，与private里的v0和g对应

 
//  二、写计算函数  //

HwResult Angle::solver(double d,double h){
    HwResult res;  //准备结构体

    double k=(g*d*d)/(2*v0*v0);
    double delta=d*d-4*k*(h+k);  //计算判别式用于验证d的正确性
    
    if (delta<0){  //如果无解
        res.tof=false;
        return res;   //将false返回res实现报错
    }    


//如果有解
double tan_theta1=(d+std::sqrt(delta))/(2*k);  //计算高抛
double tan_theta2=(d-std::sqrt(delta))/(2*k);  //计算低抛

//  三、求deg和t  //
res.deg1=std::atan(tan_theta1)*180.0/3.1415926;  //弧度转换成角度
res.deg2=std::atan(tan_theta2)*180.0/3.1415926;

res.t1=(d/v0)*std::sqrt(1+tan_theta1*tan_theta1);
res.t2=(d/v0)*std::sqrt(1+tan_theta2*tan_theta2);

res.tof=true;
return res;
}

