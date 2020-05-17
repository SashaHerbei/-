# include <iostream>
class CDice {

public:
	int dice1;
	int dice2;
	int dice3;
	int tosses; // властивість об'єкта, що відповідає за кількіст ьзроблених підкидань костей 
	int porivn; // властивість об'єкта, що викорстовується для порівняння
	           //конструктор встановлює початкові значення
	CDice(int zdice1 = 0, int zdice2 = 0, int zdice3 = 0,  int tosses0 = 0,int porivn0=4);

	//гетери
	int getDice1();
	int getDice2();
	int getDice3();
	int getTosses();
	int getPorivn();
	
	//сетери
	void setDice1(int zdice1);
	void setDice2(int zdice2);
	void SetDice3(int zdice3);
	void setPorivn(int porivn0);
	void setTosses(int tosses0);

	// метод класу, що відповідає за підкидання монет
	void toss_dices();
	//метод класу, що виводить загальну к-сть очків після останнього кидання	

	//перевантаження операторів ++ += < > = вводу/виводу і == (не за умовою, в якості допоміжного)

	CDice& operator++();
	bool operator > (const CDice& other);
	bool operator < (const CDice& other);
    friend CDice& operator += (CDice& dices, CDice& other);
    bool operator == (const CDice& other);
	friend std::ostream& operator << (std::ostream& output,  CDice& obj);
	friend std::istream& operator>> (std::istream& input, CDice& obj);
	CDice& operator=(const CDice& dices);
};