#include <stdio.h>


/* 
//0601 �����������ֵ��
//���������һ�����������������������ֵ�����������и���������������֤����ƺ�������ȷ�ԡ�
//������ʽ������һ�У�����Ϊ����������
//�����ʽ�����һ�У�Ϊ�������е��������
//�������룺12 15 9
//���������15
int max_value(int x,int y,int z)
{
	
	int max=x;
	if(y>max) max=y;
	if(z>max) max=z;
	
	return max;	

}

int main()
{
	int a, b,c;
	
	scanf("%d%d%d",&a,&b,&c);

	printf("%d",max_value(a,b,c));	
	
	return 0;
} 
*/ 



/*
//0602  ����
//�����������������10�������������򣬰���С�����˳�������Ҫ�������������������ɡ����������н�����֤��
//������ʽ���������һ�У���10������������֮���ɿո�ָ���
//�����ʽ����ͬһ��������ź����10����������֮���ɿո�ָ���
//�������룺25 48 13 27 68 76 43 20 9 65
//���������3 13 20 25 27 43 48 65 68 76

void sort(int a[],int n)
{
		int i,j,t;
		
		for(i=0;i<n-1;i++)
		{
			
			for(j=0;j<n-1-i;j++)
				if(a[j]>a[j+1])
				{
					t=a[j]; a[j]=a[j+1]; a[j+1]=t;
				}
		}
		
} 


int main()
{
	int b[10],i;
	
	for(i=0;i<10;i++)
		scanf("%d",&b[i]);
	sort(b,10);//ʵ�ε�����˳��Ҫ���β�һ�� 
	for(i=0;i<10;i++)
		printf("%d ",b[i]);
		
	return 0;
 } 
 */





/*
//0603 �ж�����
//�����������ж���������������������һ������1��������������Ƿ���������
//������ʽ������һ�У�����1����������
//�����ʽ�����һ�У����������������YES���������NO��
//��������:11
//���������YES
#include <math.h> 
int  panduan(int n)
{
	
	int i,k=sqrt(n);//k=n��ƽ����	
	for(i=2;i<=k;i++)
		if(n%i==0) break;
	if(i>=k+1)
		return 1;
	else return 0;
	
}

int main()
{
	int	a;
	scanf("%d",&a);
	if(panduan(a)==1)
		printf("YES\n");
	else printf("NO");
	return 0;	
}
*/



/*
//0604 ͳ�Ƹ���
//������������дһ����������ʵ�δ������ַ�����ͳ���ַ�������ĸ�ĸ��������������������ַ�������������
//������ʽ������һ���ַ�����
//�����ʽ������ַ�������ĸ�ĸ�����
//�������룺 Myname is tom
//���������11
#include <string.h>
int count(char str[])
{
	int i,n=0;
	
	for(i=0;str[i]!='\0';i++)
		if('a'<=str[i] && str[i]<='z' ||'A'<=str[i] && str[i]<='Z')
			n++;
	return n;
		
}

int main()
{
	char c[20];
	
	gets(c);
	
	printf("%d\n",count(c));
	
	return 0;
}

*/






/*
//0605 Ѱ���±�
//������������֪һ����������x[]�����е�Ԫ�ر˴˶�����ͬ���ҳ��������������Ƿ���һ��Ԫ������x[i]=i�Ĺ�ϵ�������±��0��ʼ��
//			��x[]={-5,-2,7,3,0,6}����x[3]=3�����һ����������������⣬�����main()���飻
//������ʽ����һ�а���һ������n(0<n<100),��ʾ������Ԫ�صĸ������ڶ��а���n�����������α�ʾ�����е�Ԫ�ء�
//�����ʽ�����Ϊһ������������x[i]=i��Ԫ�أ����ж��Ԫ�����㣬�����һ�������Ԫ�أ���û�У������N��
//�������룺6
//			-2 -1 7 3 4 8
//�������	3
int judge(int x[],int n)
{
	int i,re=-1;
	if(0<n<100)
		for(i=0;i<n;i++)
		{
			if(x[i]==i)
			{
		
				re=i;
				break;
			}
			
		}
		return re;

}


int main()
{
	int n, a[100],i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		
		scanf("%d",&a[i]);
		
	if (judge(a,n)>=0)
		printf("%d\n",judge(a,n));
	else
		printf("N\n");
		
	return 0;
}

*/






















 


 
 