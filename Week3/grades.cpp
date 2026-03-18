//grades.cpp
#include <iostream>
#include <string>
#include <ios>
#include <iomanip> // 실수 1.33333333333333333333333333333333333333333

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setprecision;
using std::streamsize;


int main(void) {

	/*
	한 과목에서 
	중간 20%
	기말 40%
	평균과제 40%
	*/

	//학생의 이름을 묻고 입력받기
	int option = 0;
	string name = "", fname, lname;
	double att = 0.1,
		mid = 0.3,
		fin = 0.3,
		hw = 0.25,
		project = 0.05;


	while (option != 1 && option != 2) {
		cout << "Select country: 1. Korea, 2. Usa: ";
		cin >> option;

		if (option == 1) {
			cout << "Name: ";
			cin >> name;
		}
		else if (option == 2) {
			cout << "First Name + Last name: ";
			cin >> fname, lname;
			name = fname + " " + lname;
		}

		if (name != "") {
			cout << "Hello, " << name << "!" << endl;
		}
	}
	//중간고사와 기말고사 점수를 묻고 입력받기
	double midterm, final, sum = 0;
	int count = 0; //과제 몇개

	cout << "MIdterm + Final grades: ";
	cin >> midterm >> final;

	// 과제 점수를 묻고 입력받기
	cout << "All HW grades + EOF: "; // CTRL + D + Enter

	// 입력을 위한 변수
	double in;  //임시 변수(과제, 읽을때만)

	//불변성: 지금까지 count개 점수를 입력받았으며
	//입력 받은 점수의 합은 sum 
	while (cin >> in) {
		++count;
		sum += in;
	}
	// 결과를 출력
	streamsize prec = cout.precision(); //나중에 사용하고 정밀도 다시 리셋
	/*cout << name << "'s Final grades: " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * (sum / count)
		<< setprecision(prec) << endl;*/

	cout << name << "'s Final grades: " << (att * 100) + (mid * midterm) + (fin * final) + (hw * (sum / count))
		+ (project * 100) << endl;

	return 0;
}

