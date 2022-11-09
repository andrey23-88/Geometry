#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMBUS
//#define PLUSMINUS
void main()
{
	setlocale(LC_ALL, "");
	int n; //количество звездочек
	cout << "Введите количество звездочек: "; cin >> n;
#ifdef SQUARE

	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)//этот цикл повторяет вывод звездочки на экрвн
			//и таким образом мы получаем строку из звездочек
		{
			cout << "* ";
		}
		cout << endl; //после вывода строки нужно перейти на новую строку
	}
#endif // SQUARE
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRI

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif
#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++)cout << "  ";
		for (int j = 0; j <= i;j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4


#ifdef RHOMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // RHOMBUS
#ifdef PLUSMINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ ": cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUSMINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			(i + j) % 2 == 0 ? cout<<char() : cout<<" ";
		}
		cout << endl;
	}
#define APPER_LEFT_ANGLE    (char)218
#define APPER_RIGHT_ANGLE   (char)191
#define LOWER_LEFT_ANGLE    (char)192
#define LOWER_RIGHT_ANGLE   (char)217
#define VERTICAL_LINE       (char)179
#define HORIZONTAL_LINE     (char)196
#define BLACK_BOX           (char)32
#define WHITE_BOX           (char)219

	void main()
	{
		int n;
		cout << "Введите размер фигуры: "; cin >> n;
		setlocale(LC_ALL, "C");
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				//cout << "* ";
				if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
				else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
				else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
				else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
				else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
				else if (j == 0 || j == n)cout << VERTICAL_LINE;
				else cout<<" ";
			}
			cout << endl;
		}

	}
}