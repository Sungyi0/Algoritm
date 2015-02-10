#include <stdio.h>
#include <stdlib.h>
/* 0.4 ���� ����ȣ ���� */

// Q. �Ϲ����� ������ Ÿ���� �ٸ� �� �ֵ��� ť�� �����϶�

#define QUEUE_SIZE 8

int main()
{
	void* queue[QUEUE_SIZE];
	int i, header = 0, tail = 0;

	// queue�� NULL�� �ʱ�ȭ�մϴ�.
	for (i = 0; i < QUEUE_SIZE; ++i)
		queue[i] = NULL;
	
	while (1)
	{
		int input = 0;

		printf("Input Number: ");
		scanf_s("%d", &input);

		// 0���� ũ�� �Է�
		if (input > 0)
		{
			if (queue[header] != NULL)
			{
				printf("queue is full!\n");
				continue;
			}
			else
			{
				int* newData = (int*)malloc(sizeof(input));
				*newData = input;
				queue[header] = newData;
				header = (header + 1) % QUEUE_SIZE;
			}
		}
		// 0�̶�� ����
		else if (input == 0)
		{
			if (queue[tail] == 0)
			{
				printf("queue is empty!!\n");
				continue;
			}
			else
			{
				printf("[%d]\n", *((int*)queue[tail]));
				free(queue[tail]);
				queue[tail] = NULL;	//  ���� �� 0���� ä��ϴ�.
				tail = (tail + 1) % QUEUE_SIZE;
			}
		}
		// 0���� ������ ����
		else
			break;
	}

	return 0;
}