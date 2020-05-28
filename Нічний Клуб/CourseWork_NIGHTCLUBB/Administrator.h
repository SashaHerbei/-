#pragma once
#include "Bar.h"
#include "DanceFloor.h"
class Administrator :  virtual public DanceFloor, virtual public Bar {
protected:
	string personalPassword;
public:
	Administrator();
	void setPass(string pass);
	string getPass();
	~Administrator();
};

