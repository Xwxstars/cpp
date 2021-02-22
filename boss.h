#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include <string>

class Boss : public Worker
{
public:
	Boss(int id, string name, int DepId);
	virtual void showInfo();
	virtual string getDepName();

};
