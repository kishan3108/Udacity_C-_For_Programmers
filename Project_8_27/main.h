

//main.h

class Student
{

    int studentID;
    int grades[10];

public:
    Student(){
        studentID=0;
        for(int i=0; i<6; i++) {
            grades[i] = 0;
        }
    }
    void setStudentID(int id){
        studentID = id;
    }
    void setGrade(int id, int gd){
        studentID=id;
        grades[studentID]=gd;
    }
    int * getGrades(){
        return grades;
    }

    int getGrade(int id){
        return grades[id];
    }

    void printGrades(){
        std::cout<<studentID<<"  "<<std::endl;
        for(int i=0; i<10; i++){
            std::cout<<grades[i]<<std::endl;
        }
    }

    int sortGrades(){
        int temp;
        for(int i=0; i<10; i++){
            for(int j=i+1; j<10;j++){
                if(grades[i]>grades[j]){
                    temp=grades[i];
                    grades[i]=grades[j];
                    grades[j]=temp;
                }
            }
        }
    }

    int getMin(){
        int min=60;
        for(int i=0; i<6; i++){
            if(grades[i]<min){
                min=grades[i];
            }
        }
        return min;

        //sortGrades();
        //return Grades[9];
    }
    int getMax(){
        int max=0;
        for(int i=0; i<6; i++){
            if(grades[i]>max){
                max=grades[i];
            }
        }
        return max;

        //sortGrades();
        //return Grades[0];
    }
    float getAverageGrade(){
        int sum=0;
        for(int i=0; i<6; i++){
            sum += grades[i];
        }
        return sum/6.;
    }
};

//********************
class CourseEnrollment
{
public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];

public:
    int * getAllGrades(){
        int k=0;
        for(int i=0; i<6; i++){
            for(int j=0; j<10; j++){
                grades[k]=students[i].getGrade(j);
                k++;
            }

        }
    }

    int *sortAllGrades(){
        int temp;
        for(int i=0; i<10; i++){
            for(int j=i+1; j<10;j++){
                if(grades[i]>grades[j]){
                 temp=grades[i];
                 grades[i]=grades[j];
                 grades[j]=temp;
                }
            }
        }
        return grades;
    }
    float getAvgGrade(){
        int sum=0;
        for(int i=0; i<6; i++){
            sum += grades[i];
        }
        return sum/6.;
    }
    int getMaxGrade(){
        int max=0;
        for(int i=0; i<6; i++){
            if(grades[i]>max){
                max=grades[i];
            }
        }
        return max;
    }

    int getMinGrade(){
        int min=60;
        for(int i=0; i<6; i++){
            if(grades[i]<min){
                min=grades[i];
            }
        }
        return min;
    }
    float getAverageGrade(){
        int sum=0;
        for(int i=0; i<6; i++){
            sum += grades[i];
        }
        return sum/60.;
    }
    void printAllGrades()
    {
        for(int i=0;i<60;i++)
        {
            std::cout<<"grade="<<grades[i]<<"\n";
        }
    }

    void addStudents(Student * studentIn){
        for(int i = 0;i<6;i++)
        {
            students[i] = studentIn[i];
        }
    }
};