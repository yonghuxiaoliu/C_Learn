#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һЩѧ�������ݣ����֣����䣬�绰���Ա�
// structΪ�ṹ��ؼ��֣�stu��Ϊ�ṹ���ǩ
//struct stu Ϊ�ṹ������
//struct stu  //�ṹ������������һ���ṹ�����ͣ�------ͼֽ����ռneicun
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1 s2 s3������(ȫ��) �ṹ�����


//typedef struct stu  //typedef��struct stu����Ϊstu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;  
//
//int main() {
//	struct stu s1;//�ṹ�嶨��(�����ṹ�������(�ֲ���
//	s1 = { "����",20,"12345678912","��"};//��ʼ��
//	stu s2 = {"����",22,"1456789235","����"};
//	return 0;
//}






//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;//�ṹ��Ƕ��
//	char* pc;
//};
//
//int main(){
//	char arr[] = "hello world";
//	struct T t = { "azhe",{3,'w',"���ǽṹ��",3.014},arr};
//	printf("%s\n%d\n%s\n", t.ch, t.s.a,t.s.arr);
//	return 0;
//
//}






typedef struct stu  //typedef��struct stu����Ϊstu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;  

void my_print1(stu tmp) {//�������stu���ͣ�����Ҳ��stu
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}

void my_print2(stu* ps) {//ps��ָ��stu���͵�ָ��
	//printf("name:%s\n", (*ps).name);
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);

}
int main() {//my_print���ţ�����Ľ��ǽṹ���ַ
	stu s = { "����",40,"18334540760","��" };
	//my_print1(s);
	my_print2(&s);//����ַ
	return 0;
}