#include <stdio.h>

int main() {
    struct student {
        int gradeLevel;
        int grade;
        int averageScore;
        char *name;
        int heightInInches;
        int weightInPounds;
    };
    
    struct student someStudent;
    someStudent.gradeLevel = 4;
    someStudent.grade = 74;
    someStudent.heightInInches = 60;
    someStudent.weightInPounds = 100;
    someStudent.name = "Bart Simpson";
    
    printf("the first student's name is:  %s\n", someStudent.name);
    printf("the first student's grade aveage is:  %d\n", someStudent.grade);
    
    struct student someOtherStudent;
    someOtherStudent.gradeLevel = 2;
    someOtherStudent.grade = 105;
    someOtherStudent.heightInInches = 50;
    someOtherStudent.weightInPounds = 80;
    someOtherStudent.name = "Lisa Simpson";
    
    printf("the second student's name is:  %s\n", someOtherStudent.name);
    printf("the second student's grade aveage is:  %d\n", someOtherStudent.grade);
    
    struct student someThirdStudent;
    someThirdStudent.gradeLevel = 0;
    someThirdStudent.grade = 0;
    someThirdStudent.heightInInches = 30;
    someThirdStudent.weightInPounds = 4;
    someThirdStudent.name = "Maggie Simpson";
    printf("the second student's name is:  %s\n", someThirdStudent.name);
    printf("the second student's grade aveage is:  %d\n", someThirdStudent.grade);

    
    printf("student grades:  %d %d %d\n", someStudent.grade, someOtherStudent.grade, someThirdStudent.grade);
}