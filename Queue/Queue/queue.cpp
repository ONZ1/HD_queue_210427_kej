#include <stdio.h>
//큐의 사이즈는 10
#define SIZE 10
int front = -1;		//front 큐 첫번째에 위치한 값의 인덱스
int rear = 0;		//rear 큐 마지막에 위치한 값의 인덱스

int queue[SIZE] = { NULL };

bool IsQueueEmpty() {
	if (front == rear-1)return true;
	else return false;
}

//큐에 값을 저장하고 rear를 늘려주는 added_queue()함수
void AddedQueue(int num) {
	if (rear > SIZE-1) {
		printf("수용 한계 초과로 추가 불가\n");
	}
	else {
		queue[rear] = num;
		rear++;
	}
}

//큐의 값을 불러오고 front들 당겨오는 delete_queue()함수
int DeleteQueue() {
	front++;
	return queue[front];
}