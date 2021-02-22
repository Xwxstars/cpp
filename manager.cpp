#include "manager.h"

Manager::Manager(int id, string name, int DepId)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DepId = DepId;
}

void Manager::showInfo()
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名：" << this->m_name
		<< "\t岗位：" << this->getDepName()
		<< "\t职工职责：完成了老板的任务，并下发给员工。" << endl;
}

string Manager::getDepName()
{
	return string("经理");
}