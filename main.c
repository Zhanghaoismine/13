#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	int ID;
	char name[100];
	float score;
};

int main(int argc, char *argv[]) {
	struct student s1= {123, "EUNGYO", 2.3};
	
	s1.ID =123456;
	s1.name[0]='c';
	s1.score=3.5;
	
	printf("ID: %i\n", s1.ID);
	printf("name: %s\n", s1.name);
	printf("score: %f\n", s1.score);
	
	strcpy(s1.name, "seyoung");
	printf("name2: %s\n", s1.name);
	return 0;
}
