#include "boss.h"

Boss::Boss(int id, string name, int DepId)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DepId = DepId;
}

void Boss::showInfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ��������" << this->m_name
		<< "\t��λ��" << this->getDepName()
		<< "\tְ��ְ�𣺹���˾�������" << endl;
}

string Boss::getDepName()
{
	return string("�ϰ�");
}