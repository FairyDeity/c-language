//#define MAX 1000
#define DEFAULT_SZ 3
#define MAX_NAME  20
#define MAX_SEX  5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int  age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
//ͨѶ¼����
typedef struct Contact
{
	struct PeoInfo *data;
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼������������ж�ʲôʱ������
}Contact;
//��������
void InitContact(struct Contact *ps);
//��ʼ��ͨѶ¼
void AddContact(struct Contact* ps);
//����һ����Ϣ��ͨѶ¼
void ShowContact(const struct Contact* ps);
//��ӡͨѶ¼����Ϣ
void DelContact(struct Contact* ps);
//����ָ������Ϣ
void SearchContact(const struct Contact* ps);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);
//����
void DestroyContact(Contact* ps);