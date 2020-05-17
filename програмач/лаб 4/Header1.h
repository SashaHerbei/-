class CDice {
private:

	int dice1;
	int dice2;
	int dice3;
	int zagalne;

public:
	//конструктор встановлює початкові значення
	CDice(int zdice1 = 0, int zdice2 = 0, int zdice3 = 0, int zagalne0 = 0);

	//гетери
	int getDice1();
	int getDice2();
	int getDice3();
	int getZagalne();

	//сетери
	void setDice1(int zdice1);
	void setDice2(int zdice2);
	void SetDice3(int zdice3);
	void setZagalne(int zagalne0);

	// метод класу, що відповідає за підкидання монет
	void toss_dices();
	//метод класу, що виводить загальну к-сть очків після останнього кидання	
	void  info();

	void  nul();

};
