#include "DJ.h"

DJ::DJ() {}

void DJ::setNickName(string nickName) {
	this->nickName = nickName;
}

string DJ::getNickName() {
	return nickName;
}

void DJ::setGenre(string genre) {
	this->genre = genre;
}

string DJ::getGenre() {
	return genre;
}

void DJ::showDJ() {
	cout << "DJ: " << getNickName() << endl <<
		"Genre: " << getGenre() << endl;
}

DJ::~DJ() {}