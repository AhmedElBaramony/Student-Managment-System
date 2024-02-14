#ifndef CLASSES_H
#define CLASSES_H

#include<iostream>
#include<string>
#include<math.h>
#include<fstream>

using namespace std;

const int maxSize = 211; //choosing a prime number for the size of the hash-table
const int subjectSize = 24; //max number of subjects a student can enroll in (assume 6 subjects/year for 4 years)

//function to bubble sort an array [used to get mode, median and standard deviation]
void quickSort(int arr[],int low, int high);
void sortArray(float Arr[], float ArrSize);
string CalculateGrade(int grade);

class Subject;
class Student;
class StudentGradeChecker;
class subjectList;

void saveToFile(StudentGradeChecker students, subjectList subjects);
void getFromFile(StudentGradeChecker& students, subjectList& subjects);


class Subject{
    struct StudentPair{
        Student *enrolledStudent;
        int grade;
    };
    string name;
    string prerequisite;
    const int maxGrade = 100;
    int creditHours;

    StudentPair students[maxSize];
    int numOfStudents;

public:
    Subject();
    Subject(string n, string pr, int ch);
    void setName(string n);
    void setPrerequisite(string pr);
    void setCreditHours(int ch);

    string getName();
    string getPrerequisite();
    int getCreditHours();
    int getNumOfStudents();
    string getEnrolledStudentName(int index);
    int getStudentGrade(int index);

    void addStudent(Student* s, int grade);
    int searchStudent(int id);
    void removeStudent(int index);

    char CalculateGrade(int index);
    //function to get the mean of grades of a given student
    float getMean();
    //function to get the median of grades of a given student
    float getMedian();
    //function to get the mode of grades of a given student
    float getMode();
    //function to get the standard deviation of grades of a given student
    float getStdDeviation();

    Subject& operator=(Subject& s);
};

class Student{
    struct SubjectPair{
        Subject *enrolledSubject;
        int grade;
    };
    string name;
    int id;
    int year;
    SubjectPair subjects[subjectSize];
    int numOfSubjects; //number of subjects a student has studied

public:
    Student();
    Student(string n, int i, int y);

    void setName(string n);
    void setId(int i);
    void setYear(int y);

    string getName();
    int getId();
    int getYear();
    int getNumOfSubjects();
    string getEnrolledSubjectName(int index);
    int getSubjectGrade(int index);

    void addSubject(Subject* s, int grade);
    int searchSubject(string n);
    void removeSubject(int index);

    float CalculateGpa();

    //function to get the mean of grades of a given student
    float getMean();
    //function to get the median of grades of a given student
    float getMedian();

    //function to get the mode of grades of a given student
    float getMode();

    //function to get the standard deviation of grades of a given student
    float getStdDeviation();
};

class subjectList{
    Subject subjects[subjectSize];
    int Size;
public:
    subjectList();
    int getSize();
    void createSubject(string name, string prerequisite, int creditHours);
    int searchSubject(string name);
    Subject* getSubject(int index);
};

class StudentGradeChecker{
    //creating a student grade checker using hash-tables implementation
    Student arr[maxSize];             //create an array to store the students
    int Size;                         //a variable to keep track of the number of students

public:
    StudentGradeChecker();
    void incrementSize();
    int getSize();
    Student* getStudent(int index);
    int HashFunction(int studentId);
    //adding a student using the id, and solving collision by quadratic probing
    int addStudent(Student s);
    //searching for a student using the id, and solving inequality by quadratic probing
    int searchStudent(int studentId);
    void removeStudent(int studentId);

};

class SGC{
public:
    static StudentGradeChecker sgc;
    static subjectList sl;
};


#endif // CLASSES_H
