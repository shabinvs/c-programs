
#include <stdio.h>

struct student {
	char name[100];
	int roll_no;
	float marks;
};

int main()
{

    struct student students[3];

	for(int i=0; i<3; i++) {
		printf("enter the details for student %d ",i+1);

		printf("name: ");
		fgets(students[i].name, sizeof(students[i].name), stdin);

		printf("roll no: ");
		scanf("%d",&students[i].roll_no);

		printf("marks: ");
		scanf("%f",&students[i].marks);
		
		getchar();
		
	}
	
	printf("--------student details---------\n");
	for(int i=0; i<3; i++){
	    printf("\nStudent %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
	}


	return 0;
}
