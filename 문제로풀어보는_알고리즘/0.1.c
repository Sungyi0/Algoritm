/* 0.1 �ִ�� �ּ� */
// Q. �ִ� ���� �ּ� ���� ���ϴ� �Լ�
int min(int x, int y)
{
	if (x < y)
		return x;

	return y;
}

int max(int x, int y)
{
	if (x > y)
		return x;

	return y;
}

// Q. �迭�� �ִ� ���� ���ϴ� �Լ�
int max_arr(int arr[], int arr_len)
{
	int maxa, i;

	maxa = arr[0];
	for (i = 1; i < arr_len; ++i)
		if (arr[i] > maxa)
			maxa = arr[i];

	return maxa;
}
