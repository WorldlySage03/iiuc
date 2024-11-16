#include <bits/stdc++.h>
using namespace std;

class Teacher
{
protected:
      string name;
      string dept;
public:
      Teacher(string name, string dep) : name(name), dept(dep) {}
      Teacher() = default;

      virtual void get_info()
      {
            cout << "Name: " << name << endl;
            cout << "Dept. of " << dept << endl;
      }
};

class Student : public Teacher
{
private:
      string id;
public:
      Student(string name, string dep, string id) : Teacher(name, dep), id(id) {}

      void get_info() override
      {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Dept. of " << dept << endl;
      }
};

int main()
{
      Teacher a("Jamil As-Ad", "CSE");
      Student b("Md. Tasin Absar", "CSE", "C240124");

      a.get_info();

      cout << endl;

      b.get_info();
}
