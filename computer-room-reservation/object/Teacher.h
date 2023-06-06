#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Identity.h"
using namespace std;

class Teacher :public Identity{
public:
    int m_EmpId; //教师编号

    Teacher();  //默认构造
    //有参构造 (职工编号，姓名，密码)
    Teacher(int empId, string name, string pwd);
    virtual void operMenu(); //菜单界面
    void showAllOrder();    //查看所有预约
    void validOrder();      //审核预约
};