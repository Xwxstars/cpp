#pragma once
#include <iostream>
using namespace std;
#include <string>
//ְ���������
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;
	//��ȡ��λ����
	virtual string getDepName() = 0;

	int m_id;//ְ�����
	string m_name;//ְ������
	int m_DepId;//ְ�����ڲ������Ʊ��
	
};