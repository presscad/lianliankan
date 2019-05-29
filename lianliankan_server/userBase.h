/*
* Name: QinKuai
* Status: Finished
*/

#pragma once
#ifndef USERBASE_H
#define USERBASE_H
#include <string>
#include <list>
#include "user.h"

#include <iostream>

//���������ڷ���������ʱֱ�ӽ����ݿ��е��û�����
//��������ֱ�ӿ��Բ���
class UserBase {
public:
	//��֤ʵ��ֻ�ܱ�����һ��
	static UserBase* getUserBase();
	//ͨ���û��������������û�
	void addUser(std::string, std::string);
	//ֱ�������û�����
	void addUser(User& user);

	//��ѯ�û�
	User* findUser(std::string);
	User* findUser(std::string, std::string);

	//for test
	void showAll();
private:
	UserBase();
	//ʵ�ֵ�ʵ��
	static UserBase* userBaseInstance;
	//��ʵ����ά��һ���û��б�
	std::list<User> users;
};

#endif // !USERBASE_H