#pragma once

#include <stdio.h>

#include "0.3.h"

/* 0.4 ���� ����ȣ ���� */
// Q. �迭�� ť �ۼ��ϱ�

#define QUEUE_SIZE 8

int main_04_0()
{
	int queue[QUEUE_SIZE] = {0, 0, 0, 0, 0, 0, 0, 0};

	int header = 0, input = 0;

	while (1)
	{
		printf("Input Number: ");
		scanf("%d", &input);

		// 0���� ũ�� �Է�
		if (input > 0)
		{
			if (header >= QUEUE_SIZE)
			{
				printf("queue is full!\n");
				continue;
			}
			else
			{
				queue[header++] = input;
			}
		}
		// 0�̶�� ����
		else if (input == 0)
		{
			if (queue[0] == 0)
				printf("queue is empty!!\n");
			else
			{
				printf("[%d]\n", queue[0]);
				queue[0] = 0;		//  ���� �� 0���� ä��ϴ�.
				left_rotate(queue, 0, header--);
			}
		}
		// 0���� ������ ����
		else
			break;
	}
}

// Q. ���� ť �ۼ�