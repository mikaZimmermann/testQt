#pragma once
#include "qtDefine.h"


#include <stdio.h>
#include <String>

class KEYWORDINPUT;
class SEARCHRESULTVISU;

class BROWSINGSEARCH : public QObject {
KEYWORDINPUT* keywordInput;


public:

	QApplication* qapp;

	QWidget* browsingSearch;

	SEARCHRESULTVISU* searchResultVisu;
	

	std::vector<std::string> keywords;

	void setKeyword(QString keyword);

	BROWSINGSEARCH(QApplication* app);

private:
	

	QHBoxLayout* mainLayout;

	QListWidget* keywordListWdg;

	QPushButton* createQueryButton;

	void setInputWidget(QHBoxLayout* mainLayout, QWidget* inputWdg);


	void updateExamples();

public slots:
	void openBrowsingWindow();
	void sendQuery();

};