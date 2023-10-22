#include <iostream>
using namespace std;

int main()
{
  float celcius, fahrenheit, kelvin, reamur;

  cout << "PROGRAM MENGKONVERSI SATUAN SUHU" << endl;
  cout << "Masukkan suhu dalam Celcius: ";
  cin >> celcius;

  fahrenheit = (9.0 / 5.0) * celcius + 32;
  kelvin = celcius + 273.15;
  reamur = (4.0 / 5.0) * celcius;

  cout << celcius << " derajat Celcius = " << fahrenheit << " derajat Fahrenheit" << endl;
  cout << celcius << " derajat Celcius = " << kelvin << " derajat Kelvin" << endl;
  cout << celcius << " derajat Celcius = " << reamur << " derajat Reamur" << endl;

  return 0;
}