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

    //��ʦ�˵�
    void TeacherMenu(Identity * &teacher);

    //ѧ���˵�
    void studentMenu(Identity * &student);

    //����Ա�˵�
    void managerMenu(Identity * &manager);

    //��¼����
    void LoginIn(string fileName, int type);

};
