#include<iostream>
#include<cstring>
#include<unordered_map>

using namespace std;

class Student{
    public:
    
    string firstname;
    string lastname;
    string rollno;

    Student(string f, string l, string no){
        firstname = f;
        lastname = l;
        rollno = no;
    }

    bool operator ==(const Student &s) const
    {
        return rollno == s.rollno;
    }
};

class HashFu{
    public:

    size_t operator()(const Student &s)const{
        return s.firstname.size() + s.lastname.size();
    }
};

int main()
{
    unordered_map<Student, int, HashFu> student_map;
    Student s1("Prateek", "Kumar", "010");
    Student s2("Anakin", "Skywalker", "066");
    Student s3("Luke", "Skywalker", "013");
    Student s4("Prateek", "Shrivastava", "015");

    student_map[s1] =  100 ;
    student_map[s2] = 120 ;
    student_map[s3] =  11 ;
    student_map[s4] =  45 ;
    // Find the marks of student s3
    cout<<endl;
    cout<<student_map[s3]<<endl;

    // Iterate over all student.

    for(auto s: student_map)
    {
        cout<<s.first.firstname<<" "<<s.first.rollno<<" Marks "<<s.second<<endl;
    }
    return 0;
}