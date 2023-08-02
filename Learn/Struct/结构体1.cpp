#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//描述一些学生的数据，名字，年龄，电话，性别
// struct为结构体关键字，stu成为结构体标签
//struct stu 为结构体类型
//struct stu  //结构体声明（定义一个结构体类型）------图纸，不占neicun
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1 s2 s3是三个(全局) 结构体变量


//typedef struct stu  //typedef将struct stu命名为stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;  
//
//int main() {
//	struct stu s1;//结构体定义(创建结构体变量）(局部）
//	s1 = { "张三",20,"12345678912","男"};//初始化
//	stu s2 = {"旺财",22,"1456789235","保密"};
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
//	struct S s;//结构体嵌套
//	char* pc;
//};
//
//int main(){
//	char arr[] = "hello world";
//	struct T t = { "azhe",{3,'w',"这是结构体",3.014},arr};
//	printf("%s\n%d\n%s\n", t.ch, t.s.a,t.s.arr);
//	return 0;
//
//}






typedef struct stu  //typedef将struct stu命名为stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;  

void my_print1(stu tmp) {//传入的是stu类型，接收也是stu
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}

void my_print2(stu* ps) {//ps是指向stu类型的指针
	//printf("name:%s\n", (*ps).name);
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);

}
int main() {//my_print更优，传入的仅是结构体地址
	stu s = { "李四",40,"18334540760","男" };
	//my_print1(s);
	my_print2(&s);//传地址
	return 0;
}