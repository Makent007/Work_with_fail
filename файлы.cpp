#include<fstream>
#include<string>
#include<iostream>
#include<conio.h>

int main()
{
	std::ifstream dlya_chteniya; //  ��� ������
	std::ofstream dlya_zapisi; //��� ������
	std::string stroka, all_stroka; // ������� ������, ���� � ��������� �����
	dlya_zapisi.open("Text.txt"); // ��������� ���� ��� ������
	dlya_zapisi << "Work with fail.\n"; // ���������� ����� � ����
	dlya_zapisi.close(); // ��������� ����
	dlya_chteniya.open("Text.txt");// ������ ��������� ���� ��� ������
	while (!dlya_chteniya.eof()) // ���� �� ���������� ����
	{
		std::getline(dlya_chteniya, stroka);// ��������� ���� ��� ������ �� ����� ������, ����� ������ ��� enter
		all_stroka = all_stroka + stroka+'\n';//��������� ��������� ������ � ����� ������
	}
	std::cout << all_stroka; // ����� ����� ������ �� �����
	dlya_chteniya.close(); // ��������� ����
	//int num;
	std::string stroka2,all_stroka2;
	dlya_zapisi.open("Text2.txt"); // ������� ����� ����
	
	while (_getch()!=27)// ���� �� ������� ������
	{
		//num = _getch(); // ������� ����	
		std::getline(std::cin, stroka2);//���������� � ���������� ����� � ������
		dlya_zapisi << stroka2;// ��������� ����� � ����
		dlya_zapisi << "\n";// � ��������� ������
	}
	dlya_zapisi.close();// ��������� ����

	std::ifstream input;//���� ��� ������
	std::string str;//������� ������
	std::cin >> str;//���������� � ��� ������ �����
	input.open(str);// �� ����� "Text2.txt" ��� ����� � �������� � ������� �� ����� ������ ���� ������.
	if (input.is_open())//���� ��������� ������ ���� � ���� ����� �� �� ������� �� ����� ���� ���� ��� �� ����
	{
		std::cout << "est'";
	}
	else //                             �� ���� ��� ������� ������ �� �����
	{
		std::cout << "netu";
	}
}