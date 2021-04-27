#include "queue.h"

void main() {
	AddedQueue(1);
	AddedQueue(2);
	AddedQueue(3);
	AddedQueue(4);
	AddedQueue(5);
	AddedQueue(6);
	AddedQueue(7);
	AddedQueue(8);
	AddedQueue(9); 
	AddedQueue(10);
	AddedQueue(11);		//초과값 예시
	AddedQueue(12);

	while (true)
	{
		if (IsQueueEmpty() == true)		//비어있으면 트루값이 리턴됨
		{
			printf("종료\n");
			break;
		}
		else printf("%d\n", DeleteQueue());		//비어있지 않으면 큐 값을 모두 불러온 뒤 비워지면 종료
	}

	fgetc(stdin);
}