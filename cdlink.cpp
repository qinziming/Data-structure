#include"cdlink.h"

void frontcreatlist(Linklist* L) {//头插法
	Lelemtype data;
	Linklist p, q;
	int len;
	*L = (Linklist)malloc(sizeof(LNode));
	(*L)->next = NULL;
	q = *L;
	printf("输入链表长度:\n");
	scanf_s("%d", &len);
	printf("请依次输入链表元素\n");
	for (int count = 0; count < len; ++count) {
		p = (Linklist)malloc(sizeof(LNode));
		scanf_s("%d", &data);
		p->data = data;
		(*L)->next = p;
		p->prior = *L;
		p->next = q;
		q->prior = p;
		q = p;
	}
}
void rearcreatlist(Linklist* L) {
	Lelemtype data;
	Linklist p, q;
	int len;
	*L = (Linklist)malloc(sizeof(LNode));
	(*L)->next = NULL;
	q = *L;
	printf("输入链表长度:\n");
	scanf_s("%d", &len);
	printf("请依次输入链表元素\n");
	for (int count = 0; count < len; ++count) {
		p = (Linklist)malloc(sizeof(LNode));
		scanf_s("%d", &data);
		p->data = data;
		q->next = p;
		p->prior = q;
		p->next = *L;
		(*L)->prior = p;
		q = q->next;
	}
}
int Displaylist(Linklist L) {
	if (L->next == NULL) {
		return ERROR;
	}
	Linklist p;
	p = L->next;
	printf("操作后的链表元素输出为:\n");
	while (p->next != L)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("%d", p->data);
	printf("\n");
	return OK;
}
Lelemtype Getelem(Linklist L) {
	Linklist p;
	Lelemtype data;
	int set;
	p = L;
	printf("输入想要定位元素的位置:\n");
	scanf_s("%d", &set);
	for (int i = 0; i < set; ++i)
	{
		p = p->next;
	}
	data = p->data;
	printf("第 %d 位的元素为: %d \n", set, data);
	return data;
}
void Insert(Linklist* L) {
	int set = 0;
	int direc = 0;
	Linklist p, q;
	Lelemtype data;
	p = *L;
	q = (Linklist)malloc(sizeof(LNode));
	printf("输入想要插入的元素:\n");
	scanf_s("%d", &data);
	q->data = data;
	printf("输入想要插入元素的位置:\n");
	scanf_s("%d", &set);
	printf("选择插入方位:1->在前, 2->在后\n");
	scanf_s("%d", &direc);
	switch (direc)
	{
	case 1:
		for (int i = 0; i < set; ++i)
		{
			p = p->next;
		}
		q->next = p;
		q->prior = p->prior;
		p->prior = q;
		q->prior->next = q;
		break;
	case 2:
		for (int i = 0; i < set; ++i)
		{
			p = p->next;
		}
		if (p->next != *L)
		{
			q->prior = p;
			q->next = p->next;
			p->next = q;
			q->next->prior = q;
		}
		else
		{
			p->next = q;
			q->prior = p;
			q->next = *L;
			(*L)->prior = q;
		}
		break;
	default:
		printf("请正确输入方位选择\n");
		break;
	}

}
int length(Linklist L) {
	int count = 0;
	Linklist p;
	p = L;
	while (p->next != L)
	{
		p = p->next;
		++count;
	}

	return count;
}
Lelemtype Elemdelete(Linklist* L) {
	int set;
	Lelemtype data;
	Linklist p = *L;
	printf("输入想要删除元素的位置:\n");
	scanf_s("%d", &set);
	for (int i = 0; i < set; ++i)
	{
		p = p->next;
	}
	p->prior->next = p->next;
	p->next->prior = p->prior;
	p->next = p->prior = NULL;
	data = p->data;
	free(p);
	return data;
}
void InitSingleList(SLinklist* L) {
	*L = (SLinklist)malloc(sizeof(SLNode));
	(*L)->data = 0;
	(*L)->next = NULL;
}
void CreatSingleList(SLinklist* L) {
	SLinklist q;
	q = *L;
	for (int i = 0; i < MAXLENGTH; i++)
	{
		SLinklist p = (SLinklist)malloc(sizeof(SLNode));
		p->data = rand() % 20;
		(*L)->next = p;
		p->next = q->next;
	}
}
int Displaysinglelist(SLinklist L) {
	if (L->next == NULL) {
		return ERROR;
	}
	SLinklist p;
	p = L->next;
	printf("操作后的链表元素输出为:\n");
	while (p->next != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("%d", p->data);
	printf("\n");
	return OK;
}


  