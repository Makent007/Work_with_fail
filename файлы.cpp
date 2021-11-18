#include<fstream>
#include<string>
#include<iostream>
#include<conio.h>

int main()
{
	std::ifstream dlya_chteniya; //  для чтения
	std::ofstream dlya_zapisi; //для записи
	std::string stroka, all_stroka; // создаем строки, одну и полностью текст
	dlya_zapisi.open("Text.txt"); // открываем файл для записи
	dlya_zapisi << "Work with fail.\n"; // записываем текст в файл
	dlya_zapisi.close(); // закрываем файл
	dlya_chteniya.open("Text.txt");// теперь открываем файл для чтения
	while (!dlya_chteniya.eof()) // пока не закончится файл
	{
		std::getline(dlya_chteniya, stroka);// считываем файл для чтения до конца строки, конец строки это enter
		all_stroka = all_stroka + stroka+'\n';//сохраняем считанную строку в новую строку
	}
	std::cout << all_stroka; // вывод всего текста на экран
	dlya_chteniya.close(); // закрываем файл
	//int num;
	std::string stroka2,all_stroka2;
	dlya_zapisi.open("Text2.txt"); // открыли новый файл
	
	while (_getch()!=27)// пока не нажмешь эскейп
	{
		//num = _getch(); // функция гетч	
		std::getline(std::cin, stroka2);//записываем с клавиатуры текст в строку
		dlya_zapisi << stroka2;// переносим текст в файл
		dlya_zapisi << "\n";// и переносим строку
	}
	dlya_zapisi.close();// закрываем файл

	std::ifstream input;//файл для чтения
	std::string str;//создаем строку
	std::cin >> str;//записываем в эту строку текст
	input.open(str);// по факту "Text2.txt" это текст в ковычках и поэтому мы можем ввести туда строку.
	if (input.is_open())//если введенная строка есть в этом файле то мы выведем на экран есть если нет то нету
	{
		std::cout << "est'";
	}
	else //                             ТО ЕСТЬ ЭТО ФУНКЦИЯ ПОИСКА ПО ФАЙЛУ
	{
		std::cout << "netu";
	}
}