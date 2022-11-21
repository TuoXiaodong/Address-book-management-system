//
// Created by Tuo Xiaodong on 2022/11/20.
//

#include "mycrud.h"

//������溯��
//���溯����ʼ
void showMenu(){
    //������ʾ
    cout<<"***��ӭʹ��ͨѶ¼����ϵͳ***"<<endl;
    cout<<"******1.�����ϵ��********"<<endl;
    cout<<"******2.��ʾ��ϵ��********"<<endl;
    cout<<"******3.ɾ����ϵ��********"<<endl;
    cout<<"******4.������ϵ��********"<<endl;
    cout<<"******5.�޸���ϵ��********"<<endl;
    cout<<"******6.�����ϵ��********"<<endl;
    cout<<"******0.�˳�ͨѶ¼********"<<endl;
    cout<<"****************************"<<endl;
}
//���溯������

//����crud����

//���Ӻ���
//���Ӻ�����ʼ
void addPerson(addressBook *p) {
    cout<<"��ǰϵͳ����Ϊ��"<<MAX_SIZE - p->id<<endl;
    // ѯ���������
    int num=0;
    cout << "��Ҫ��ӵ�����Ϊ��";
    cin >> num;
    // �ж��û������Ƿ���������� 1000
    if (num > 1000 || num + (p->id) > 1000) {
        cout << "���������Ѿ���������������������������" << endl;
    } else if(num<=1000 && num>0  && num+(p->id)<=1000){
        for (int i = 0; i < num; i++) {
            // ָ�븳ֵ����
            cout<<"\n������";
            cin >> p->peopleArray[p->id].name;
            cout<<"�Ա�";
            cin >> p->peopleArray[p->id].sex;
            // ֻ��������Ҫ׼ȷ���ж�
            cout<<"���䣺";
            while(true){
                cin >> p->peopleArray[p->id].age;
                if(p->peopleArray[p->id].age<0||p->peopleArray[p->id].age>150){
                    cout<<"����������������䣺";
                }else{
                    break;
                }
            }
            cout<<"��ϵ�绰��";
            cin >> p->peopleArray[p->id].telephoneNumber;
            cout<<"��ͥסַ��";
            cin >> p->peopleArray[p->id].address;
            (p->id) += 1; // ÿ��һ���� �ͼ�¼��ǰͨѶ¼������
        }
        cout << "��ӳɹ���"<<endl;
    }else{
        cout<<"������������������������"<<endl;
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ��
}
//���Ӻ�������


//��ʾ����
//��ʾ������ʼ
void showPerson(const addressBook *p) {
    //���������ж� Ҫ����ͨѶ¼�Ƿ�����
    if (p->id == 0) {
        cout << "���ͨѶ¼��û�����ޣ�" << endl;
    } else {
        cout << "���\t" << "����\t" << "�Ա�\t" << "����\t" << "�绰����\t" << "��ͥסַ" << endl;
        for (int i = 0; i < p->id; i++) {
            cout << i + 1 << "\t" << p->peopleArray[i].name << "\t" << p->peopleArray[i].sex << "\t"
                 << p->peopleArray[i].age << "\t"
                 << p->peopleArray[i].telephoneNumber << "\t" << p->peopleArray[i].address << endl;
        }
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ��
}
// ��ʾ��������

// ɾ�������ҡ��޸ĺ����ж��漰��һ������
// ��������һ�����Һ���
// ���ҵ� �����±�
// ��δ�ҵ� ����-1
int ifExit(addressBook *p,string name){
    for(int i = 0;i<p->id;i++){
        //�ж��Ƿ����
        if(p->peopleArray[i].name == name){
            //�ҵ� �����±�
            return i;
        }
    }
    // ������������û�ҵ� ����-1
    return -1;
}

//ɾ������
//ɾ��������ʼ
void deletePerson(addressBook *p){
    // ѯ�ʻ�ȡ����
    string name;
    cout<<"����������Ҫɾ�����ˣ�";
    cin>>name;
    int result = ifExit(p,name);
    if(result == -1){
        cout<<"���޴���"<<endl;
    }else{
        //��������
        int temp = p->id;
        for(int i = result;i<temp;i++){
            p->peopleArray[i]=p->peopleArray[i+1];
        }
        (p->id)--;
        cout<<"ɾ�����"<<endl;
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ��
}
//ɾ����������

//���Һ�����ʼ
void findPerson(addressBook *p){
    // ѯ�ʻ�ȡ����
    string name;
    cout<<"����������Ҫ���ҵ��ˣ�";
    cin>>name;
    int result = ifExit(p,name);
    if(result == -1){
        cout<<"���޴���"<<endl;
    }else{
        cout<<"������";
        cout<<p->peopleArray[result].name;
        cout<<"\t�Ա�";
        cout<<p->peopleArray[result].sex;
        cout<<"\t���䣺";
        cout<<p->peopleArray[result].age;
        cout<<"\t��ϵ�绰��";
        cout<<p->peopleArray[result].telephoneNumber;
        cout<<"\t��ͥ��ַ��";
        cout<<p->peopleArray[result].address<<endl;
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ��
}

// �޸ĺ����Ŀ�ʼ
void showSmallMenu(){
    system("cls");
    cout<<"******1.�޸�����********"<<endl;
    cout<<"******2.�޸��Ա�********"<<endl;
    cout<<"******3.�޸�����********"<<endl;
    cout<<"******4.�޸ĵ绰********"<<endl;
    cout<<"******5.�޸�סַ********"<<endl;
    cout<<"******0.�˳��޸�********"<<endl;

}
void modifyPerson(addressBook *p){
    // ѯ�ʻ�ȡ����
    string name;
    cout<<"����������Ҫ�޸ĵ��ˣ�";
    cin>>name;
    int result = ifExit(p,name);
    if(result == -1){
        cout<<"���޴���"<<endl;
    }else{
        int select_modify = 0;
        int num = 1;
        while (num) {
            showSmallMenu();
            cout<<"���������ѡ��";
            cin>>select_modify;
            switch (select_modify) {
                case 1:
                    cout << "�������µ�������";
                    cin >> p->peopleArray[result].name;
                    break;
                case 2:
                    cout << "�������µ��Ա�";
                    cin >> p->peopleArray[result].sex;
                    break;
                case 3:
                    cout << "�������µ����䣺";
                    cin >> p->peopleArray[result].age;
                    break;
                case 4:
                    cout << "�������µĵ绰��";
                    cin >> p->peopleArray[result].telephoneNumber;
                    break;
                case 5:
                    cout << "�������µ�סַ��";
                    cin >> p->peopleArray[result].address;
                    break;
                case 0:
                    num--;
                    cout<<"�˳��ɹ�"<<endl;
                    break;
                default:
                    cout<<"�����������������룺";
                    break;
            }
        }
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ��
}
// �޸ĺ�������

// ��պ�����ʼ
void cleanAll(addressBook *p){
    cout<<"�Ƿ���գ���y/n��:";
    char select_clean;
    cin >> select_clean;
    while(true) {
        if (select_clean == 'y' || select_clean == 'Y') {
            p->id = 0;
            cout<<"��ճɹ�"<<endl;
            break;
        } else if (select_clean == 'n' || select_clean == 'N') {
            break;
        } else{
            cin>>select_clean;
        }
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ��
}
// ��պ�������