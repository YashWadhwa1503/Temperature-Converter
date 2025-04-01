# include <iostream>
# include <string>
# include <math.h>

// Temperature converter project

int main ()
{

    std::cout<<"Number: ";
    double value;
    std::cin>>value;
    std::cout<<"\nPlease enter the temperature unit(Fahrenheit, Celsius, Kelvin): ";
    std::string temperature;
    std::cin>>temperature;

    double Kelvin = 0;
    double Fahrenheit = 0;
    double Celsius=0;
   
   if (temperature == "Fahrenheit") 
    {
       double Celsius = (value - 32.0)*(0.555555555555555555555555555555);
       std::cout<<Celsius<<" Celsius";
       double Kelvin = Celsius + 273.15;
       std::cout<<"\n"<<Kelvin<<" Kelvin";
    }
    else if (temperature == "Celsius") 
    {
        double Fahrenheit = (value*1.8) + 32.0;
        std::cout<<"\n"<<Fahrenheit<<" Fahrenheit";
        double Kelvin = value + 273.15;
        std::cout<<"\n"<<Kelvin<<" Kelvin";
    } 
    else if (temperature == "Kelvin") 
    {
        if (value < 0) 
        {
            std::cout<<"Invavalid Input";
            return 0;
        } 
        else
        {
            double Fahrenheit = ((value - 273.15)*(1.8))+32.0;
            std::cout<<"\n"<<Fahrenheit<<" Fahrenheit";
            double Celsius = value - 273.15;
            std::cout<<"\n"<<Celsius<<" Celsius";
        }
    }
}
