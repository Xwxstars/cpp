#include <iostream>
using namespace std;
#include <string>
#include "workerManager.h"
#include "boss.h"
#include "employee.h"
#include "manager.h"
#include "worker.h"


int main() {
	//ʵ���������ߵĶ���
	WorkerManager wm;
	int choice = 0;
	while(true){
		wm.ShowMenu();
		cout << "���������ѡ��" << endl;
		cin >> choice;
		switch(choice) {
			case 0:	//�˳�ϵͳ
				wm.ExitSystem();
				break;
			case 1: //���ְ��
				wm.addEmp();
					break;

			case 2:	//��ʾְ��
				wm.showEmp();
				break;
			case 3:	//ɾ��ְ��
				wm.Del_emp();
				break;
			case 4:	//�˳��޸�ְ��
				wm.Mod_enp();
				break;
			case 5:	//����ϵͳ
				wm.Find_EMP();
				break;
			case 6:	//ְ������
				wm.Sort_Emp();
				break;
			case 7:	//�������
				wm.Clean_File();
				break;
			default:
				system("cls");
				break;

		}
		system("cls");
	}
	wm.ShowMenu();
	system("pause");


	return 0;
	

}