#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Employee : public Worker
{
public:
	Employee(int id,string name,int DepId );//构造函数
	virtual void showInfo();//显示个人信息
	virtual string getDepName();//显示部门名称

};