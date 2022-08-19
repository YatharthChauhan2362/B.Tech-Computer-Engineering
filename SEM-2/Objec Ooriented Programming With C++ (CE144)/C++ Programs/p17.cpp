/*Create a Class Gate for students appearing in Gate (Graduate Aptitude test for Engineering) exam. There are three examination center Vadodara, Surat, and Ahmedabad where Gate exams are conducted. A class has data members: Registration number, Name of student, Examination center. Class also Contains static data member ECV_Cnt, ECS_Cnt and ECA_Cnt which counts the number of students in Vadodara, Surat and Ahmedabad exam center respectively. Class Contains two Member function getdata () which gets all information of students and counts total students in each exam center and pudata () which prints all information about the students. Class also contains one static member function getcount () which displays the total number of students in each examination center. Write a program for 5 students and display the total number of students in each examination center. Use static data member, static member function and Array
of Objects.*/

#include <iostream>
using namespace std;
class gate
{
public:
    string roll_no, name, exam_center;
    static int ECA, ECV, ECS;

    void getdata();
    void putdata();

    static void getcount()
    {
        cout << endl
             << "Student appear in Ahmedabad center: " << ECA << endl;
        cout << "Student appear in Vadodara center: " << ECV << endl;
        cout << "Student appear Surat center: " << ECS << endl;
    }
};
int gate::ECA = 0, gate::ECV = 0, gate::ECS = 0;

void gate::getdata()
{
    cout << endl
         << "Enter the registration no: ";
    cin >> roll_no;
    cout << "Enter the Name: ";
    cin >> name;
    cout << "Enter the Exam Center: ";
    cin >> exam_center;

    if (exam_center == "ahmedabad")
    {
        ECA++;
    }
    else if (exam_center == "vadodara")
    {
        ECV++;
    }
    else if (exam_center == "surat")
    {
        ECS++;
    }
}
void gate::putdata()
{
    cout << endl
         << "Registration no: " << roll_no;
    cout << endl
         << "Your name: " << name;
    cout << endl
         << "Exam center: " << exam_center << endl;
}
int main()
{
    gate student[5];

    for (int i = 0; i < 5; i++)
    {
        student[i].getdata();
    }
    cout << endl
         << "You Entered..." << endl;

    for (int i = 0; i < 5; i++)
    {
        student[i].putdata();
    }
    gate::getcount();
}