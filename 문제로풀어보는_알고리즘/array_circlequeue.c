#include <stdio.h>
/* 0.4 ���� ����ȣ ���� */

// Q. ���� ť �ۼ�
#define QUEUE_SIZE 8

int main()
{
	int queue[QUEUE_SIZE] = {0, 0, 0, 0, 0, 0, 0, 0};

	int header = 0, tail = 0, input = 0;

	while (1)
	{
		printf("Input Number: ");
		scanf_s("%d", &input);

		// 0���� ũ�� �Է�
		if (input > 0)
		{
			if (queue[header] != 0)
			{
				printf("queue is full!\n");
				continue;
			}
			else
			{
				queue[header] = input;
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
				printf("[%d]\n", queue[tail]);
				queue[tail] = 0;	//  ���� �� 0���� ä��ϴ�.
				tail = (tail + 1) % QUEUE_SIZE;
			}
		}
		// 0���� ������ ����
		else
			break;
	}

	return 0;
}