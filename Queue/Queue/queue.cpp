#include <stdio.h>
//ť�� ������� 10
#define SIZE 10
int front = -1;		//front ť ù��°�� ��ġ�� ���� �ε���
int rear = 0;		//rear ť �������� ��ġ�� ���� �ε���

int queue[SIZE] = { NULL };

bool IsQueueEmpty() {
	if (front == rear-1)return true;
	else return false;
}

//ť�� ���� �����ϰ� rear�� �÷��ִ� added_queue()�Լ�
void AddedQueue(int num) {
	if (rear > SIZE-1) {
		printf("���� �Ѱ� �ʰ��� �߰� �Ұ�\n");
	}
	else {
		queue[rear] = num;
		rear++;
	}
}

//ť�� ���� �ҷ����� front�� ��ܿ��� delete_queue()�Լ�
int DeleteQueue() {
	front++;
	return queue[front];
}