#include"cdlink.h"

void frontcreatlist(Linklist* L) {//ͷ�巨
	Lelemtype data;
	Linklist p, q;
	int len;
	*L = (Linklist)malloc(sizeof(LNode));
	(*L)->next = NULL;
	q = *L;
	printf("����������:\n");
	scanf_s("%d", &len);
	printf("��������������Ԫ��\n");
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
	printf("����������:\n");
	scanf_s("%d", &len);
	printf("��������������Ԫ��\n");
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
	printf("�����������Ԫ�����Ϊ:\n");
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
	printf("������Ҫ��λԪ�ص�λ��:\n");
	scanf_s("%d", &set);
	for (int i = 0; i < set; ++i)
	{
		p = p->next;
	}
	data = p->data;
	printf("�� %d λ��Ԫ��Ϊ: %d \n", set, data);
	return data;
}
void Insert(Linklist* L) {
	int set = 0;
	int direc = 0;
	Linklist p, q;
	Lelemtype data;
	p = *L;
	q = (Linklist)malloc(sizeof(LNode));
	printf("������Ҫ�����Ԫ��:\n");
	scanf_s("%d", &data);
	q->data = data;
	printf("������Ҫ����Ԫ�ص�λ��:\n");
	scanf_s("%d", &set);
	printf("ѡ����뷽λ:1->��ǰ, 2->�ں�\n");
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
		printf("����ȷ���뷽λѡ��\n");
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
	printf("������Ҫɾ��Ԫ�ص�λ��:\n");
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
	printf("�����������Ԫ�����Ϊ:\n");
	while (p->next != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("%d", p->data);
	printf("\n");
	return OK;
}


  