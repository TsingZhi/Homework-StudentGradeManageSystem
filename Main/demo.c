#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include "dataStructure.h"
#include "lxz.h"
#include "menu.h"

void main()
{
	int option;
	// system("chcp 65501"); //将终端以UTF-8编码格式输出
	system("chcp 936");
	ReadFromFile();
	printf("\n");
	calculatePerformanceData();
	printf("\n");
	system("pause");
	system("cls");
	while (1)
	{
		printf("=================欢迎使用学生成绩管理系统=================\n");
		printf("||      1-数据维护                       2-计算排名      ||\n");
		printf("||      3-排序输出                       4-查询信息      ||\n");
		printf("||      5-成绩统计                       6-保存退出      ||\n");
		printf("==========================================================\n");
		while (1)
		{
			fflush(stdin);
			printf("输入主菜单编号:");
			scanf("%d", &option);
			if (option < 1 || option > 6)
				printf("输入有误，请重新输入.\n");
			else
				break;
		}
		switch (option)
		{
		case 1: Data_maintenance();		 system("pause");    system("cls"); break;
		case 2: Calculate_rank();      	 system("pause"); 	 system("cls"); break;
		case 3: Sort_print();          	 system("pause"); 	 system("cls"); break;
		case 4: Inquire_information();   system("pause");	 system("cls"); break;
		case 5: Performance_statistic(); system("pause");	 system("cls"); break;
		case 6: SaveToFile();             return;
		}
	}
//	SaveToFile();
//	printf("成功保存信息\n");
//	printf("程序结束，谢谢使用\n");
}