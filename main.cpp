//
// Created by Tuo Xiaodong on 2022/11/19.
//
#include<iostream>
#include"mycrud.h" //�Զ���ͷ�ļ� ������к������� �� �ṹ�岿��

using namespace std;
#define MAX_SIZE 1000

// ������ϵ�˽ṹ��
//struct people {
//    //����
//    int name;
//    //�Ա�
//    string sex;
//    //����
//    int age;
//    //��ϵ�绰
//    string teleNumber;
//    //��ͥסլ
//    string address;
//};

//// ����ͨѶ¼�ṹ��
//struct addressBook {
//    // ��ϵ�˱��
//    int id;
//    // ��ϵ������
//    people peopleArray[MAX_SIZE];
//};

int main(){

    //ʵ�����ṹ��
    addressBook myAddressBook;

    //�û���ѡ��
    int select = 0;
    //���
    bool flag = true;
    while(flag){
        //������ʾ
        cout<<"***��ӭʹ��ͨѶ¼����ϵͳ***"<<endl;
        cout<<"******1.�����ϵ��********"<<endl;
        cout<<"******2.��ʾ��ϵ��********"<<endl;
        cout<<"******3.ɾ����ϵ��********"<<endl;
        cout<<"******4.������ϵ��********"<<endl;
        cout<<"******5.�޸���ϵ��********"<<endl;
        cout<<"******6.�����ϵ��********"<<endl;
        cout<<"******7.�˳�ͨѶ¼********"<<endl;
        cout<<"****************************"<<endl;
        cin>>select; //�����û���ѡ��
        switch(select){
            case 1:
                addNumber(&myAddressBook);
                // ��Ӻ���
                // ����ַ���� �ȴ�ֵ���ø���Լ�ڴ�ռ�
                break;
            case 2:
                showAll(&myAddressBook);
                // ��ʾ����
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
                cout<<"������������Ƿ���ȷ"<<endl;
                break;
        }
    }
    return 0;
}