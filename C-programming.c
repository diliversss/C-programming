#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
int i;
void menu();     //���˵�
void input();    //��Ϣ¼��
void display();  //��Ϣ��ʾ
void insert();   //��Ϣ���
void del();      //��Ϣɾ��
void find();     //��Ϣ��ѯ
void find1();    //��ѧ�Ų�ѯ
void find2();    //��������ѯ
void read();      //��ȡ����
void out();       //��������
int noxx=0;         //ѧ������
struct student                                          //����ѧ����Ϣ
{
  char Mark[20];                                       // ѧ��
  char Name[20];                                       //����
  char Sex[20];                                        //�Ա�
  char Birthday[20];                                   //��������
  char Class[20];                                      //���ڰ༶
  char Phone[20];                                      //��ϵ�绰
};
struct student stu[10000],*p;

int main()    //������
{       read();
        while(1)
        menu();
}

void menu()     //              �˵�
{
  int s;
 {
	printf("\n");
	printf("\t\t--------------------------------------------\n");
    printf("\t\t| �������ѧ��ѧ������ϵͳ �������|\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              1.��������                  |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              2.��ʾ����                  |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              3.���һ������              |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              4.ɾ��һ������              |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              5.��������                  |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t|              6.�˳�                      |\n");
    printf("\t\t--------------------------------------------\n");
	printf("\n\t\t��ѡ��");
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


void input()       //ѧ����Ϣ¼��
{
  int i=0;
  char ch;
  do
   {
         printf("\t\t1.¼��ѧ����Ϣ\n�����%d��ѧ������Ϣ\n",i+1);
         printf("\n����ѧ��ѧ��:");
         scanf("%s",stu[i].Mark);
         printf("\n����ѧ������:");
         scanf("%s",stu[i].Name);
		 printf("\n����ѧ���Ա�:");
         scanf("%s",stu[i].Sex);
		 printf("\n����ѧ����������:");
         scanf("%s",stu[i].Birthday);
		 printf("\n����ѧ�����ڰ༶:");
         scanf("%s",stu[i].Class);
		 printf("\n����ѧ���绰:");
         scanf("%s",stu[i].Phone);
         printf("\n\n");
         i++;
		 noxx++;
         printf("�Ƿ��������?(Y/N)");
         ch=getch();
         system("cls");
   }
   while(ch!='n'&&ch!='N');
   system("cls");
}

void display()               //��Ϣ��ʾ
{
  int i;
  char s;
  do
   {
      printf("\t\tѧ����Ϣ�б�\n");
      for(i=0;i<noxx;i++)
	{
printf("****************************************\n");
printf("��%d��ѧ������Ϣ!\n",i+1);
printf("****************************************\n");
printf("ѧ��:%s\n",stu[i].Mark);
printf("����:%s\n",stu[i].Name);
printf("�Ա�:%s\n",stu[i].Sex);
printf("��������:%s\n",stu[i].Birthday);
printf("���ڰ༶:%s\n",stu[i].Class);
printf("��ϵ�绰:%s\n",stu[i].Phone);
	}
      printf("\t\t��������������˵�");
      s=getch();
   }
  while(!s);
  system("cls");
}

void insert()                       //��Ϣ����
{
   char ch;
   i=noxx;
   do
    {
         printf("\n\t\t�����²���ѧ����Ϣ\n");
         printf("\n����ѧ��ѧ��:\n");
         getchar();
         scanf("%s",stu[i].Mark);
         printf("\n����ѧ������:");
         scanf("%s",stu[i].Name);
		 printf("\n����ѧ���Ա�:");
         scanf("%s",stu[i].Sex);
		 printf("\n����ѧ����������:");;
         scanf("%s",stu[i].Birthday);
		 printf("\n����ѧ�����ڰ༶:");
         scanf("%s",stu[i].Class);
		 printf("\n����ѧ���绰:");
         scanf("%s",stu[i].Phone);
         printf("\n\n");
         noxx++;
         printf("�Ƿ��������?(Y/N)");
         ch=getch();
         system("cls");
     }
     while(ch!='n'&&ch!='N');
}

void del()                         //��Ϣɾ��
{

    char imark[1000],as;
    int i,j,flag=0;
    printf("����Ҫɾ��ѧ����ѧ��:");
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
	 if(flag) {printf("\n\n\t��ɾ����ѧ������Ϣ!!!\n\n");

for(i=0;i<noxx&&stu[i].Name[0];i++)
	{
printf("****************************************\n");
printf("��%d��ѧ������Ϣ!\n",i+1);
printf("****************************************\n");
printf("ѧ��:%s\n",stu[i].Mark);
printf("����:%s\n",stu[i].Name);
printf("�Ա�:%s\n",stu[i].Sex);
printf("��������:%s\n",stu[i].Birthday);
printf("���ڰ༶:%s\n",stu[i].Class);
printf("��ϵ�绰:%s\n",stu[i].Phone);
	}
	 }
	else  printf("\n\n\t\tû���ҵ���ѧ������Ϣ!!!\n\n");

   printf("\t\t\t��������������˵���");
        as=getch();
     system("cls");
}


void find1()                   //ѧ��ѧ�Ų�ѯ
{
    char a[10];
        int i,j;
        printf("������Ҫ��ѯѧ��ѧ��\n");
        scanf("%s",a);
        for(i=0;i<noxx;i++)
        {
            if(strcmp(a,stu[i].Mark)==0)
            {
                printf("****************************************\n");
                printf("****************************************\n");
                printf("ѧ��:%s\n",stu[i].Mark);
                printf("����:%s\n",stu[i].Name);
                printf("�Ա�:%s\n",stu[i].Sex);
                printf("��������:%s\n",stu[i].Birthday);
                printf("���ڰ༶:%s\n",stu[i].Class);
                printf("��ϵ�绰:%s\n",stu[i].Phone);
            }
            else
            printf("δ�ҵ�ѧ����Ϣ\n");
        }
    }

void find2()                            //ѧ��������ѯ
    {
        char a[10];
        int i,j;
        printf("������Ҫ��ѯѧ������\n");
        scanf("%s",a);
        for(i=0;i<noxx;i++)
        {
            if(strcmp(a,stu[i].Name)==0)
            {
            printf("****************************************\n");
            printf("****************************************\n");
            printf("ѧ��:%s\n",stu[i].Mark);
            printf("����:%s\n",stu[i].Name);
            printf("�Ա�:%s\n",stu[i].Sex);
            printf("��������:%s\n",stu[i].Birthday);
            printf("���ڰ༶:%s\n",stu[i].Class);
            printf("��ϵ�绰:%s\n",stu[i].Phone);
                printf("\n");
                break;
            }
            else
            printf("δ�ҵ�ѧ����Ϣ\n");
        }
    }

void find()                         //��Ϣ��ѯ
{
	int i;
	char s;
	printf("\t\t��ѡ���ѯ����:\n\n\n\t\t\n\t\t1.��ѧ�Ų�ѯ\n\t\t\n\t\t2.��������ѯ\n");
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
	printf("\t\t\t��������������˵���");
	fflush(stdin);
    s=getch();
}


void read()        //��ȡ
{
    int i;
    FILE *fp;
    if((fp=fopen("ѧ��ѧ������.txt","r"))==NULL)
    {
        printf("�޷��ҵ������ļ�\n�Ƿ񴴽����ļ�(Y/N)?\n");
        getch();
        if(getchar()=='Y'&&'y')
        {
            fp=fopen("ѧ��ѧ������.text","a");
        }
    }
    for(i=0;i<100000;i++)
    {
        fscanf(fp,"%s %s %s %s %s %s %d",stu[i].Mark,stu[i].Name,stu[i].Sex,stu[i].Birthday,stu[i].Class,stu[i].Phone,&noxx);
    }
}
void out()                        //�洢
{
    int i;
    FILE *fp;
    if((fp=fopen("ѧ��ѧ������.txt","wb"))==NULL)
    {
        printf("�޷����ļ�\n");
        exit(0);
    }
    for(i=0;i<noxx;i++)
    {
        fprintf(fp,"%s %s %s %s %s %s %d",stu[i].Mark,stu[i].Name,stu[i].Sex,stu[i].Birthday,stu[i].Class,stu[i].Phone,noxx);
    }
    fclose(fp);
}