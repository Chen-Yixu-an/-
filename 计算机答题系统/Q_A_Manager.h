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
	void StoryMode();//����ģʽ
	void UnLimitMode();//����ģʽ
	void Command_Input();//ָ������ǰ׺����
	void Home_List();//���˵�
	void Option_list();//���ò˵�
	void Other_Mode_List();// ����ģʽ�˵�
	void Save_UserName();//�����û�����Save.txt�� 
	~Q_A_Manager();
};

