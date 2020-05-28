#pragma once
#include "Human.h"
class DJ : virtual public Human {
protected:
	string nickName,
		genre;
public:
	DJ();
	void setNickName(string nickName);
	string getNickName();
	void setGenre(string genre);
	string getGenre();
	void showDJ();
	~DJ();
};

