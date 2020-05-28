#include "Administrator.h"

Administrator::Administrator() {}

void Administrator::setPass(string pass) {
	this->personalPassword = pass;
}

string Administrator::getPass() {
	return personalPassword;
}

Administrator::~Administrator() {}
