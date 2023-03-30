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
void frontcreatlist(Linklist* L);//头插法输入式创建链表
void rearcreatlist(Linklist* L);//尾插法输入式创建链表
int Displaylist(Linklist L);//从头到尾表示链表
Lelemtype Getelem(Linklist L);//查找输入位置的元素并返回其值
void Insert(Linklist *L);//在输入位置的给定方向插入元素
int length(Linklist L);//求表长
Lelemtype Elemdelete(Linklist* L);//删除输入位置的元素并返回其值
#endif // !cdlink.h



