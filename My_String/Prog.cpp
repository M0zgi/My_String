//Задание 3.
//Разработать класс String, который в дальнейшем будет
//использоваться для работы со строками.



/************************************************************
 *                          thx                             *
 *                      #SimpleCode                         *
 * https://www.youtube.com/channel/UCtLKO1Cb2GVNrbU7Fi0pM0w *
 ************************************************************/

#include"String.h"

 //Help Lessons #SimpleCode + Доработано Yarosh Oleksandr

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	MyString str("Привет! ");
	MyString str2("Ярош Александр");

	str.Print();	

	MyString resultat = str + str2;

	resultat.Print();

	cout << endl;


	//Другой метод не знаю как сделать.

	char buff[80];

	cout << "Введите первую строку: ";
	cin.getline(buff, 80);
	str = buff;	
	
	cout << "Введите вторую строку: ";
	cin.getline(buff, 80);
	str2 = buff;
	cout << endl;
	
	resultat = str + str2;

	resultat.Print();

	system("pause");
}