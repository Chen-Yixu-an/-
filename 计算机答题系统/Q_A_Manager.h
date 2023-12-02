#pragma once
#include<iostream>
#include<fstream>
#include<windows.h>
#include<cstring>
#include<string>
#include<istream>
using namespace std;
#define SAVE_FILE Save.txt

class Q_A_Manager
{
public:
	Q_A_Manager();
	void StoryMode();//故事模式
	void UnLimitMode();//无限模式
	void Command_Input();//指令输入前缀画面
	void Home_List();//主菜单
	void Option_list();//设置菜单
	void Other_Mode_List();// 其他模式菜单
	void Save_UserName();//保存用户名到Save.txt中 
	~Q_A_Manager();
};

