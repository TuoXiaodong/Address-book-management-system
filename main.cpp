//
// Created by Tuo Xiaodong on 2022/11/19.
//
#include<iostream>
#include"mycrud.h" //�Զ���ͷ�ļ� �����к������� �� �ṹ�岿��

using namespace std;

int main() {

    //ʵ�����ṹ��
    addressBook myAddressBook;

    //�û���ѡ��
    int select = 0;
    //��� �жϺ�ʱ�˳�ѭ��
    bool flag = true;
    while (flag) {
        //������ʾ
        showMenu();
        cin >> select; //�����û���ѡ��
        switch (select) {
            // ����ַ���� �ȴ�ֵ���ø���Լ�ڴ�ռ�
            case 1:
                addPerson(&myAddressBook); // �����ϵ��
                break;
            case 2:
                showPerson(&myAddressBook); // ��ʾ��ϵ��
                break;
            case 3:
                deletePerson(&myAddressBook); // ɾ����ϵ��
                break;
            case 4:
                findPerson(&myAddressBook); // ������ϵ��
                break;
            case 5:
                modifyPerson(&myAddressBook); // �޸���ϵ��
                break;
            case 6:
                cleanAll(&myAddressBook); // ���ͨѶ¼
                break;
            case 0:
                flag = false;
                cout << "��ӭ�´�ʹ�ã�" << endl; // �˳�ϵͳ
                system("pause");
                break;
            default:
                cout << "������������Ƿ���ȷ" << endl;
                break;
        }
    }
    return 0;
}