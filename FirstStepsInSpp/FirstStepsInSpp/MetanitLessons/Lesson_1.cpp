#include <iostream>


int First_Task()
{
	int meters;
	std::cout << "Input meters: ";
	std::cin >> meters;
	int km = meters / 1000;
	int LastMet = meters % 1000;
	std::cout << "In Km: " << km << "\n" << "And some meters: " << LastMet << "\n" << "\n";
	return 0;
}

int Second_Task()
{
	const double  pi{ 3.1415 };
	double  radius;
	std::cout << "Input radius: ";
	std::cin >> radius;
	double  PloshadKruga{ pi * (radius * radius) };
	std::cout << "Ploshad kruga = " << PloshadKruga << "\n" << "\n";
	return 0;
}

int Third_Task()
{
	double rate{};
	double sum{};

	std::cout << "Enter Rate: ";
	std::cin >> rate;
	std::cout << "Sum: ";
	std::cin >> sum;
	const double output{ sum / rate };
	std::cout << sum << " rub = " << output << "$" << "\n" << "\n";
	return 0;
}

int Fourth_Task()
{
	double mass{};
	double hight{};
	
	std::cout << "Enter Mass(kg): ";
	std::cin >> mass;
	std::cout << "Enter Hight(cm): ";
	std::cin >> hight;

	std::cout << "Your BMI = " << mass / ((hight/100.0) * (hight/100.0));

	return 0;
}


int main()
{
	std::cout << "Hello"<< "\n";
	


	std::cout << "First Task" << "\n" << "_______________" << "\n";
	First_Task();
	
	std::cout << "Second Task" << "\n" << "_______________" << "\n";
	Second_Task();

	std::cout << "Third Task" << "\n" << "_______________" << "\n";
	Third_Task();

	std::cout << "Fourth Task" << "\n" << "_______________" << "\n";
	Fourth_Task();

	return 0;
}

