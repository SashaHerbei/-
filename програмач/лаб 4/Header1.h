class CDice {
private:

	int dice1;
	int dice2;
	int dice3;
	int zagalne;

public:
	//����������� ���������� �������� ��������
	CDice(int zdice1 = 0, int zdice2 = 0, int zdice3 = 0, int zagalne0 = 0);

	//������
	int getDice1();
	int getDice2();
	int getDice3();
	int getZagalne();

	//������
	void setDice1(int zdice1);
	void setDice2(int zdice2);
	void SetDice3(int zdice3);
	void setZagalne(int zagalne0);

	// ����� �����, �� ������� �� ��������� �����
	void toss_dices();
	//����� �����, �� �������� �������� �-��� ���� ���� ���������� �������	
	void  info();

	void  nul();

};
