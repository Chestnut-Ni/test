//��ѡ�񷨶�10����������
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int i,j,tmp;
//	printf("����10������\n"); 
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<10;i++)
//	{
//		for(j=i;j<10;j++)
//		{
//			if(arr[i]>arr[j]) 
//			{
//				tmp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=tmp;
//			}
//		}
//	}
//	printf("����");
//	for(i=0;i<10;i++)
//		printf("%d ",arr[i]);
//	return 0;
// } 

//��15���������һ�������У�����һ������Ҫ�����۰���ҷ��ҳ������������еڼ���Ԫ�ص�ֵ��
//����������������У���������޴�������15�����ø���ֵ�ķ����ڳ����и�����Ҫ�ҵ�����scanf�������롣
//#include<stdio.h>
//int search(int*a,int n,int len)
//{
//	int left=0;
//	int right=len-1;
//	while(left<=right)
//	{
//		int middle=(left+right)/2;
//		if(a[middle]>n)
//			left=middle+1;
//		else
//			if(a[middle]<n)
//			right=middle-1;
//		else
//			return middle;
//	}
//	return -1;
//}
//int main()
//{
//	int ret,n;
//	int a[15] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};
//	int len=sizeof(a)/sizeof(a[0]);
//	printf("������Ҫ���ҵ���n��");
//	scanf("%d", &n);
//	ret=search(a,n,len);
//	if(ret==-1)
//		printf("�޴���\n");
//	return 0;
//}

//�������ַ���������������Ҫ��strcat����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int m=0;
//	int k=0;
//	char a1[1000]="hello";
//	char a2[]="world";
//	int i=strlen(a1)-1;
//	int j=strlen(a2)-1;
//	while(a2[m]!='\0')
//	{
//		a1[i+1+k]=a2[m];
//		k++;
//		m++;
//	}
//	printf("%s",a1);
//	return 0;
//}

//�ҳ�һ����ά����ġ����㡱������λ���ϵĻ�Ԫ���ڸ���������ڸ�������С��Ҳ����û�а��㡣
//#include<stdio.h>
//int main()
//{
//	//int max=0;
//	int i=0,j=0,k=0;
//	int tmp;
//	int flag=0;
//	int arr[3][4]={{9,80,205,40},{90,-60,96,1},{210,-3,101,89}};
//	for(i=0;i<3;i++)
//	{
//		int max=0;
//		for(j=0;j<4;j++)
//		{
//			if(arr[i][j]>max)
//			{
//				max=arr[i][j];
//				tmp=j;
//			}
//		}
//		for(k=0;k<3;k++)
//		{
//			if(max>arr[k][tmp])
//			{
//				break;
//			}
//		}
//		if(k==3)
//		{
//			printf("������%d��%d��ֵΪ%d\n",i,tmp,arr[i][tmp]);
//			flag=1;
//			break;
//		}
//	}
//	if(flag!=1)
//	{
//		printf("�ް���\n");
//	}
//	return 0;
//}