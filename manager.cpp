#include "manager.h"

Manager::Manager(int id, string name, int DepId)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DepId = DepId;
}

void Manager::showInfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ��������" << this->m_name
		<< "\t��λ��" << this->getDepName()
		<< "\tְ��ְ��������ϰ�����񣬲��·���Ա����" << endl;
}

string Manager::getDepName()
{
	return string("����");
}