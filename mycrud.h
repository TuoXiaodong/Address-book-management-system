//
// Created by Tuoxd on 2022/11/20.
//

#ifndef ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H
#define ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H
#define MAX_SIZE 1000

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
    string teleNumber;
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

// ���Ӻ���
void addNumber(addressBook *p);

// ��ʾ����
// ֻ����д ��const��ֹ�����
void showAll(const addressBook *p);


#endif //ADDRESS_BOOK_MANAGEMENT_SYSTEM_MYCRUD_H

