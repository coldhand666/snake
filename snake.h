#ifndef __SNAKE_H__
#define __SNAKE_H__

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

extern int W;//��ͼ���
extern int H;//��ͼ�߶�

extern char map[22][52];//�����ͼ
extern char key;//���������û�����ʱ����ļ�ֵ

extern int direct;//�ߵ�ǰ���˶�����
extern int food[2];
extern int head;//��¼����

extern int snake[400][3];//�ߵ�����������Լ���   ����(snake[i][0]=0)   ��    ��ͷ(snake[i][0]=1)   ��β����ͷ����

void init(char map[22][52], int snake[400][3]);//��Ϸ��ʼ��ʱ���ʼ��
void makeMap(char map[22][52], int snake[400][3], int food[]);//����move����ߺ����ɵ�food����map�����ֵ---������ͼ
void move(int snake[400][3], int direct);//���ߵ���������ƶ�
void makeFood(int food[]);//�������������һ��ʳ������
void showView(char map[22][52]);  //�����ͼ
int ifEat(int head, int food[2]); //�ж�ʳ���Ƿ񱻳Ե�
int ifReprat(int snake[400][3], int x, int y);//�ж����ɵ�ʳ���Ƿ��������ظ�
int ifBump(int head);//�ж��Ƿ����ײ(ײ�Լ���ײǽ)
void getKey();//��ȡ��ֵ�����������˶�����

#endif