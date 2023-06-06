#pragma once
#include<iostream>
#include<string>
using namespace std;

//职工抽象基类
class Worker{
public:
    int m_Id; //职工编号
    string m_Name; //职工姓名
    int m_DeptId; //职工所在部门名称编号

    virtual void showInfo() = 0;    //显示个人信息
    virtual string getDeptName() = 0;   //获取岗位名称
};