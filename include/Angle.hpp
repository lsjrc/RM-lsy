//防止编译器识别到重复包含，并报错
#ifndef ANGLE_HPP  //如果没有定义xxx
#define ANGLE_HPP  //定义xxx


//  定义结构体（把变量打包） //
struct HwResult
{
    bool tof;  //用于判断是否有解，true or false
    double deg1;
    double deg2;
    double t1;
    double t2;
};

//创建类，简化后续程序
class Angle
{
    //定义私有参数，后续程序中不可对其进行更改
    private:
        double v0;  //初速度
        double g;   //重力加速度

    //定义函数，后续可更改和使用
    public: 
        //声明构造函数，输入两个浮点参数
        Angle(double v0,double g);

        //声明求解函数，输入d并输出一个浮点结果
        double solver(double d);

        //重载函数，引入高度h并将其返回结构体
        HwResult solver(double d,double h);
        
};

#endif  //结束if语句