#include <stdio.h>


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

