#ifndef matrix_h__ 
#define matrix_h__ 
#include <iostream> 
#include <iomanip> 
using namespace std;
template<class T>
class Matrix
{
private:
	T** m_iArr;
	int size_row;
	int size_col;
public:
	Matrix();
	~Matrix();
	void init_matrix();
	void res();
};
template <class T>
Matrix<T>::Matrix()
{
	size_col = 0;
	size_row = 0;
	m_iArr = new T * [size_row];
	for (int i = 0; i < size_row; i++)
	{
		m_iArr[i] = new T[size_col];
		for (int j = 0; j < size_col; j++)
		{
			m_iArr[i][j] = 0;
		}
	}
}
template<class T>
Matrix<T>::~Matrix()
{
	for (int j = 0; j < size_row; j++)
	{
		delete m_iArr[j];
	}
	delete[] m_iArr;
}

template<class T>
void Matrix<T>::init_matrix()
{
	//видалення існуючої
	if (&m_iArr != 0)
	{
		for (int j = 0; j < size_row; j++)
		{
			delete m_iArr[j];
		}
		delete[] m_iArr;
	}

	cout << "Введiть Кiлькiсть Рядкiв:";
	cin >> size_row;
	cout << "Введiть Кiлькiсть Стовпцiв:";
	cin >> size_col;

	m_iArr = new T * [size_row];

	for (int i = 0; i < size_row; i++)
	{
		m_iArr[i] = new T[size_col];
		for (int j = 0; j < size_col; j++)
		{
			m_iArr[i][j] = 0;

		}
	}

	cout << "Введiть Вашу Матрицю:" << endl;
	for (int i = 0; i < size_row; i++)
		for (int j = 0; j < size_col; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "]" << "=";
			cin >> m_iArr[i][j];
		}

}


template<class T>
void Matrix<T>::res()
{
	int res = 0;
	int i = 0, j = 0;
	bool tr = true;
	cout << "Ваша Матриця:\n";
	for (i = 0; i < size_row; i++)
	{
		for (j = 0; j < size_col; j++)
		{
			cout << m_iArr[i][j] << "     ";
		}
		cout << endl;
	}
	for (i = 0; i < size_row; i++)
	{
		for (j = 0; j < size_col - 1; j++)
		{
			if (m_iArr[i][j] >= m_iArr[i][j + 1])
				tr = false;
		}
		if (tr == true)
			res++;
		tr = true;
	}
	cout << "Рядкiв По Зростанню: " << res << endl;
}
#endif 
