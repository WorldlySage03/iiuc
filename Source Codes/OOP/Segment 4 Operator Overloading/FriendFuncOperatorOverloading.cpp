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

      friend Complex operator +(Complex a, Complex b);
};

Complex operator +(Complex a, Complex b)
{
      Complex temp;
      temp.real = a.real + b.real;
      temp.img = a.img + b.img;
      return temp;
}

int main()
{
      Complex a(3, 7), b(-1, -2), c;

      c = a + b;
      c.print();
}