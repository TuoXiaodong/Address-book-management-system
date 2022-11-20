//
// Created by Tuo Xiaodong on 2022/11/20.
//

#ifndef ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H
#define ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H
#define MAX_SIZE 1000 //设置最大人数

#include<iostream>


using namespace std;

// 定义联系人结构体
struct people {
    //姓名
    string name;
    //性别
    string sex;
    //年龄
    int age;
    //联系电话
    string telephoneNumber;
    //家庭住宅
    string address;
};

// 定义通讯录结构体
struct addressBook {
    // 联系人编号
    int id;
    // 联系人数组
    people peopleArray[MAX_SIZE];
};

//声明所需函数

//显示界面函数
void showMenu();

// 增加函数
void addPerson(addressBook *p);

// 显示函数
// 只读不写 加const防止误操作
void showPerson(const addressBook *p);

// 查找函数
int ifExit(addressBook *p,string name);

// 删除函数
void deletePerson(addressBook *p);

// 查找函数
void findPerson(addressBook *p);

// 修改联系人
void modifyPerson(addressBook *p);

// 修改的界面显示函数
void showSmallMenu();

// 清空通讯录
void cleanAll(addressBook *p);


#endif //ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H

