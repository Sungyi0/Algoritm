#pragma once

/* 0.2 �� ������ �� �ٲٱ� */
// Q. �����͸� �̿��Ͽ� ���� �ٲٴ� �Լ�
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// Q. �迭�� �� ���� �ٲٱ�
void swap_arr(int arr[], int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
