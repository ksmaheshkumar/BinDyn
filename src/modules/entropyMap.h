/***************************************
 * entropyMap.h
 * Declares the Class to be define in entropyMap.cpp
 **************************************/
 
#include "Plotter.h"
#include <QTextEdit>
#include <QCheckBox>
#include <QLineEdit>
#include <QSlider>
#include <QProgressBar>
#include <QObject>
#include <QScrollArea>

class EntropyMap : public QWidget
{
	Q_OBJECT
	
	public:
		EntropyMap();	
		
	public slots:
		void analysis(char *,  size_t, bool, QProgressBar * );
		void clean();
		
	private:
	Plotter * plot;
		QSlider * jump;
		QTextEdit * output;
		QCheckBox * listThreshold;
		QSlider * range;
		QLineEdit * threshold;
		QScrollArea * scroll;
		unsigned char entropy(unsigned char*, unsigned int); 
};