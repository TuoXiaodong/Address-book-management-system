//
// Created by Tuo Xiaodong on 2022/11/20.
//

#ifndef ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H
#define ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H
#define MAX_SIZE 1000 //�����������

#include<iostream>


using namespace std;

// ������ϵ�˽ṹ��
struct people {
    //����
    string name;
    //�Ա�
    string sex;
    //����
    int age;
    //��ϵ�绰
    string telephoneNumber;
    //��ͥסլ
    string address;
};

// ����ͨѶ¼�ṹ��
struct addressBook {
    // ��ϵ�˱��
    int id;
    // ��ϵ������
    people peopleArray[MAX_SIZE];
};

//�������躯��

//��ʾ���溯��
void showMenu();

// ���Ӻ���
void addPerson(addressBook *p);

// ��ʾ����
// ֻ����д ��const��ֹ�����
void showPerson(const addressBook *p);

// ���Һ���
int ifExit(addressBook *p,string name);

// ɾ������
void deletePerson(addressBook *p);

// ���Һ���
void findPerson(addressBook *p);

// �޸���ϵ��
void modifyPerson(addressBook *p);

// �޸ĵĽ�����ʾ����
void showSmallMenu();

// ���ͨѶ¼
void cleanAll(addressBook *p);


#endif //ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H

