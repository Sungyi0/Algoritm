/* 0.4 ���� ����ȣ ���� */

#include <stdio.h>

// �����غ��� Q. �迭�� �̿��Ͽ� ������ �ۼ��϶�.

#define STACK_SIZE 8

int main()
{
	int i, input = 0;
	int header = 0;
	int stack[STACK_SIZE];

	// ������ ��� ���Ҹ� 0���� �ʱ�ȭ
	for (i = 0; i < STACK_SIZE; ++i)
		stack[i] = 0;

	while (input > 0)
	{
		printf("Input Number: ");
		scanf_s("%d", &input);

		// 0���� ũ�� �Է�
		if (input > 0)
		{
			if (header < STACK_SIZE)
			stack[header++] = input;
		}
		// 0�̶�� ����
		else if (input == 0)
			printf("%d\n", stack[header--]);
		else
	}

	return 0;
}