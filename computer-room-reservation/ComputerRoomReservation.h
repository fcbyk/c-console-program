#include<iostream>
#include "object/Identity.h"
#include "const/computerRoomFile.h"
#include "object/Student.h"
#include "object/Teacher.h"
#include "object/ComputerManager.h"
#include <fstream>
#include <string>
using namespace std;

class ComputerRoomReservation {
public:
    ComputerRoomReservation();

    int Launch();

    //教师菜单
    void TeacherMenu(Identity * &teacher);

    //学生菜单
    void studentMenu(Identity * &student);

    //管理员菜单
    void managerMenu(Identity * &manager);

    //登录功能
    void LoginIn(string fileName, int type);

};
