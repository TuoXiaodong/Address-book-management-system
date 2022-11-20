//
// Created by Tuoxd on 2022/11/20.
//

#include "mycrud.h"

//定义crud函数

//增加函数
//增加函数开始
void addNumber(addressBook *p) {
    // 询问添加人数
    int num;
    cout << "你要添加的人数为：";
    cin >> num;
    for (int i = 0; i < num; i++) {
        (p->id) += 1; // 每加一个人 就记录当前通讯录的人数
        cout << "\n请依次按姓名、性别、年龄、联系电话、家庭住址添加：" << endl;
        // 指针赋值操作
        cin >> p->peopleArray[i].name >> p->peopleArray[i].sex >> p->peopleArray[i].age >> p->peopleArray[i].teleNumber
            >> p->peopleArray[i].address;
    }
    cout << "添加成功！";
    system("pause"); //暂停指令
    system("cls"); //清屏指令
}
//增加函数结束


//显示函数
//显示函数开始
void showAll(const addressBook *p) {
    //首先做个判断 要明白通讯录是否有人
    if (p->id == 0) {
        cout << "你的通讯录还没有人噢！" << endl;
    }else{
        cout << "编号\t" << "姓名\t" << "性别\t" << "年龄\t" << "电话号码\t" << "家庭住址" << endl;
        for (int i = 0; i < p->id; i++) {
            cout << i + 1 << "\t" << p->peopleArray[i].name << "\t" << p->peopleArray[i].sex << "\t"
                 << p->peopleArray[i].age << "\t"
                 << p->peopleArray[i].teleNumber << "\t" << p->peopleArray[i].address << endl;
        }
        system("pause"); //暂停指令
        system("cls"); //清屏指令
    }
}
// 显示函数结束
