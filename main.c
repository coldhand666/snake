#define _CRT_SECURE_NO_WARNINGS

#include "snake.h"

int main() {
	init(map, snake);//��ʼ����ͼ
	while (1) {
		getKey();
		system("cls");
		Sleep(33);
		move(snake, direct);//���߿�ʼ�ƶ�
		if (!food[0] && !food[1]) {//ʳ���Ѿ����Ե�--��������ʳ��
			makeFood(food);//����ʳ������
		}
		makeMap(map, snake, food);
		showView(map);
		if (ifBump(head)) {
			printf("��Ϸ��������ĳɼ�Ϊ��%d", head);
			break;
		}
		getKey();
	}
	getchar();
	return 0;
}