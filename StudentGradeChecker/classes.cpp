#include "classes.h"

void sortArray(float Arr[], float ArrSize){
    float temp;
    for(int i=0;i<ArrSize-1;i++)
        for (int j=0;j<ArrSize-i-1;j++)
            if (Arr[j] > Arr[j + 1]) {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
}

void saveToFile(StudentGradeChecker students, subjectList subjects){
    ofstream subjectsFile;
    ofstream studentsFile;
    ofstream student;

    subjectsFile.open("subjects.txt", ios::out);
    studentsFile.open("students.txt", ios::out);

    for(int i=0;i<subjects.getSize();i++){
        subjectsFile << subjects.getSubject(i)->getName() << " "
                     << subjects.getSubject(i)->getPrerequisite() << " "
                     << subjects.getSubject(i)->getCreditHours() << endl;
    }

    for(int i=0;i<maxSize;i++){
        studentsFile << students.getStudent(i)->getName() << " "
                     << students.getStudent(i)->getId() << " "
                     << students.getStudent(i)->getYear() << endl;

        for(int j=0;j<students.getStudent(i)->getNumOfSubjects();j++){
            studentsFile << students.getStudent(i)->getEnrolledSubjectName(j) << " "
                         << students.getStudent(i)->getSubjectGrade(j)<< endl;
        }
        studentsFile << "# -1" <<endl;
    }


    subjectsFile.close();
    studentsFile.close();
}

void getFromFile(StudentGradeChecker& students, subjectList& subjects){
    ifstream subjectsFile;
    ifstream studentsFile;
    ifstream student;

    subjectsFile.open("subjects.txt", ios::in);
    studentsFile.open("students.txt", ios::in);

    string name, prerequisite;
    int creditHours;

    for(int i=0;i<subjectSize;i++){
        subjectsFile >> name >> prerequisite >> creditHours;
        subjects.createSubject(name,prerequisite,creditHours);

    }

    int id, year;
    int grade;

    for(int i=0;i<maxSize;i++){
        studentsFile >> name >> id >> year;
        students.getStudent(i)->setName(name);
        students.getStudent(i)->setId(id);
        students.getStudent(i)->setYear(year);
        if(name!="None")
            students.incrementSize();

        while(studentsFile >> name >> grade){
            if(name == "#" && grade == -1)break;
            students.getStudent(i)->addSubject(subjects.getSubject(subjects.searchSubject(name)),grade);
        }
    }

    subjectsFile.close();
    studentsFile.close();

}

string CalculateGrade(int grade){
    if(grade >= 90)
        return "A";
    if(grade >= 80)
        return "B";
    if(grade >= 70)
        return "C";
    if(grade >= 60)
        return "D";
    else
      return "F";
}

subjectList::subjectList(){
    Size = 0;
}

int subjectList::getSize(){
    return Size;
}

void subjectList::createSubject(string name,string prerequisite, int creditHours){
    Subject s = Subject(name,prerequisite,creditHours);
    subjects[Size] = s;
    Size++;

}

int subjectList::searchSubject(string name){
    for(int i=0;i<Size;i++){
        if(name == subjects[i].getName()){
            return i;
        }
    }
    return -1;
}

Subject* subjectList::getSubject(int index){
    Subject* sub = &subjects[index];
    return sub;
}

Subject::Subject(){
    name = "";
    prerequisite = "";
    creditHours = 0;
    numOfStudents = 0;

}
Subject::Subject(string n, string pr, int ch){
    name = n;
    prerequisite = pr;
    creditHours = ch;
    numOfStudents = 0;
}

void Subject::setName(string n){
    name = n;
}
void Subject::setPrerequisite(string pr){
    prerequisite = pr;
}
void Subject::setCreditHours(int ch){
    creditHours = ch;
}

string Subject::getName(){
    return name;
}

string Subject::getPrerequisite(){
    return prerequisite;
}

int Subject::getCreditHours(){
    return creditHours;
}

int Subject::getNumOfStudents(){
    return numOfStudents;
}

string Subject::getEnrolledStudentName(int index){
    return students[index].enrolledStudent->getName();
}

int Subject::getStudentGrade(int index){
    return students[index].grade;
}

void Subject::addStudent(Student* s, int g){
    students[numOfStudents].enrolledStudent = s;
    students[numOfStudents].grade = g;
    numOfStudents++;
}

int Subject::searchStudent(int id){
    for(int i=0;i<numOfStudents;i++){
        if(students[i].enrolledStudent->getId() == id)
            return i;
    }
    return -1;
}

void Subject::removeStudent(int index){
    for(int i=index;i<numOfStudents-1;i++)
    {
        students[i].enrolledStudent = students[i+1].enrolledStudent;
        students[i].grade = students[i+1].grade;
    }
    students[numOfStudents-1].enrolledStudent = NULL;
    students[numOfStudents-1].grade = 0;

    numOfStudents--;
}

char Subject::CalculateGrade(int index){
    if(students[index].grade >= 90)
        return 'A';
    else if(students[index].grade >= 80)
        return 'B';
    else if(students[index].grade >= 70)
        return 'C';
    else if(students[index].grade >= 60)
        return 'D';
    else if(students[index].grade <60)
        return 'F';
    else
        return 'F';

}

//function to get the mean of grades of a given subject
float Subject::getMean(){
    float sum = 0;
    for(int i=0;i<numOfStudents;i++){
        sum += students[i].grade;
    }
    return sum/(numOfStudents);
}

//function to get the median of grades of a given subject
float Subject::getMedian(){
    float grades[subjectSize];
    for(int i=0;i<numOfStudents;i++)
        grades[i] = students[i].grade;

    sortArray(grades,numOfStudents);
    if(numOfStudents%2!=0)
        return grades[(numOfStudents/2)];
    else
        return (grades[(numOfStudents/2)] + grades[(numOfStudents/2)-1])/2.0;
}

//function to get the mode of grades of a given subject
float Subject::getMode(){
    float grades[subjectSize];
    for(int i=0;i<numOfStudents;i++)
        grades[i] = students[i].grade;

    sortArray(grades,numOfStudents);

    int counter = 0;
    int maxCount = 0;
    int mode = grades[0];
    for (int i = 1; i < numOfStudents - 1; i++){
        if (grades[i] == grades[i-1]){
            counter++;
            if (counter > maxCount){
                mode = grades[i];
                maxCount = counter;
            }
        }
        else
            counter = 0; // Reset counter
    }
    return mode;
}

//function to get the standard deviation of grades of a given subject
float Subject::getStdDeviation(){
    float grades[subjectSize];
    for(int i=0;i<numOfStudents;i++)
        grades[i] = students[i].grade;

    float mean = getMean();
    float sum = 0;
    for(int i=0;i<numOfStudents;i++){
        sum += (grades[i]-mean)*(grades[i]-mean);
    }
    return sqrt(sum/numOfStudents);
}


Subject& Subject::operator=(Subject& s){
    name = s.getName();
    prerequisite = s.getPrerequisite();
    creditHours = s.getCreditHours();
    // Clear the existing students in the subject
    numOfStudents = 0;

    // Copy students from the source subject to the current one
    for(int i = 0; i < s.numOfStudents && i < subjectSize; ++i) {
        students[i].enrolledStudent = s.students[i].enrolledStudent;
        students[i].grade = s.students[i].grade;
        numOfStudents++;
    }

    return *this;
}

Student::Student(){
    name = "";
    id = 0;
    year = 0;
    numOfSubjects = 0;

}

Student::Student(string n, int i, int y){
    name = n;
    id = i;
    year = y;
    numOfSubjects = 0;
}

void Student::setName(string n){
    name = n;
}

void Student::setId(int i){
    id = i;
}

void Student::setYear(int y){
    year = y;
}

string Student::getName(){
    return name;
}

int Student::getId(){
    return id;
}

int Student::getYear(){
    return year;
}

int Student::getNumOfSubjects(){
    return numOfSubjects;
}

string Student::getEnrolledSubjectName(int index){
    return subjects[index].enrolledSubject->getName();
}
int Student::getSubjectGrade(int index){
    return subjects[index].grade;
}

void Student::addSubject(Subject* s, int grade){
    if(numOfSubjects>=subjectSize){
        //add error msg in gui that the student has already graduated
        return;
    }
    if(s->getPrerequisite()!="None" && searchSubject(s->getPrerequisite())==-1){
        //add error msg in gui that the student hasn't taken the prerequisite
        return;
    }
    if(searchSubject(s->getName())!=-1){
        //add error msg in gui that the subject has already been taken
        return;
    }
    if(grade>100){
        //add error msg in gui that the subject has already been taken
        return;
    }
    subjects[numOfSubjects].enrolledSubject = s;
    subjects[numOfSubjects].grade = grade;
    s->addStudent(this,grade);
    numOfSubjects++;

}

int Student::searchSubject(string n){
    for(int i=0;i<numOfSubjects;i++){
        if(subjects[i].enrolledSubject->getName() == n)
            return i;
    }
    return -1;
}

void Student::removeSubject(int index){

    int studindex = subjects[index].enrolledSubject->searchStudent(id);
    subjects[index].enrolledSubject->removeStudent(studindex);
    //Also need to remove all of the following subjects which that subject is a prerequisite


    for(int i=index;i<numOfSubjects-1;i++)
    {
        subjects[i].enrolledSubject = subjects[i+1].enrolledSubject;
        subjects[i].grade = subjects[i+1].grade;
    }
    subjects[numOfSubjects-1].enrolledSubject = NULL;
    subjects[numOfSubjects-1].grade = 0;
    numOfSubjects--;
}

float Student::CalculateGpa(){
    if(numOfSubjects<1) return 0;
    float sum = 0, maxSum = 0;
    for(int i=0;i<numOfSubjects;i++){
        maxSum += (100*(subjects[i].enrolledSubject->getCreditHours()));
        sum += (subjects[i].grade * subjects[i].enrolledSubject->getCreditHours());
    }
    return 4*(sum/maxSum);
}

//function to get the mean of grades of a given student
float Student::getMean(){
    float sum = 0;
    for(int i=0;i<numOfSubjects;i++){
        sum += subjects[i].grade;
    }
    return sum/(numOfSubjects);
}
//function to get the median of grades of a given student
float Student::getMedian(){
    float grades[subjectSize];
    for(int i=0;i<numOfSubjects;i++)
        grades[i] = subjects[i].grade;

    sortArray(grades,numOfSubjects);
    if(numOfSubjects%2!=0)
        return grades[(numOfSubjects/2)];
    else
        return (grades[(numOfSubjects/2)] + grades[(numOfSubjects/2)-1])/2.0;
}
//function to get the mode of grades of a given student
float Student::getMode(){
    float grades[subjectSize];
    for(int i=0;i<numOfSubjects;i++)
        grades[i] = subjects[i].grade;

    sortArray(grades,numOfSubjects);

    int counter = 0;
    int maxCount = 0;
    int mode = grades[0];
    for (int i = 1; i < numOfSubjects - 1; i++){
        if (grades[i] == grades[i-1]){
            counter++;
            if (counter > maxCount){
                mode = grades[i];
                maxCount = counter;
            }
        }
        else
            counter = 0; // Reset counter
    }
    return mode;
}
//function to get the standard deviation of grades of a given student
float Student::getStdDeviation(){
    float grades[subjectSize];
    for(int i=0;i<numOfSubjects;i++)
        grades[i] = subjects[i].grade;

    float mean = getMean();
    float sum = 0;
    for(int i=0;i<numOfSubjects;i++){
        sum += (grades[i]-mean)*(grades[i]-mean);
    }
    return sqrt(sum/numOfSubjects);
}

StudentGradeChecker::StudentGradeChecker(){
    Size = 0;
    for(int i=0;i<maxSize;i++){
        arr[i].setId(-1);
        arr[i].setName("None");
    }
}

void StudentGradeChecker::incrementSize(){
    Size++;
}

int StudentGradeChecker::getSize(){
    return Size;
}

Student* StudentGradeChecker::getStudent(int index){
    Student* stud = &arr[index];
    return stud;
}

int StudentGradeChecker::HashFunction(int studentId){
    int index = studentId%maxSize;
    return index;
}
//adding a student using the id, and solving collision by quadratic probing
int StudentGradeChecker::addStudent(Student s){
    if(Size>=maxSize) return -2;
    int index = HashFunction(s.getId());
    int quadProb = 1;
    int originalId = index;

    while(arr[index].getId() != -1 && arr[index].getId() != -2){
        if(s.getId() == arr[index].getId())
            return -1;
        index = (originalId+(quadProb*quadProb))%maxSize;
        quadProb++;
    }
    arr[index] = s;
    Size++;
    return 1;
}
//searching for a student using the id, and solving inequality by quadratic probing
int StudentGradeChecker::searchStudent(int studentId){
    int index = HashFunction(studentId);
    int quadProb = 1;
    int originalId = index;

    int itirations = 0; //to make sure
    while(arr[index].getId() != studentId){
        if(itirations>=maxSize){
            index = -1;
            break;
        }
        index = (originalId+(quadProb*quadProb))%maxSize;
        itirations++;
        quadProb++;
    }
    return index;
}
void StudentGradeChecker::removeStudent(int studentId){
    if(Size==0) return; //return if the array is empty
    int index = searchStudent(studentId);
    if(index==-1) return; //return if the student doesn't exist

    //reset all fields of the student from the array
    arr[index].setId(-2);
    arr[index].setYear(0);
    arr[index].setName("None");
    while(arr[index].getNumOfSubjects() != 0)
        arr[index].removeSubject(arr[index].getNumOfSubjects()-1);
    Size--;

}

StudentGradeChecker SGC::sgc;
subjectList SGC::sl;
