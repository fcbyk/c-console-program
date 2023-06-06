#include<iostream>
using namespace std;
#include "Worker.h"

//员工类
class Employee :public Worker
{
public:

    //构造函数
    Employee(int id, string name, int dId)
    {
        this->m_Id = id;
        this->m_Name = name;
        this->m_DeptId = dId;
    }


    //显示个人信息
    void showInfo()
    {
        cout << "职工编号： " << this->m_Id
             << " \t职工姓名： " << this->m_Name
             << " \t岗位：" << this->getDeptName()
             << " \t岗位职责：完成经理交给的任务" << endl;
    }

    //获取职工岗位名称
    string getDeptName()
    {
        return string("员工");
    }
};
