// Q. ���Ḯ��Ʈ�� ť �ۼ��ϱ�

#include <stdio.h>
#include <stdlib.h>

template<typename _Ty>
class CList
{
	struct node
	{
		node() : m_data(nullptr), m_next(nullptr) {}
		_Ty *m_data;
		node *m_next;

		bool isTail() {return m_next == nullptr;}
	};

public:
	CList()
		: m_next(nullptr), m_size(0)	{}

	node * end()
	{
		node *i = m_next;
		while (i != nullptr)
		{
			if (i->isTail())
				return i;

			i = i->m_next;
		}

		return i;
	}

	void push(_Ty *data)
	{
		// ���� �� ��带 ����ϴ�
		node *newData = new node;
		newData->m_data = data;
		newData->m_next = nullptr;

		// ������ ���Դϴ�.
		node *tail = end();
		if (tail == nullptr)
			m_next = newData;
		else
			tail->m_next = newData;

		++m_size;
	}

	_Ty * pop()
	{
		if (m_next == nullptr)
			return nullptr;

		// �� ���� ���� next�� ����.
		_Ty* data = m_next->m_data;
		node* head = m_next;
		m_next = m_next->m_next;

		--m_size;

		free(head);

		return data;
	}

	node* GetNext() const { return m_next; }
	size_t GetSize() const { return m_size; }

private:
	size_t m_size;
	node* m_next;
};

int main()
{
	int input = 0;
	CList<int> queue;

	while (input >= 0)
	{
		printf("input number: ");
		scanf_s("%d", &input);

		// 0���� ũ�� �Է�
		if (input > 0)
		{
			int *data = (int*)malloc(sizeof(int));
			*data = input;
			queue.push(data);
		}
		// 0�̸� ���
		else if (input == 0)
		{
			int *data = queue.pop();
			if (data == nullptr)
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