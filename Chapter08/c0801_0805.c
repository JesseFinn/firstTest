#include <stdio.h>

/*
//0801 ��������
//��������������һ���ṹ������������꣬�£��գ�������ĳ��ĳ��ĳ�գ���������ڱ����ǵڼ��죬ע���������⡣
//������ʽ������һ�У�������������������ʾĳ��ĳ��ĳ�ա�
//�����ʽ�����һ�У������һ������һ��ĵڼ��졣
//�������룺2013 3 5
//���������64
struct date
{
	int year;
	int month;
	int day;
	
};
int main()
{
	struct date a;
	int b[12]={31,28,31,30,31,30,31, 31, 30, 31, 30, 31},i,sum=0,flag;
	
	scanf("%d%d%d",&a.year,&a.month,&a.day);
	if(a.year%4==0 && a.year%100!=0 || a.year%400==0)
		flag=1;
	else flag=0;
	
	for(i=0;i<a.month-1;i++)
		sum=sum+b[i];
	if(a.month>2)
		sum=sum+a.day+flag;
	else sum=sum+a.day;
	
	printf("%d\n",sum);
	
	return 0;
} 
*/





/*
//0802 ��ͳɼ�
//������������֪ѧ���ļ�¼��ѧ�źͳɼ����ɣ���n��ѧ�������ݡ� ���д����fun,�����Ĺ����ǣ��ҳ��ɼ���͵�ѧ����¼��
//			ͨ���βη������������涨ֻ��һ����ͷ֣�
//������ʽ������ռn+1�С���һ��Ϊһ������n����ʾѧ��������һ��n��ÿ��2�����ݣ��ֱ�Ϊѧ����ѧ�źͳɼ���
//�����ʽ�����һ�У�����ɼ���͵�ѧ����¼��
//�������룺5
//			2014A001 81 
//			2014A002 89 
//			2014A003 66 
//			2014A004 87 
//			2014A005 77
//�������	2017A003 66 
#define N 30
struct Stu
{
	char num[15];
	int s;
	
	
 } ;
 
 void fun(struct Stu a[],int n, struct Stu *p)
 {
 	
 	int i;
 	*p=a[0];
 	for(i=0;i<n;i++)
 	{
 		if(a[i].s<p->s)
 			*p=a[i];
	 }
 	
 }
int main()
{
	int n,i;
	struct Stu stud[N],st;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",stud[i].num,&stud[i].s);
	fun(stud,n,&st);
	
	printf("%s %d\n",st.num,st.s);
	
	return 0; 
	
	
}
*/






//0803 ͼ��۸�ͳ��
//�����������ýṹ���鱣�������Ϣ������N��N<50�����飬ÿ�����������������С��30�ַ������������磨����С��15��
//			�����������������ۣ��������������������Ϣ�����������ٵ������������Ϣ��������Щ����ܷ��ã� 
//������ʽ����һ��Ϊһ������N����ʾͼ�������� ��������N����ÿ�а���һ�������Ϣ���ݣ�������֮��ո�ָ���
//�����ʽ�����ǰN�У�Ϊ������˳������������Ϣ����N+1��Ϊ��������ܷ��ã�������λС����
/*�������룺
			3
			C-Programming qinghua      20 		28.50
			DataStruct     jixiegongye 30 		41.55
			OpratingSystem  gaodengjiaoyu 60	16.75
//�������
			OpratingSystem  gaodengjiaoyu 60        16.75
			C-Programming   qinghua       20 	 	28.50
			DataStruct     jixiegongye   30 		41.55
			2821.50
*/
/*
struct BookType
{
	
	char name[30];
	char concern[15];
	int num;
	float price;
}; 
void sort(struct BookType bk[],int n)
{
	int i,j,k;
	struct BookType temp;
	
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(bk[j].price<bk[k].price) k=j;
		if(k!=i)
		{
			temp=bk[i];bk[i]=bk[k];bk[k]=temp;
		 } 
	}
}
float total(struct BookType bk[],int n)
{
	int i;
	float total_price=0;
	
	for(i=0;i<n;i++)
	{
		total_price=total_price+bk[i].price*bk[i].num;
	}
	
	return total_price;
	
}
int main()
{
	int n,i;
	struct BookType book[50];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%s%d%f",book[i].name,book[i].concern,&book[i].num,&book[i].price);
		
	sort(book,n);	
	
	for(i=0;i<n;i++)
	{
		printf("%-20s %-15s %-10d %-.2f\n",book[i].name,book[i].concern,book[i].num,book[i].price);//-�ŵ�������������������� 
		
	}
	
	printf("%.2f\n",total(book,n));
	
	return 0; 
}
*/







/*
//0804 ��������
//�������������򴴽�һ����������������еĸ���ֵ��
//������ʽ���������У���һ������������ĸ������ڶ���������������ڵ��ֵ������ֵ֮���Կո�ָ���
//�����ʽ�����һ�У���������и�������ֵ������ֵ���Կո�ָ���
//�������룺5
//			1 3 5 7 9 
//���������1 3 5 7 9  

#include <stdlib.h>
struct Node
{
	int num;
	struct Node *next;
};

struct Node *creat(int n) 
{
	struct Node *head,*p,*q;
	int i;
	
	p=q=(struct Node *)malloc(sizeof(struct Node));
	scanf("%d",&p->num);
	head=p;
	
	if(n==1)
	p->next=NULL;
	
	else
	{
		for(i=1;i<n;i++)
		{
				p=(struct Node *)malloc(sizeof(struct Node));
				scanf("%d",&p->num);
				q->next=p;
				q=p;
				
		}
		q->next=NULL;
	}
	return head;
}

void print(struct Node *head)
{
	struct Node *p;
	p=head;
	
	while(p!=NULL)
	{
			printf("%d",p->num);
			p=p->next;	
	}
}

int main()
{
	int n;
	struct Node * head;
	
	scanf("%d",&n);
	
	head=creat(n);
	print(head);
	
	return 0;
	
}
*/




/* 
//0805 ��������

#include <stdlib.h>
struct Node
{
	int num;
	struct Node *next;
};

struct Node *creat(int n) 
{
	struct Node *head,*p;
	int i;
	
	p=(struct Node *)malloc(sizeof(struct Node));
	scanf("%d",&p->num);
	p->next=NULL;
	head=p;
	


		for(i=1;i<n;i++)
		{
				p=(struct Node *)malloc(sizeof(struct Node));
				scanf("%d",&p->num);
				
				p->next=head;
				head=p;
		}
	
		return head;
}

void print(struct Node *head)
{
	struct Node *p;
	p=head;
	
	while(p!=NULL)
	{
			printf("%d",p->num);
			p=p->next;	
	}
	
}

int main()
{
	int n;
	struct Node * head;
	
	scanf("%d",&n);
	
	head=creat(n);
	print(head);
	
	return 0;
	
}

*/ 


