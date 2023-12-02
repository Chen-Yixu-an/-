#include"Q_A_Manager.h"

Q_A_Manager::Q_A_Manager()
{

}

void Q_A_Manager::StoryMode()
{

}

void Q_A_Manager::UnLimitMode()
{

}

void Q_A_Manager::Command_Input()
{
	cout << "计算机答题系统 >> $ ";
}

void Q_A_Manager::Home_List()
{
	cout << "请选择模式(此系统涵盖c++,c等语言及计算机基础知识,题库会持续更新):" << endl;
	cout << "输入 Unlimit_Mode ：无限模式" << endl;
	cout << "输入 Story_Mode :关卡(剧情)模式" << endl;
	cout << "输入 Option :设置" << endl;
	cout << "输入 Exit :退出" << endl;
	cout << "输入 Other_Mode :其他模式" << endl;
}

void Q_A_Manager::Option_list()
{

}

void Q_A_Manager::Other_Mode_List()
{
	cout << "输入 Choose_Question_Mode :选关模式，输入后按下回车键，输入题目号码后答题。" << endl;
	cout << "前方还未开发......" << endl;
}

void Q_A_Manager::Save_UserName()
{

}

Q_A_Manager::~Q_A_Manager()
{

}
