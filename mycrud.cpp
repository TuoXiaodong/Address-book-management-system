//
// Created by Tuoxd on 2022/11/20.
//

#include "mycrud.h"

//����crud����

//���Ӻ���
//���Ӻ�����ʼ
void addNumber(addressBook *p) {
    cout<<"��ǰϵͳ����Ϊ��"<<MAX_SIZE - p->id<<endl;
    // ѯ���������
    int num;
    cout << "��Ҫ��ӵ�����Ϊ��";
    cin >> num;
    // �ж��û������Ƿ���������� 1000
    if (num > 1000 || num + (p->id) > 1000) {
        cout << "���������Ѿ���������������������������" << endl;
    } else {
        for (int i = 0; i < num; i++) {
            (p->id) += 1; // ÿ��һ���� �ͼ�¼��ǰͨѶ¼������
            cout << "\n�����ΰ��������Ա����䡢��ϵ�绰����ͥסַ��ӣ�" << endl;
            // ָ�븳ֵ����
            cin >> p->peopleArray[i].name >> p->peopleArray[i].sex >> p->peopleArray[i].age
                >> p->peopleArray[i].teleNumber
                >> p->peopleArray[i].address;
        }
        cout << "��ӳɹ���";
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ��
}
//���Ӻ�������


//��ʾ����
//��ʾ������ʼ
void showAll(const addressBook *p) {
    //���������ж� Ҫ����ͨѶ¼�Ƿ�����
    if (p->id == 0) {
        cout << "���ͨѶ¼��û�����ޣ�" << endl;
    } else {
        cout << "���\t" << "����\t" << "�Ա�\t" << "����\t" << "�绰����\t" << "��ͥסַ" << endl;
        for (int i = 0; i < p->id; i++) {
            cout << i + 1 << "\t" << p->peopleArray[i].name << "\t" << p->peopleArray[i].sex << "\t"
                 << p->peopleArray[i].age << "\t"
                 << p->peopleArray[i].teleNumber << "\t" << p->peopleArray[i].address << endl;
        }
        system("pause"); //��ָͣ��
        system("cls"); //����ָ��
    }
}
// ��ʾ��������
