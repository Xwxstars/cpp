#include <iostream>
using namespace std;
#include <string>
#include "workerManager.h"
#include "boss.h"
#include "employee.h"
#include "manager.h"
#include "worker.h"


int main() {
	//实例化管理者的对象
	WorkerManager wm;
	int choice = 0;
	while(true){
		wm.ShowMenu();
		cout << "请输入你的选择" << endl;
		cin >> choice;
		switch(choice) {
			case 0:	//退出系统
				wm.ExitSystem();
				break;
			case 1: //添加职工
				wm.addEmp();
					break;

			case 2:	//显示职工
				wm.showEmp();
				break;
			case 3:	//删除职工
				wm.Del_emp();
				break;
			case 4:	//退出修改职工
				wm.Mod_enp();
				break;
			case 5:	//查找系统
				wm.Find_EMP();
				break;
			case 6:	//职工排序
				wm.Sort_Emp();
				break;
			case 7:	//清空数据
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