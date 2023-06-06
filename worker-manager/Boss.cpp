#include<iostream>
using namespace std;
#include "./Worker.h"

//老板类
class Boss :public Worker
{
public:

    Boss(int id, string name, int dId)
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
             << " \t岗位职责：管理公司所有事务" << endl;
    }

    //获取职工岗位名称
    string getDeptName()
    {
        return string("总裁");
    }
};

