#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
int i;
void menu();     //主菜单
void input();    //信息录入
void display();  //信息显示
void insert();   //信息添加
void del();      //信息删除
void find();     //信息查询
void find1();    //按学号查询
void find2();    //按姓名查询
void read();      //读取数据
void out();       //导出数据
int noxx=0;         //学生总量
struct student                                          //定义学生信息
{
  char Mark[20];                                       // 学号
  char Name[20];                                       //姓名
  char Sex[20];                                        //性别
  char Birthday[20];                                   //出生日期
  char Class[20];                                      //所在班级
  char Phone[20];                                      //联系电话
};
struct student stu[10000],*p;

int main()    //主函数
{       read();
        while(1)
        menu();
}

void menu()     //              菜单
{
  int s;
 {
	printf("\n");
	printf("\t\t--------------------------------------------\n");
    printf("\t\t| ☆★☆★☆★学生学籍管理系统 ☆★☆★☆★|\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              1.输入数据                  |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              2.显示数据                  |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              3.添加一条数据              |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              4.删除一条数据              |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              5.查找数据                  |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              6.退出                      |\n");
    printf("\t\t--------------------------------------------\n");
	printf("\n\t\t请选择：");
    scanf("%d",&s);
    switch(s)
    {
       case 1:system("cls");
              input();
              break;
       case 2:system("cls");
              display();
              break;
       case 3:system("cls");
              insert();
              break;
       case 4:system("cls");
              del();
              break;
       case 5:system("cls");
              find();
              break;
       case 6:system("exit");
              out();
              exit(0);
       default:system("cls");
              menu();
    }
 }
}


void input()       //学生信息录入
{
  int i=0;
  char ch;
  do
   {
         printf("\t\t1.录入学生信息\n输入第%d个学生的信息\n",i+1);
         printf("\n输入学生学号:");
         scanf("%s",stu[i].Mark);
         printf("\n输入学生姓名:");
         scanf("%s",stu[i].Name);
		 printf("\n输入学生性别:");
         scanf("%s",stu[i].Sex);
		 printf("\n输入学生出生年月:");
         scanf("%s",stu[i].Birthday);
		 printf("\n输入学生所在班级:");
         scanf("%s",stu[i].Class);
		 printf("\n输入学生电话:");
         scanf("%s",stu[i].Phone);
         printf("\n\n");
         i++;
		 noxx++;
         printf("是否继续输入?(Y/N)");
         ch=getch();
         system("cls");
   }
   while(ch!='n'&&ch!='N');
   system("cls");
}

void display()               //信息显示
{
  int i;
  char s;
  do
   {
      printf("\t\t学生信息列表\n");
      for(i=0;i<noxx;i++)
	{
printf("****************************************\n");
printf("第%d个学生的信息!\n",i+1);
printf("****************************************\n");
printf("学号:%s\n",stu[i].Mark);
printf("姓名:%s\n",stu[i].Name);
printf("性别:%s\n",stu[i].Sex);
printf("出生年月:%s\n",stu[i].Birthday);
printf("所在班级:%s\n",stu[i].Class);
printf("联系电话:%s\n",stu[i].Phone);
	}
      printf("\t\t按任意键返回主菜单");
      s=getch();
   }
  while(!s);
  system("cls");
}

void insert()                       //信息插入
{
   char ch;
   i=noxx;
   do
    {
         printf("\n\t\t输入新插入学生信息\n");
         printf("\n输入学生学号:\n");
         getchar();
         scanf("%s",stu[i].Mark);
         printf("\n输入学生姓名:");
         scanf("%s",stu[i].Name);
		 printf("\n输入学生性别:");
         scanf("%s",stu[i].Sex);
		 printf("\n输入学生出生年月:");;
         scanf("%s",stu[i].Birthday);
		 printf("\n输入学生所在班级:");
         scanf("%s",stu[i].Class);
		 printf("\n输入学生电话:");
         scanf("%s",stu[i].Phone);
         printf("\n\n");
         noxx++;
         printf("是否继续输入?(Y/N)");
         ch=getch();
         system("cls");
     }
     while(ch!='n'&&ch!='N');
}

void del()                         //信息删除
{

    char imark[1000],as;
    int i,j,flag=0;
    printf("输入要删除学生的学号:");
    scanf("%s",imark);
    for(i=0;i<noxx;i++)
	 if(strcmp(imark,stu[i].Mark)==0)
	{ flag=1;
		 if(i==noxx)
			 {
				 noxx--;
			 }
             else
			 {for(j=i;j<noxx;j++)
                   stu[j]=stu[j+1];
			 noxx--; }
	 }
	 if(flag) {printf("\n\n\t已删除该学生的信息!!!\n\n");

for(i=0;i<noxx&&stu[i].Name[0];i++)
	{
printf("****************************************\n");
printf("第%d个学生的信息!\n",i+1);
printf("****************************************\n");
printf("学号:%s\n",stu[i].Mark);
printf("姓名:%s\n",stu[i].Name);
printf("性别:%s\n",stu[i].Sex);
printf("出生年月:%s\n",stu[i].Birthday);
printf("所在班级:%s\n",stu[i].Class);
printf("联系电话:%s\n",stu[i].Phone);
	}
	 }
	else  printf("\n\n\t\t没有找到该学生的信息!!!\n\n");

   printf("\t\t\t按任意键返回主菜单：");
        as=getch();
     system("cls");
}


void find1()                   //学生学号查询
{
    char a[10];
        int i,j;
        printf("请输入要查询学生学号\n");
        scanf("%s",a);
        for(i=0;i<noxx;i++)
        {
            if(strcmp(a,stu[i].Mark)==0)
            {
                printf("****************************************\n");
                printf("****************************************\n");
                printf("学号:%s\n",stu[i].Mark);
                printf("姓名:%s\n",stu[i].Name);
                printf("性别:%s\n",stu[i].Sex);
                printf("出生年月:%s\n",stu[i].Birthday);
                printf("所在班级:%s\n",stu[i].Class);
                printf("联系电话:%s\n",stu[i].Phone);
            }
            else
            printf("未找到学生信息\n");
        }
    }

void find2()                            //学生姓名查询
    {
        char a[10];
        int i,j;
        printf("请输入要查询学生姓名\n");
        scanf("%s",a);
        for(i=0;i<noxx;i++)
        {
            if(strcmp(a,stu[i].Name)==0)
            {
            printf("****************************************\n");
            printf("****************************************\n");
            printf("学号:%s\n",stu[i].Mark);
            printf("姓名:%s\n",stu[i].Name);
            printf("性别:%s\n",stu[i].Sex);
            printf("出生年月:%s\n",stu[i].Birthday);
            printf("所在班级:%s\n",stu[i].Class);
            printf("联系电话:%s\n",stu[i].Phone);
                printf("\n");
                break;
            }
            else
            printf("未找到学生信息\n");
        }
    }

void find()                         //信息查询
{
	int i;
	char s;
	printf("\t\t请选择查询类型:\n\n\n\t\t\n\t\t1.按学号查询\n\t\t\n\t\t2.按姓名查询\n");
    scanf("%d",&i);
	switch(i)
	{
	  case 1:system("cls");
		      find1();
		      break;
	  case 2:system("cls");
		      find2();
		      break;
	  default:system("cls");
		      menu();
	}
	printf("\t\t\t按任意键返回主菜单：");
	fflush(stdin);
    s=getch();
}


void read()        //读取
{
    int i;
    FILE *fp;
    if((fp=fopen("学生学籍管理.txt","r"))==NULL)
    {
        printf("无法找到数据文件\n是否创建新文件(Y/N)?\n");
        getch();
        if(getchar()=='Y'&&'y')
        {
            fp=fopen("学生学籍管理.text","a");
        }
    }
    for(i=0;i<100000;i++)
    {
        fscanf(fp,"%s %s %s %s %s %s %d",stu[i].Mark,stu[i].Name,stu[i].Sex,stu[i].Birthday,stu[i].Class,stu[i].Phone,&noxx);
    }
}
void out()                        //存储
{
    int i;
    FILE *fp;
    if((fp=fopen("学生学籍管理.txt","wb"))==NULL)
    {
        printf("无法打开文件\n");
        exit(0);
    }
    for(i=0;i<noxx;i++)
    {
        fprintf(fp,"%s %s %s %s %s %s %d",stu[i].Mark,stu[i].Name,stu[i].Sex,stu[i].Birthday,stu[i].Class,stu[i].Phone,noxx);
    }
    fclose(fp);
}