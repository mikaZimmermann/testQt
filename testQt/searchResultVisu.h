#pragma once
#include "qtDefine.h"

class RESULTVISU;

class SEARCHRESULTVISU : public QObject {

public:
	std::vector<RESULTVISU*> searchResults;
	
	SEARCHRESULTVISU(QApplication* app);

	void selectFeature();


	QWidget* wdg;


public slots:
	void sendQuery();

};