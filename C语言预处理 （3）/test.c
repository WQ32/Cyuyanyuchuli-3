#include <stdio.h>

// C����
// C����ʵ�����ݽṹ
// C++
// �߼����ݽṹ
// Linuxϵͳ: ����+������
// MySQL

//// define���峣��������Ҫ��Ҫ�ӷֺ�?
//
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//	// ��������ܴ�ӡ����
//	// #define MAX 100;
//	// ʵ�����Ǵ��,����ʵ�൱�� MAX;;�Ͷ��ˣ���������
//	// ����ֵ�൱���� 100������һЩ�������ǻᱨ��ģ��﷨����
//	return 0;
//}

////�����    -  ������ֵݹ�
//
//#define SQUARE(X) X*X
//
//int main()
//{
//	int ret = SQUARE(5);   // ����ȼ��� 5*5
//	printf("%d\n", ret);   // ���25
//	return 0;
//}

//// ���ǽ����Ĳ�����ȫ�滻�������Ǵ���
//
//#define SQLARE(X) X*X
//#define SQLARET(X) X+X
//int main()
//{
//	int ret = SQLARE(5 + 1);
//	printf("%d\n", ret);      // ���Ϊ 11
//	// ��5+1���崫��ȥ���ͱ���� 5+1*5+1 = 11
//	//Ҫ�õ� 6*6
//	//�͸ı��  #define SQLARE(X) (X)*(X)
//	int a = 5;
//	int ret1 = 10 * SQLARET(a);
//	printf("%d\n", ret1);      // ���Ϊ 55
//	//�� a ����ȥ��ret1 = 10 * 5 + 5
//	//Ҫ�õ�100
//	//�͸ı��  #define SQLARET(X) ((X)+(X))
//	return 0;
//}

// ע�⣺��Ԥ����������#define����ķ���ʱ���ַ������������ݲ���������
// ���Ҫ�滻�������Ǳ��ʽ��Ҫע��ʹ������


//// �Ѻ�Ĳ��������ַ�����  
//// #���Ὣ��Ҫ�滻�Ĳ����γ��ַ��������Բ��뵽�ַ�����
//// ���� #X ���γ� "a"
//
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	// ��ӡ  the value of a is 10
//	PRINT(b);
//	//��ӡ   the value of b is 20
//	return 0;
//}

// ##���԰�λ�������ߵķ��źϳ�һ�����ţ�����ӷ����Ƭ���д�����ʶ��

#define CAT(X,Y) X##Y
int main()
{
	int wangzhang = 99;
	// printf("%d\n", wangzhang);
	printf("%d\n", CAT(wang, zhang));
	return 0;
}