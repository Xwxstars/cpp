#include "boss.h"

Boss::Boss(int id, string name, int DepId)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DepId = DepId;
}

void Boss::showInfo()
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名：" << this->m_name
		<< "\t岗位：" << this->getDepName()
		<< "\t职工职责：管理公司所有事物。" << endl;
}

string Boss::getDepName()
{
	return string("老板");
}