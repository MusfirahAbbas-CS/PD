#include <iostream>
using namespace std;
float calclateAverage(float marksEnglish, float marksMath, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main()
{

    float marksEnglish; 
    float marksMath;
    float marksChemistry; 
    float marksSocialScience; 
    float marksBiology;
    string name;
    float average;
    cout <<"Enter student name: ";
    cin >> name;
    cout <<"Enter marks for English: ";
    cin >>marksEnglish;
    cout <<"Enter marks for Maths: ";
    cin >>marksMath;
    cout <<"Enter marks for Chemistry: ";
    cin >>marksChemistry;
    cout <<"Enter marks for Social Studies: ";
    cin >>marksSocialScience;
    cout <<"Enter marks for Biology: ";
    cin >>marksBiology;
    average=calclateAverage(marksEnglish, marksMath,marksChemistry,marksSocialScience, marksBiology);
    cout << "student name: "<<name;
    cout << "Percentage: "<<average;
    cout << "\nGrade: "<<calculateGrade(average);
}
float calclateAverage(float marksEnglish, float marksMath, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float aver;
    float average;
    aver=(marksEnglish + marksMath + marksChemistry + marksSocialScience + marksBiology)/500;
    average=aver*100;
    return average;
}
string calculateGrade(float average)
{
    string grade;
    if (average >=90 && average <=100)
    {
        grade = "A+";
    }
    if (average >= 80 && average <=90 )
    {
        grade = "A";
    }
    if (average >= 70 && average <=80)
    {
        grade = "B+";
    }
    if (average >= 60 && average <=70)
    {
        grade = "B";
    }
    if (average >= 50 && average <=60)
    {
        grade = "C";
    }
    if (average >=40 && average<=50)
    {
        grade = "D";
    }
    if(average <40)
    {
        grade = "F";
    }
    return grade;

}

