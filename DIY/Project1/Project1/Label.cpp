//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jun 20 2021
//==============================================
// Workshop 04 DIY
//==============================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Label.h"


using namespace std;
namespace sdds {
	Label::Label() {
		setDefault();
	}
	Label::Label(const char* frameArg) {
		setDefault();
		strcpy(m_frame, frameArg);
		m_content = nullptr;
	}
	void Label::setDefault(){
		m_content = nullptr;
		strcpy(m_frame, "+-+|+-+|");

	}
	Label::Label(const char* frameArg,const char* content) {
		setDefault();
		m_content = new char[strlen(content) + 1];
		strcpy(m_frame, frameArg);
		strcpy(m_content, content);		
	}
		
	Label::~Label() {
		delete[] m_content;
		m_content = nullptr;
		

	}
	void Label::readLabel() {
		char cont[71];
		cin.getline(cont,71);
		m_content = new char[strlen(cont) + 1];
		strcpy(m_content, cont);

	}
	std::ostream& Label::printLabel()const {
		if (m_content) {
			int frameLen = strlen(m_content) + 2;
			int contLen = frameLen + 1;
			//top
			cout << m_frame[0];
			for (int i = 0; i < frameLen; i++) {
				cout << m_frame[1];
			}
			cout << m_frame[2] << endl;

			//middle
			cout << m_frame[7];
			cout.width(contLen);
			cout.fill(' ');
			cout << m_frame[3] << endl;
			cout << m_frame[7] << ' ' << m_content << ' ' << m_frame[3] << endl;
			cout << m_frame[7];
			cout.width(contLen);
			cout.fill(' ');
			cout << m_frame[3] << endl;

			//bottom
			cout << m_frame[6];
			for (int i = 0; i < frameLen; i++) {
				cout << m_frame[5];
			}
			cout << m_frame[4];
		}
	return cout;
	}

}