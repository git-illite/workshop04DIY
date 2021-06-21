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
#include "LabelMaker.h"

using namespace std;
namespace sdds {
   
    LabelMaker::LabelMaker(int noOfLabels) {
            m_numLables = noOfLabels;
            m_labels = new Label[noOfLabels];
    }
     
    LabelMaker::~LabelMaker() {
        delete[]m_labels; 
        m_labels = nullptr;

    }
    void LabelMaker::readLabels() {    
        cout << "Enter " << m_numLables << " labels:" << endl;
        
        int i;
        
        for (i=0; i < m_numLables; i++) {
           cout << "Enter label number "<< i+1<<endl;
           cout << "> ";
           m_labels[i].readLabel();
        }
    }
    void  LabelMaker::printLabels() {
        int i = 0;
        for (i; i < m_numLables; i++) {
            m_labels[i].printLabel()<<endl;
        }

    }
}