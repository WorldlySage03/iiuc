#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
      int real, img;
public:
      Complex(int real = 0, int img = 0)
      {
            this->real = real;
            this->img = img;
      }
      void print()
      {
            cout << real;
            if (img >= 0) cout << " + " << img << 'i' << endl;
            else cout << " + "  << '(' << img << ')' << 'i' << endl;
      }

      Complex operator +(Complex a)
      {
            Complex temp;
            temp.real = real + a.real;
            temp.img = img + a.img;
            return temp;
      }
      Complex operator -(Complex a)
      {
            Complex temp;
            temp.real = real - a.real;
            temp.img = img - a.img;
            return temp;
      }
      Complex operator *(Complex a)
      {
            Complex temp;
            temp.real = real * a.real;
            temp.img = img * a.img;
            return temp;
      }
};

int main()
{
      Complex a(3, 7), b(-1, -2), c;

      a.print();
      b.print();
      cout << endl;

      c = a + b;
      c.print();
      cout << endl;

      c = a - b;
      c.print();
      cout << endl;

      c = a * b;
      c.print();
      cout << endl;
}