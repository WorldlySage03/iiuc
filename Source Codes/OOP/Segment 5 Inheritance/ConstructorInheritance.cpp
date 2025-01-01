#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
      int wheel;
      Vehicle(int w)
      {
            wheel = w;
      }
};

class Car: public Vehicle
{
public:
      int seat;
      Car(int w, int s): Vehicle(w)
      {
            seat = s;
      }
};

int main()
{
      Car toyota(4, 7);
      cout << "Wheels: " << toyota.wheel << endl;
      cout << "Seats: " << toyota.seat << endl;
}