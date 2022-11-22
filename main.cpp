//
// Created by Tuo Xiaodong on 2022/11/19.
//
#include<iostream>
#include"mycrud.h" //自定义头文件 声明有函数部分 和 结构体部分

using namespace std;

int main() {

    //实例化结构体
    addressBook myAddressBook;

    //用户的选择
    int select = 0;
    //标记 判断何时退出循环
    bool flag = true;
    while (flag) {
        //界面显示
        showMenu();
        cin >> select; //输入用户的选择
        switch (select) {
            // 传地址调用 比传值调用更节约内存空间
            case 1:
                addPerson(&myAddressBook); // 添加联系人
                break;
            case 2:
                showPerson(&myAddressBook); // 显示联系人
                break;
            case 3:
                deletePerson(&myAddressBook); // 删除联系人
                break;
            case 4:
                findPerson(&myAddressBook); // 查找联系人
                break;
            case 5:
                modifyPerson(&myAddressBook); // 修改联系人
                break;
            case 6:
                cleanAll(&myAddressBook); // 清空通讯录
                break;
            case 0:
                flag = false;
                cout << "欢迎下次使用！" << endl; // 退出系统
                system("pause");
                break;
            default:
                cout << "请检查你的输入是否正确" << endl;
                break;
        }
    }
    return 0;
}