// Q. ���Ḯ��Ʈ�� ť �ۼ��ϱ�

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	void *m_data;
	struct _node *m_next;
	struct _node *m_prev;
} SNode;

void SNode_init(SNode *node)
{
	node->m_data = NULL;
	node->m_next = NULL;
	node->m_prev = NULL;
}

typedef struct _list
{
	SNode *m_head;
	SNode *m_tail;
} SList;

void SList_init(SList *list)
{
	list->m_head = NULL;
	list->m_tail = NULL;
}

SNode * SList_end(SList *list)
{
	SNode *i = list->m_head;
	while (i != NULL)
	{
		if (i->m_next == NULL)
			return i;

		i = i->m_next;
	}

	return i;
}

SNode * SList_rend(SList *list)
{
	SNode *i = list->m_tail;
	while (i != NULL)
	{
		if (i->m_prev == NULL)
			return i;

		i = i->m_prev;
	}

	return i;
}

void SList_push_back(SList *list, void *data)
{
	SNode *tail;

	// ���� �� ��带 ����ϴ�
	SNode *newData = (SNode *)malloc(sizeof(SNode));
	SNode_init(newData);
	newData->m_data = data;
	newData->m_next = NULL;

	// ������ ���Դϴ�.
	tail = SList_end(list);
	if (tail == NULL)
		list->m_head = newData;
	else
		tail->m_next = newData;
}

void SList_push_front(SList *list, void *data)
{
	SNode *head = list->m_head;

	// ���� �� ��带 ����ϴ�
	SNode *newData = (SNode *)malloc(sizeof(SNode));
	SNode_init(newData);
	newData->m_data = data;
	newData->m_next = head;

	list->m_head = newData;
}

void * SList_pop_front(SList *list)
{
	void *data;
	SNode *head;

	if (list->m_head == NULL)
		return NULL;

	// �� ���� ���� next�� ����.
	data = list->m_head->m_data;
	head = list->m_head;
	list->m_head = list->m_head->m_next;

	free(head);

	return data;
}

void * SList_pop_back(SList *list)
{
	void *data;
	SNode *tail = NULL;

	if (list->m_head == NULL)
		return NULL;

	// �� �� ��带 ���մϴ�.
	SNode *i = list->m_head;
	while (i != NULL)
	{
		// ������ ���
		if (i->m_next == NULL)
		{
			tail = i;
			break;
		}

		i = i->m_next;
	}

	// 
	data = tail->m_data;
	list->m_head = list->m_head->m_next;

	free(tail);

	return data;
}

int main()
{
	int input = 0;
	SList queue;
	SList_init(&queue);

	while (input >= 0)
	{
		printf("input number: ");
		scanf_s("%d", &input);

		// 0���� ũ�� �Է�
		if (input > 0)
		{
			int *data = (int*)malloc(sizeof(int));
			*data = input;
			SList_push_back(&queue, data);
		}
		// 0�̸� ���
		else if (input == 0)
		{
			int *data = (int *)SList_pop_front(&queue);
			if (data == NULL)
			{
				printf("queue is empty!\n");
			}
			else
			{
				printf("[%d]\n", *data);
				free(data);
			}
		}
	}

	return 0;
}