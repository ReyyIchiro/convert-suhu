#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius)
{
  return celsius * 9 / 5 + 32;
}

double celsiusToKelvin(double celsius)
{
  return celsius + 273.15;
}

double celsiusToReamur(double celsius)
{
  return celsius * 4 / 5;
}

double fahrenheitToCelsius(double fahrenheit)
{
  return (fahrenheit - 32) * 5 / 9;
}

double fahrenheitToKelvin(double fahrenheit)
{
  return (fahrenheit - 32) * 5 / 9 + 273.15;
}

double fahrenheitToReamur(double fahrenheit)
{
  return (fahrenheit - 32) * 4 / 9;
}

double kelvinToCelsius(double kelvin)
{
  return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin)
{
  return (kelvin - 273.15) * 9 / 5 + 32;
}

double kelvinToReamur(double kelvin)
{
  return (kelvin - 273.15) * 4 / 5;
}

double reamurToCelsius(double reamur)
{
  return reamur * 5 / 4;
}

double reamurToFahrenheit(double reamur)
{
  return reamur * 9 / 4 + 32;
}

double reamurToKelvin(double reamur)
{
  return reamur * 5 / 4 + 273.15;
}

int main()
{
  double temperature;
  int inputUnit, outputUnit;

  cout << "Masukkan suhu: ";
  cin >> temperature;

  cout << "Masukkan satuan suhu (1. Celsius, 2. Fahrenheit, 3. Kelvin, 4. Reamur): ";
  cin >> inputUnit;

  cout << "Masukkan satuan suhu tujuan (1. Celsius, 2. Fahrenheit, 3. Kelvin, 4. Reamur): ";
  cin >> outputUnit;

  double result;
  switch (inputUnit)
  {
  case 1: // Celsius
    switch (outputUnit)
    {
    case 1: // Celsius
      result = temperature;
      break;
    case 2: // Fahrenheit
      result = celsiusToFahrenheit(temperature);
      break;
    case 3: // Kelvin
      result = celsiusToKelvin(temperature);
      break;
    case 4: // Reamur
      result = celsiusToReamur(temperature);
      break;
    }
    break;
  case 2: // Fahrenheit
    switch (outputUnit)
    {
    case 1: // Celsius
      result = fahrenheitToCelsius(temperature);
      break;
    case 2: // Fahrenheit
      result = temperature;
      break;
    case 3: // Kelvin
      result = fahrenheitToKelvin(temperature);
      break;
    case 4: // Reamur
      result = fahrenheitToReamur(temperature);
      break;
    }
    break;
  case 3: // Kelvin
    switch (outputUnit)
    {
    case 1: // Celsius
      result = kelvinToCelsius(temperature);
      break;
    case 2: // Fahrenheit
      result = kelvinToFahrenheit(temperature);
      break;
    case 3: // Kelvin
      result = temperature;
      break;
    case 4: // Reamur
      result = kelvinToReamur(temperature);
      break;
    }
    break;
  case 4: // Reamur
    switch (outputUnit)
    {
    case 1: // Celsius
      result = reamurToCelsius(temperature);
      break;
    case 2: // Fahrenheit
      result = reamurToFahrenheit(temperature);
      break;
    case 3: // Kelvin
      result = reamurToKelvin(temperature);
      break;
    case 4: // Reamur
      result = temperature;
      break;
    }
    break;
  }

  cout << "Hasil konversi: " << result << endl;

  return 0;
}
