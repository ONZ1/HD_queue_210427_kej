#include <stdio.h>
//ť�� ������� 10
#define SIZE 10
int front = -1;		//front ť ù��°�� ��ġ�� ���� �ε���
int rear = 0;		//rear ť �������� ��ġ�� ���� �ε���

int queue[SIZE] = { NULL };

bool IsQueueEmpty() {
	if (front == rear-1)return true;		//�迭�� ����ְų� ��� �ҷ��� ���¸� �ʱⰪ�� ���� 1 ���̰� ���� ������
	else return false;
}

//ť�� �Էµ� �������� �����ϰ� rear�� �÷��ִ� added_queue()�Լ�
void AddedQueue(int num) {
	if (rear == SIZE)
//������ �ε����� 0���� �����ؼ� SIZE���� �Է� ����. 
//������ �ε����� �� �Է� �� ++�Ǿ� SIZE�� �������Ƿ� �� ���� �Է°��� �߰��� �� ����.
	{
		printf("���� �Ѱ� �ʰ��� �߰� �Ұ�\n");
	}
	else {
		queue[rear] = num;		//ť�� ������ �ε���(0���� ����)�� �Է°� �߰�
		rear++;		//�߰� �� �ε����� 1 �ø���
	}
}

//ť�� ���� �ҷ����� front�� ��ܿ��� delete_queue()�Լ�
int DeleteQueue() {
	front++;		//�ʱⰪ�� -1�̱� ������ ���� ��ܿͼ� �ε����� ���߱�
	return queue[front];
}