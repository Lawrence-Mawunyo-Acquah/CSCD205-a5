

#include <iostream>
#include<fstream>
using namespace std;

struct student{
string id;
string name;
int age;
char gender;
char grade;
int score;

};

int main()
{
ofstream mywork;
mywork.open("student.txt");

double avgAge, avgScore;

mywork<<"id "<<"name "<<"age "<<"gender "<<"grade "<<"score "<<endl;

student details[5];

for(int k=0; k<5; k++)
{
cout<<"enter student id     ";
cin>>details[k].id;

cout<<"enter student name   ";
cin>>details[k].name;

cout<<"enter student age    ";
cin>>details[k].age;

cout<<"enter student gender     ";
cin>>details[k].gender;

cout<<"enter student score      ";
cin>>details[k].score;

avgAge += details[k].age;
avgScore += details[k].score;

cout<<endl<<endl;

if(details[k].score>=80 && details[k].score<=100)
    {
     details[k].grade='A';
    }

    else if (details[k].score>=70 && details[k].score<80)
    {
            details[k].grade='B';
    }

    else if (details[k].score>=60 && details[k].score<70)
    {
    details[k].grade='C';
    }
    else if (details[k].score>=50 && details[k].score<60)
    {
    details[k].grade='D';
    }

    else if (details[k].score>=40 && details[k].score<50)
    {
    details[k].grade='E';
    }

    else if (details[k].score>=0 && details[k].score<40)
    {
    details[k].grade='F';
    }

mywork<<k+1<<". "<<details[k].id<<" "<<details[k].name<<" "<<details[k].gender<<" "<<details[k].age<<" "<<details[k].score<<endl;

}

mywork<<"average age= "<<avgAge/5<<endl;
mywork<<"average score= "<<avgScore/5<<endl;


    return 0;
}
