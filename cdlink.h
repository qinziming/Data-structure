#ifndef CDLINK_H
#define CDLINK_H
 
#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include <time.h>

#define OK 1
#define ERROR 0
#define NULL 0
#define MAXLENGTH 100

typedef int Lelemtype;
typedef int SLelemtype;

typedef struct LNode {
	Lelemtype data;
	struct LNode* prior;
	struct LNode* next;
}LNode, *Linklist;

//srand(time(0));

typedef struct SLNode {
	SLelemtype data;
	struct SLNode* next;
}SLNode, *SLinklist;

int Displaysinglelist(SLinklist L);
void CreatSingleList(SLinklist* L);
void InitSingleList(SLinklist* L);
void frontcreatlist(Linklist* L);//ͷ�巨����ʽ��������
void rearcreatlist(Linklist* L);//β�巨����ʽ��������
int Displaylist(Linklist L);//��ͷ��β��ʾ����
Lelemtype Getelem(Linklist L);//��������λ�õ�Ԫ�ز�������ֵ
void Insert(Linklist *L);//������λ�õĸ����������Ԫ��
int length(Linklist L);//���
Lelemtype Elemdelete(Linklist* L);//ɾ������λ�õ�Ԫ�ز�������ֵ
#endif // !cdlink.h



