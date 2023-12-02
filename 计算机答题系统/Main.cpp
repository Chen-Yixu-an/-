/*
计算机/编程题 答题系统
IDE:Visual Studio 2017
作者:ChenYixuan
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
	cout << "用户名(不包含空格):";
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
		cout << "非法输入/您输入的数据有误!请重新输入。" << endl;
		Sleep(2000);
		system("cls");
		goto Y_N;
	}
	return 0;
}