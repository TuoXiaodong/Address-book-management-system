//
// Created by Tuoxd on 2022/11/20.
//

#ifndef ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H
#define ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H
#define MAX_SIZE 1000

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
    string teleNumber;
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

// 增加函数
void addNumber(addressBook *p);

// 显示函数
// 只读不写 加const防止误操作
void showAll(const addressBook *p);


#endif //ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H

