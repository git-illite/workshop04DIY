//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jun 20 2021
//==============================================
// Workshop 04 DIY
//==============================================
#ifndef SDDS_LABEL_H
#define SDDS_LABEL_H
namespace sdds {
	class Label {
		char m_frame[9];
		char* m_content;	
		void setDefault();
	public:
		Label();
		Label(const char* frameArg /*= "+-+|+-+|"*/);
		Label(const char* frameArg, const char* content);
		~Label();
		void readLabel();
		std::ostream& printLabel()const;
	};
}
#endif