//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jun 20 2021
//==============================================
// Workshop 04 DIY
//==============================================
#ifndef SDDS_LABELMAKER_H
#define SDDS_LABELMAKER_H
namespace sdds {
	class LabelMaker {
		Label* m_labels;
		int m_numLables;
	 public:
		LabelMaker(int noOfLabels);
		~LabelMaker();
		void readLabels();
		void printLabels();
	};
}
#endif