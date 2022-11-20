//
// Created by Tuo Xiaodong on 2022/11/19.
//
#include<iostream>
#include"mycrud.h" //自定义头文件 添加所有函数部分 和 结构体部分

using namespace std;
#define MAX_SIZE 1000

// 定义联系人结构体
//struct people {
//    //姓名
//    int name;
//    //性别
//    string sex;
//    //年龄
//    int age;
//    //联系电话
//    string teleNumber;
//    //家庭住宅
//    string address;
//};

//// 定义通讯录结构体
//struct addressBook {
//    // 联系人编号
//    int id;
//    // 联系人数组
//    people peopleArray[MAX_SIZE];
//};

int main(){

    //实例化结构体
    addressBook myAddressBook;

    //用户的选择
    int select = 0;
    //标记
    bool flag = true;
    while(flag){
        //界面显示
        cout<<"***欢迎使用通讯录管理系统***"<<endl;
        cout<<"******1.添加联系人********"<<endl;
        cout<<"******2.显示联系人********"<<endl;
        cout<<"******3.删除联系人********"<<endl;
        cout<<"******4.查找联系人********"<<endl;
        cout<<"******5.修改联系人********"<<endl;
        cout<<"******6.清空联系人********"<<endl;
        cout<<"******7.退出通讯录********"<<endl;
        cout<<"****************************"<<endl;
        cin>>select; //输入用户的选择
        switch(select){
            case 1:
                addNumber(&myAddressBook);
                // 添加函数
                // 传地址调用 比传值调用更节约内存空间
                break;
            case 2:
                showAll(&myAddressBook);
                // 显示函数
                break;
            case 3:
//                addNumber();
                break;
            case 4:
//                addNumber();
                break;
            case 5:
//                addNumber();
                break;
            case 6:
//                addNumber();
                break;
            case 7:
                flag = false;
                break;
            default:
                cout<<"请检查你的输入是否正确"<<endl;
                break;
        }
    }
    return 0;
}