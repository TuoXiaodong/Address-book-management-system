//
// Created by Tuo Xiaodong on 2022/11/20.
//

#include "mycrud.h"

//定义界面函数
//界面函数开始
void showMenu(){
    //界面显示
    cout<<"***欢迎使用通讯录管理系统***"<<endl;
    cout<<"******1.添加联系人********"<<endl;
    cout<<"******2.显示联系人********"<<endl;
    cout<<"******3.删除联系人********"<<endl;
    cout<<"******4.查找联系人********"<<endl;
    cout<<"******5.修改联系人********"<<endl;
    cout<<"******6.清空联系人********"<<endl;
    cout<<"******0.退出通讯录********"<<endl;
    cout<<"****************************"<<endl;
}
//界面函数结束

//定义crud函数

//增加函数
//增加函数开始
void addPerson(addressBook *p) {
    cout<<"当前系统容量为："<<MAX_SIZE - p->id<<endl;
    // 询问添加人数
    int num=0;
    cout << "你要添加的人数为：";
    cin >> num;
    // 判断用户输入是否大于总容量 1000
    if (num > 1000 || num + (p->id) > 1000) {
        cout << "你的添加量已经超出容量，请检查容量后再输入" << endl;
    } else if(num<=1000 && num>0  && num+(p->id)<=1000){
        for (int i = 0; i < num; i++) {
            // 指针赋值操作
            cout<<"\n姓名：";
            cin >> p->peopleArray[p->id].name;
            cout<<"性别：";
            cin >> p->peopleArray[p->id].sex;
            // 只有年龄需要准确的判断
            cout<<"年龄：";
            while(true){
                cin >> p->peopleArray[p->id].age;
                if(p->peopleArray[p->id].age<0||p->peopleArray[p->id].age>150){
                    cout<<"请重新输入你的年龄：";
                }else{
                    break;
                }
            }
            cout<<"联系电话：";
            cin >> p->peopleArray[p->id].telephoneNumber;
            cout<<"家庭住址：";
            cin >> p->peopleArray[p->id].address;
            (p->id) += 1; // 每加一个人 就记录当前通讯录的人数
        }
        cout << "添加成功！"<<endl;
    }else{
        cout<<"你的输入有误，请检查后重新输入"<<endl;
    }
    system("pause"); //暂停指令
    system("cls"); //清屏指令
}
//增加函数结束


//显示函数
//显示函数开始
void showPerson(const addressBook *p) {
    //首先做个判断 要明白通讯录是否有人
    if (p->id == 0) {
        cout << "你的通讯录还没有人噢！" << endl;
    } else {
        cout << "编号\t" << "姓名\t" << "性别\t" << "年龄\t" << "电话号码\t" << "家庭住址" << endl;
        for (int i = 0; i < p->id; i++) {
            cout << i + 1 << "\t" << p->peopleArray[i].name << "\t" << p->peopleArray[i].sex << "\t"
                 << p->peopleArray[i].age << "\t"
                 << p->peopleArray[i].telephoneNumber << "\t" << p->peopleArray[i].address << endl;
        }
    }
    system("pause"); //暂停指令
    system("cls"); //清屏指令
}
// 显示函数结束

// 删除、查找、修改函数中都涉及到一个查找
// 单独定义一个查找函数
// 若找到 返回下标
// 若未找到 返回-1
int ifExit(addressBook *p,string name){
    for(int i = 0;i<p->id;i++){
        //判断是否相等
        if(p->peopleArray[i].name == name){
            //找到 返回下标
            return i;
        }
    }
    // 遍历完数组若没找到 返回-1
    return -1;
}

//删除函数
//删除函数开始
void deletePerson(addressBook *p){
    // 询问获取姓名
    string name;
    cout<<"请输入你想要删除的人：";
    cin>>name;
    int result = ifExit(p,name);
    if(result == -1){
        cout<<"查无此人"<<endl;
    }else{
        //遍历覆盖
        int temp = p->id;
        for(int i = result;i<temp;i++){
            p->peopleArray[i]=p->peopleArray[i+1];
        }
        (p->id)--;
        cout<<"删除完成"<<endl;
    }
    system("pause"); //暂停指令
    system("cls"); //清屏指令
}
//删除函数结束

//查找函数开始
void findPerson(addressBook *p){
    // 询问获取姓名
    string name;
    cout<<"请输入你想要查找的人：";
    cin>>name;
    int result = ifExit(p,name);
    if(result == -1){
        cout<<"查无此人"<<endl;
    }else{
        cout<<"姓名：";
        cout<<p->peopleArray[result].name;
        cout<<"\t性别：";
        cout<<p->peopleArray[result].sex;
        cout<<"\t年龄：";
        cout<<p->peopleArray[result].age;
        cout<<"\t联系电话：";
        cout<<p->peopleArray[result].telephoneNumber;
        cout<<"\t家庭地址：";
        cout<<p->peopleArray[result].address<<endl;
    }
    system("pause"); //暂停指令
    system("cls"); //清屏指令
}

// 修改函数的开始
void showSmallMenu(){
    system("cls");
    cout<<"******1.修改姓名********"<<endl;
    cout<<"******2.修改性别********"<<endl;
    cout<<"******3.修改年龄********"<<endl;
    cout<<"******4.修改电话********"<<endl;
    cout<<"******5.修改住址********"<<endl;
    cout<<"******0.退出修改********"<<endl;

}
void modifyPerson(addressBook *p){
    // 询问获取姓名
    string name;
    cout<<"请输入你想要修改的人：";
    cin>>name;
    int result = ifExit(p,name);
    if(result == -1){
        cout<<"查无此人"<<endl;
    }else{
        int select_modify = 0;
        int num = 1;
        while (num) {
            showSmallMenu();
            cout<<"请输入你的选择：";
            cin>>select_modify;
            switch (select_modify) {
                case 1:
                    cout << "请输入新的姓名：";
                    cin >> p->peopleArray[result].name;
                    break;
                case 2:
                    cout << "请输入新的性别：";
                    cin >> p->peopleArray[result].sex;
                    break;
                case 3:
                    cout << "请输入新的年龄：";
                    cin >> p->peopleArray[result].age;
                    break;
                case 4:
                    cout << "请输入新的电话：";
                    cin >> p->peopleArray[result].telephoneNumber;
                    break;
                case 5:
                    cout << "请输入新的住址：";
                    cin >> p->peopleArray[result].address;
                    break;
                case 0:
                    num--;
                    cout<<"退出成功"<<endl;
                    break;
                default:
                    cout<<"输入有误！请重新输入：";
                    break;
            }
        }
    }
    system("pause"); //暂停指令
    system("cls"); //清屏指令
}
// 修改函数结束

// 清空函数开始
void cleanAll(addressBook *p){
    cout<<"是否清空？（y/n）:";
    char select_clean;
    cin >> select_clean;
    while(true) {
        if (select_clean == 'y' || select_clean == 'Y') {
            p->id = 0;
            cout<<"清空成功"<<endl;
            break;
        } else if (select_clean == 'n' || select_clean == 'N') {
            break;
        } else{
            cin>>select_clean;
        }
    }
    system("pause"); //暂停指令
    system("cls"); //清屏指令
}
// 清空函数结束