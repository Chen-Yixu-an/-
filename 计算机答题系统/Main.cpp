/*
�����/����� ����ϵͳ
IDE:Visual Studio 2017
����:ChenYixuan
version:1.0.0
*/
#include<iostream>
#include"Q_A_Manager.h"
using namespace std;

int main()
{
	Q_A_Manager q_a;
	string flag;
	string UserName = " ";
	cout << "�û���(�������ո�):";
	getline(cin, UserName);
	q_a.Home_List();
	q_a.Command_Input();
	getline(cin, flag);
	Y_N:
	if (flag == "Unlimit_Mode") 
	{

	}
	else if (flag == "Story_Mode")
	{

	}
	else if (flag == "Exit")
	{

	}
	else if (flag == "Option")
	{

	}
	else if (flag == "Other_Mode")
	{

	}
	else
	{
		cout << "�Ƿ�����/���������������!���������롣" << endl;
		Sleep(2000);
		system("cls");
		goto Y_N;
	}
	return 0;
}