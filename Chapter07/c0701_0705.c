#include <stdio.h>
////////////////////////////////ָ����Է��ض��ֵ/////////////////// 
/*
//�������
//����������������������������С�����˳���������ָ�뷽��ʵ�֡�
//����һ�У�ֻ��������������
//�����ʽ�����һ�У���С�����˳�������������������������֮���Կո�ָ���
//�������룺3 2 1
//���������1 2 3

void sort(int *p1,int *p2,int *p3)
{
	int t;
	if(*p1>*p2)
	{
		t=*p1,*p1=*p2,*p2=t;
	}
	if(*p1>*p3)
	{
		t=*p1,*p1=*p3,*p3=t;
	}
	if(*p2>*p3)
	{
		t=*p2,*p2=*p3,*p3=t;
	}
	
	
}


int main()
{
	int a,b,c;
	
	scanf("%d%d%d",&a,&b,&c); 

	sort(&a,&b,&c);//���ݱ�����ַ���β�ָ�� 
	
	printf("%d %d %d\n",a,b,c);
	
	return 0; 
}
*/




/*
//0702 ��ƽ���ɼ�
//����������ĳ����ĩ���Ժ�Ҫͳ�Ʊ���ĳ�ſγ̵�ƽ���ɼ�����߳ɼ�����ͳɼ���������������30�ˣ�ʵ�֣�����߳ɼ�����ͳɼ���ƽ���ɼ���
//������ʽ�� һ��������ݣ���һ��Ϊһ������N����ʾ������N���ˣ�N>30��,��������N����ÿ��һ����������ʾһ���˵ĳɼ���
//�����ʽ�����һ�С����а������������ֱ��ǣ���߳ɼ�����ͳɼ���ƽ���ɼ����ɼ�֮���ɿո�ָ�������ƽ���ɼ�Ϊʵ��������ȷ��С�������λ��
//��������: 5
//			90
//			83
//			76
//			85
//			62
//���������90 62 79.20 

void count(int a[],int n,int *pa,int *pi,float *pav)
{
	
	int i;
	float ave=0;
	
	*pa=*pi=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>*pa) *pa=a[i];
		if(a[i]<*pi) *pi=a[i];
		ave=ave+a[i];
		
	}
	
	ave=ave/n;
	*pav=ave;
	
	
 } 

 
 int main()
 {
 	int N,score[30],i,max,min;
 	float aver;
 	
 	scanf("%d",&N);
 	for(i=0;i<N;i++)
 		scanf("%d",&score[i]);
 	
	count(score,N,&max,&min,&aver); 	
	
	printf("%d %d %.2f\n",max,min,aver);
	
	return 0;
 }
 
*/








//0703 ͳ�Ƹ����ַ�
/*
��������������һ�����֣��ҳ����д�д��ĸ��Сд��ĸ���ո������Լ������ַ����ж��ٸ�����ָ�뷽��ʵ�֡�
������ʽ������һ�У�����һ���ַ�����
�����ʽ�����һ�У���� ��д��ĸ��Сд��ĸ���ո����ּ������ַ������ٸ���������ֵ�Կո�ָ���
�������룺It is a dog. 2 or 3 year old?
���������1 17 8 2 2  
*/
/* 
#define N 100
#include <string.h>
void count(char *p,int *pdx,int *pxx,int *pkg, int *psz, int *pqt)
{
	char c;
	while((c=*p++)!='\0')
	{
		if('A'<=c && c<='Z') (*pdx)++;
		else if('a'<=c && c<='z') (*pxx)++;
		else if(c==' ') (*pkg)++;
		else if('0'<=c && c<='9') (*psz)++;
		else (*pqt)++;
	}
	
	
} 

int main()
{
	
	char str[N];
	int dx=0,xx=0,kg=0,sz=0,qt=0;
	
	gets(str);//�����ո�������gets
	
	count(str,&dx,&xx,&kg,&sz,&qt);
	
	printf("%d %d %d %d %d\n ",dx,xx,kg,sz,qt); 
	
	return 0;
	
}
*/
 
 



/*
//0704 �ַ�����
//��������������һ���ַ������ҳ�������С�ַ��ʹ���С�ַ��������������ַ������������Ľ����
//������ʽ������һ�У�����һ���ַ�����
//�����ʽ�����һ�У�Ϊ����֮����ַ�����
//�������룺whfejkbui
//���������whfbjkeui
#define N 100
#include <string.h> 
void change(char *p)
{
	char temp, *pm, *pk;
	pm=p;pk=p;
	
	while((*p)!='\0')
	{
		if(*p<*pm)
		{
			pk=pm;
			pm=p;
		}
			else
		if(*p<*pk) pk=p;
		p++;
	
	}
	temp=*pm;*pm=*pk;*pk=temp;
 } 


int main()
{
	char a[N];
	
	gets(a);
	
	change(a);
	
	printf("%s\n",a);
	
	return 0;
}

*/







/*
// 0705 �ַ����Ƚ�
//�������������ַ����ȽϹ��̶Ը����������ַ������бȽϣ����������Ϊ0������������Ϊ��Ӧ�����ַ��Ĳ��Ҫ��ʵ�ֶԸ����ַ����ıȽϡ�
//			Ҫ��������ú���ʵ�������ַ����ıȽ� int stringcmp(char *str1, char *str2)
//������ʽ����һ��Ϊһ������N����ʾ�������ݵ���������������N����ÿ�а��������ַ������ַ���֮���ɿո�ָ���
//�����ʽ�������N�У�ÿ��Ϊ��Ӧ����һ�е������ַ����ıȽϽ����
//�������룺3
//			Happy Help
//			Help Help
//			Help Happy
//���������-4
//			0
//			4 
#define M 100
int stringcmp(char *str1, char *str2)
{
	
	int i,re;
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[i])
		{
			re=0;continue;
		}
		else
		{
			re=str1[i]-str2[i];
			break;
		}
	}
	return re;
	
}

int main()
{
	
	int N,result[20],i;
	char string1[M],string2[M];
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s%s",string1,string2);
		result[i]=stringcmp(string1,string2);
		
	}
	
	for(i=0;i<N;i++)
		printf("%d\n",result[i]);
	
	return 0;
}

*/
















































 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 



