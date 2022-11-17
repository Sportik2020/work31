#include <iostream>
#include <ctime>
using namespace std;
double powerA3(double a) {
	double res = a * a * a;
	return res;
}
double powerA2(double a){
	double res = a * a;
	return res;
}
double powerA4(double a) {
	double res = a * a * a * a;
	return res;
}
double amean(double x, double y) {
	return (x + y) / 2;
}
double gmean(double x, double y) {
	return sqrt(x * y);
}
double triangleP(double a) {
	return 3 * a;
}
double triangleS(double a) {
	return a * a * sqrt(3) / 4;
}
double rectP(double x1, double x2, double y1, double y2) {
	return (abs(x2 - x1) + abs(y2 - y1)) * 2;
}
double rectS(double x1, double x2, double y1, double y2) {
	return abs(x2 - x1) * abs(y2 - y1);
}
int main()
{
	//Proc1
	/*Описать функцию PowerA3(A), вычисляющую третью степень числа A и возвращающую ее(параметр вещественный).С помощью этой функции найти третьи степени пяти случайных чисел.
	for (int i = 1; i <= 5; i++) {
		int x = rand() % 11;
		double x3 = powerA3(x); 
		cout << "x = " << x << "x^3 = " << x3 << endl;
	}*/
	//Proc2. 
	/*Описать 2 функции powerA2(А), powerA4(A), вычисляющию вторую и четвертую степень числа A и возвращающию эти степени(параметры являются вещественными).
	С помощью этих функций найти вторую и четвертую степень пяти случайных чисел
	srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		int x = rand() % 11;
		double x2 = powerA2(x);
		double x4 = powerA4(x);
		cout << x << " " << "x2 = " << x2 << " " << "x4 = " << x4 << endl;
	}*/
	//Proc3.
	/*Описать 2 функции aMean(X, Y), gMean(X, Y), вычисляющие среднее арифметическое aMean = (X + Y) / 2 и среднее геометрическое 
	gMean = √ X·Y двух положительных чисел X и Y(X и Y — входные параметры вещественного типа).
	С помощью этих функций найти среднее арифметическое и среднее геометрическое для 10 пар случайных чисел.
	srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double x = rand() % 101 * 0.1;
		double y = rand() % 101 * 0.1;
		double a = amean(x, y);
		double g = gmean(x, y);
		cout << x << " " << "aMean = " << a << " " << "gMean = " << g << endl;
	}*/
	//Proc4.
	/*Описать 2 функции triangleP(a) и triangleS(a), вычисляющие по стороне a равностороннего треугольника его периметр P = 3·a и площадь S = a 2 · √ 3 / 4 (параметры являются вещественными).
	С помощью этих функций найти периметры и площади трех равносторонних треугольников с данными сторонами(стороны ввести с клавиатуры)
	for (int i = 1; i <= 3; i++) {
		double x;
		cin >> x;
		double p = triangleP(x);
		double s = triangleS(x);
		cout << x << " " << "p = " << p << " " << "s = " << s << endl;
	}*/
	//Proc5.
	/*Proc5. Описать 2 функции rectP(x1, y1, x2, y2) и rectS(x1, y1, x2, y2),
	вычисляющие периметр P и площадь S прямоугольника со сторонами, параллельными осям координат, по координатам (x1, y1), (x2, y2) его противоположных вершин. 
	С помощью этих функций найти периметры и площади трех прямоугольников с данными противоположными вершинами.
	for (int i = 1; i <= 3; i++) {
		double x1, y1, x2, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		double p = rectP(x1, y1, x2, y2);
		double s = rectS(x1, y1, x2, y2);
		cout << "s =" << " " << s << " " << "p = " << p << endl;
	}*/
	return 0;
}