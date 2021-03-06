#include"Contect.h"
void menu()
{
	printf("*******************************************\n");
	printf("********1 .Add     2.Delete      **********\n");
	printf("********3 .Search  4.Modity      **********\n");
	printf("********5 .Show    6 .Empty      **********\n");
	printf("********7 .SortByname  8.Save **************\n");
	printf("********** 0 .exit *************************\n");
}
enum Choice
{
	Add = 1,
	Delete,
	Search,
	Modity,
	Show,
	Empty,
	SortByname,
	Save
};
int FindPeople(struct Contect* pc)
{
	char name[NAME_MAX] = { 0 };
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int input = 0;
	struct Contect con;
	ContestInit(&con);
	do
	{
		menu();
		printf("请输入选择 : ");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			ContectAdd(&con);
			break;
		case Delete:
			ContectDelete(&con);
			break;
		case Search:
			ContectSearch(&con);
			break;
		case Modity:
			ContectModity(&con);
			break;
		case Show:
			ContectShow(&con);
			break;
		case Empty:
			ContectEmpty(&con);
			break;
		case SortByname:
			ContectSort(&con);
			break;
		case Save :
			ContectSave(&con);
			break;
		default:
			ContectEmpty(&con);
			printf("退出通讯录\n");
			break;
		}
	} while (input);
}
