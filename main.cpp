#include <iostream>
#include "CenterClass.cpp"

using namespace std;

int main()
{
    dateTime *dt1 = new dateTime(2,2,2021,2.5);
    //dateTime *dt = new dateTime("");

                                // Curriculum //

    Quiz *quiz1 = new Quiz("");
    Quiz *quiz2 = new Quiz("");
    vector<Quiz*> quizzes = {quiz1, quiz2};
    lectrue *lectrue1 = new lectrue("");
    lectrue *lectrue2 = new lectrue("");
    vector<lectrue*> lectrues = {lectrue1, lectrue2};
    assignment *ass1 = new assignment("");
    assignment *ass2 = new assignment("");
    vector<assignment*> assignments = {ass1, ass2};
    courses *course1 = new courses("");
    vector<double> student_grades;


                                    // Human //

    parent *parent1 = new parent("");
    student *student1 = new student("");
    student *student2 = new student("");
    teacher *teacher1 = new teacher("");
    manager *manager1 = new manager("Gamal","24678914");



    manager1->addTeacher(teacher1, "Banhawy","73485691");
    manager1->addStudent(student1,"Ammar","2348567689", parent1);
    manager1->addStudent(student2,"sherif","494573681", parent1);
    vector<student*> students = {student1, student2};

    manager1->addParent(parent1,"Ismail","149578235");
    manager1->addCourses(course1, "csci217", dt1, teacher1);

    teacher1->addLecture(lectrue1, "lecture1", "lecture1.txt", teacher1, course1);
    teacher1->addQuiz(quiz1,"quiz1","quiz1.txt","quiz1_model_answer.txt",dt1, 1000, teacher1, course1);
    teacher1->addAssignment(ass1,"ass1","ass1.txt","ass1_model_answer.txt",dt1, teacher1, course1);


    //teacher1->modifyQuiz(quiz1, 2);
    //student1->solve_quiz(quiz1);
    //teacher1->modifyAssignment(ass1,2);
    //student1->solve_ass(ass1);
    //teacher1->modifyLecture(lectrue1);
    //parent1->show_grades(student1);

    CenterClass *center;

    while (true)
    {
        //cout<<"What is your name?"<<endl;
        string name = "alaa";//cin>> name;
        //cout<<"What is your id?"<<endl;
        string id = "2546871";//cin>> id;
        cout<<endl<<endl<<"Choose your role in numbers:"<<endl;
        cout<<"1) Teacher"<<endl;
        cout<<"2) Student"<<endl;
        cout<<"3) Manager"<<endl;
        cout<<"4) Parent"<<endl;
        int choice; cin>>choice;

        if (choice == 1)
        {
            manager1->addTeacher(teacher1, name, id);
            center->am_teacher(teacher1, lectrue1, course1, quiz1, dt1, ass1);
        }
        else if (choice == 2)
        {
            manager1->addStudent(student1, name, id, parent1);
            center->am_student(student1, quiz1, ass1);
        }
        else if (choice == 3)
        {
            manager *manager2 = new manager(name, id);
            center->am_manager(manager2, parent1, student1, teacher1, course1, dt1);
        }
        else if (choice == 4)
        {
            manager1->addParent(parent1,name,id);
            center->am_parent(parent1, student1);
        }
        else
        break;
    }
    return 0;
}
