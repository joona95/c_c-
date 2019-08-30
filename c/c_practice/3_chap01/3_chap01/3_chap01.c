#include<stdio.h>
/*문제1번, 2번
struct student 
{
	int id;
	char bltype[3];
	double lefteye;
	double righteye;
	int kg;
};
*/

//문제3번, 4번, 5번, 10번
struct point
{
	int x;
	int y;
};


/*문제6번
struct student
{
	int id;
	char name[10];
	double height;
};
*/

/*문제7번
struct node
{
	int data;
	struct node* link;
};
*/

/*문제8번
struct student
{
	char name[10];
	int grade;
	struct student* left_link;
	struct student* right_link;
};
*/

/*문제9번
struct node
{
	int data;
	struct node* left_link;
	struct node* right_link;
};
*/


void func1(struct point p);
void func2(struct point* p);


int main()
{
	/*문제1번, 2번
	struct student stu[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 학생의 학번 : ",i+1);
		scanf("%d", &stu[i].id);
		printf("%d번째 학생의 혈액형 : ",i+1);
		scanf("%s", stu[i].bltype);
		printf("%d번째 학생의 시력(왼, 오) : ",i+1);
		scanf("%lf %lf", &stu[i].lefteye, &stu[i].righteye);
		printf("%d번째 학생의 몸무게 : ",i+1);
		scanf("%d", &stu[i].kg);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 학생의 학번 : %d \n",i+1,stu[i].id);
		printf("%d번째 학생의 혈액형 : %s \n",i+1,stu[i].bltype);
		printf("%d번째 학생의 시력(왼, 오) : %.1lf %.1lf \n",i+1,stu[i].lefteye,stu[i].righteye);
		printf("%d번째 학생의 몸무게 : %d \n",i+1,stu[i].kg);
	}
	*/


	/*문제3번
	struct point p;
	p.x = 3;
	p.y = 4;
	printf("%d %d \n", p.x, p.y);
	printf("%x %x %x \n", &p, &p.x, &p.y);
	*/

	/*문제4번
	struct point s1;
	struct point* sp = NULL;

	sp = &s1;	
	s1.x = 10;
	s1.y = 10;

	printf("%d %d \n", s1.x, s1.y);
	printf("%d %d \n", sp->x, sp->y);
	printf("%d %d \n", (*sp).x, (*sp).y);
	*/

	/*문제5번
	struct point array[2] = { 1,1,2,2 };
	struct point* p = NULL;

	p = array;
	printf("%d %d \n", array[0].x, array[0].y);
	printf("%d %d \n", array[1].x, array[1].y);

	printf("%d %d \n", p[0].x, p[0].y);
	printf("%d %d \n", p[1].x, p[1].y);

	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (p + 1)->x, (p + 1)->y);
	*/

	/*문제6번
	struct student stu = { 20101323,"Park",160 };
	struct student* p = NULL;
	struct student** pp = NULL;

	p = &stu;
	pp = &p;

	printf("%d %s %lf \n", stu.id, stu.name, stu.height);
	printf("%d %s %lf \n", p->id, p->name, p->height);
	printf("%d %s %lf \n", (*p).id, (*p).name, (*p).height);
	printf("%d %s %lf \n", (*pp)->id, (*pp)->name, (*pp)->height);
	printf("%d %s %lf \n", (**pp).id, (**pp).name, (**pp).height);
	*/
	
	/*문제7번
	struct node n1, n2, n3;

	n1.data = 10;
	n1.link = &n2;
	n2.data = 10;
	n2.link = &n1;
	n3.data = 10;
	n3.link = &n3;

	printf("%d %d %d \n", n1.data, n2.data, n3.data);
	printf("%d %d %d \n", n2.link->data, n1.link->data, n3.link->data);
	*/
	
	/*문제8번
	struct student stu1 = { "Kim",90,NULL,NULL };
	struct student stu2 = { "Lee",80,NULL,NULL };
	struct student stu3 = { "Goo",60,NULL,NULL };

	stu1.left_link = &stu2;
	stu1.right_link = &stu3;

	printf("%s %d \n", stu1.name, stu1.grade);
	printf("%s %d \n", stu1.left_link->name, stu1.left_link->grade);
	printf("%s %d \n", stu1.right_link->name, stu1.right_link->grade);
	*/

	/*문제9번
	struct node n1 = { 10,NULL,NULL };
	struct node n2 = { 20,NULL,NULL };
	struct node n3 = { 30,NULL,NULL };
	struct node n4 = { 40,NULL,NULL };
	struct node n5 = { 50,NULL,NULL };
	struct node n6 = { 60,NULL,NULL };
	struct node n7 = { 70,NULL,NULL };

	n1.left_link = &n2;
	n1.right_link = &n3;
	n2.left_link = &n4;
	n2.right_link = &n5;
	n3.left_link = &n6;
	n3.right_link = &n7;
	*/


	//문제10번
	struct point p1 = { 10,10 };
	struct point p2 = { 20,20 };

	func1(p1);
	func2(&p2);

	return 0;
}

void func1(struct point p)
{
	printf("%d %d \n", p.x, p.y);
}

void func2(struct point* p)
{
	printf("%d %d \n", (*p).x, (*p).y);
}