/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 18 Сентябрь 2015 г., 15:06
 */

#include <iostream>
#include <fstream>
using namespace std;

void lineOne(short num) {
	switch (num) {
		case 0:
			cout << "-**--";
			return;
		case 1:
			cout << "--*--";
			return;
		case 2:
			cout << "***--";
			return;
		case 3:
			cout << "***--";
			return;
		case 4:
			cout << "-*---";
			return;
		case 5:
			cout << "****-";
			return;
		case 6:
			cout << "-**--";
			return;
		case 7:
			cout << "****-";
			return;
		case 8:
			cout << "-**--";
			return;
		case 9:
			cout << "-**--";
			return;
	}
}

void lineTwo(short num) {
	switch (num) {
		case 0:
			cout << "*--*-";
			return;
		case 1:
			cout << "-**--";
			return;
		case 2:
			cout << "---*-";
			return;
		case 3:
			cout << "---*-";
			return;
		case 4:
			cout << "*--*-";
			return;
		case 5:
			cout << "*----";
			return;
		case 6:
			cout << "*----";
			return;
		case 7:
			cout << "---*-";
			return;
		case 8:
			cout << "*--*-";
			return;
		case 9:
			cout << "*--*-";
			return;
	}
}

void lineThree(short num) {
	switch (num) {
		case 0:
			cout << "*--*-";
			return;
		case 1:
			cout << "--*--";
			return;
		case 2:
			cout << "-**--";
			return;
		case 3:
			cout << "-**--";
			return;
		case 4:
			cout << "****-";
			return;
		case 5:
			cout << "***--";
			return;
		case 6:
			cout << "***--";
			return;
		case 7:
			cout << "--*--";
			return;
		case 8:
			cout << "-**--";
			return;
		case 9:
			cout << "-***-";
			return;
	}
}

void lineFour(short num) {
	switch (num) {
		case 0:
			cout << "*--*-";
			return;
		case 1:
			cout << "--*--";
			return;
		case 2:
			cout << "*----";
			return;
		case 3:
			cout << "---*-";
			return;
		case 4:
			cout << "---*-";
			return;
		case 5:
			cout << "---*-";
			return;
		case 6:
			cout << "*--*-";
			return;
		case 7:
			cout << "-*---";
			return;
		case 8:
			cout << "*--*-";
			return;
		case 9:
			cout << "---*-";
			return;
	}
}

void lineFive(short num) {
	switch (num) {
		case 0:
			cout << "-**--";
			return;
		case 1:
			cout << "-***-";
			return;
		case 2:
			cout << "****-";
			return;
		case 3:
			cout << "***--";
			return;
		case 4:
			cout << "---*-";
			return;
		case 5:
			cout << "***--";
			return;
		case 6:
			cout << "-**--";
			return;
		case 7:
			cout << "-*---";
			return;
		case 8:
			cout << "-**--";
			return;
		case 9:
			cout << "-**--";
			return;
	}
}

void lineSix(short num) {
	cout << "-----";
}

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	short i, l;
	while (getline(stream, line)) {
		l = line.length();
		for (i = 0; i < l; i++) {
			if (47 < line[i] && line[i] < 59)
				lineOne(line[i]-48);
		}
		cout << endl;
		for (i = 0; i < l; i++) {
			if (47 < line[i] && line[i] < 59)
				lineTwo(line[i]-48);
		}
		cout << endl;
		for (i = 0; i < l; i++) {
			if (47 < line[i] && line[i] < 59)
				lineThree(line[i]-48);
		}
		cout << endl;
		for (i = 0; i < l; i++) {
			if (47 < line[i] && line[i] < 59)
				lineFour(line[i]-48);
		}
		cout << endl;
		for (i = 0; i < l; i++) {
			if (47 < line[i] && line[i] < 59)
				lineFive(line[i]-48);
		}
		cout << endl;
		for (i = 0; i < l; i++) {
			if (47 < line[i] && line[i] < 59)
				lineSix(line[i]-48);
		}
		cout << endl;
	}
	
//	lineOne(0); lineOne(1); lineOne(2); lineOne(3); lineOne(4); lineOne(5); lineOne(6); lineOne(7); lineOne(8); lineOne(9); cout << endl;
//	lineTwo(0); lineTwo(1); lineTwo(2); lineTwo(3); lineTwo(4); lineTwo(5); lineTwo(6); lineTwo(7); lineTwo(8); lineTwo(9); cout << endl;
//	lineThree(0); lineThree(1); lineThree(2); lineThree(3); lineThree(4); lineThree(5); lineThree(6); lineThree(7); lineThree(8); lineThree(9); cout << endl;
//	lineFour(0); lineFour(1); lineFour(2); lineFour(3); lineFour(4); lineFour(5); lineFour(6); lineFour(7); lineFour(8); lineFour(9); cout << endl;
//	lineFive(0); lineFive(1); lineFive(2); lineFive(3); lineFive(4); lineFive(5); lineFive(6); lineFive(7); lineFive(8); lineFive(9); cout << endl;
//	lineSix(0); lineSix(1); lineSix(2); lineSix(3); lineSix(4); lineSix(5); lineSix(6); lineSix(7); lineSix(8); lineSix(9); cout << endl;
	
	return 0;
}

