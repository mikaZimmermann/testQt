#pragma once
#include "qtDefine.h"

class BROWSINGSEARCH;
class SPECIFICSEARCH;

class KEYWORDINPUT :  public QObject{

	BROWSINGSEARCH* brwsSearchHodler;
	
	SPECIFICSEARCH* spcfSearchHodler;

public:
	
	QInputDialog* keywordInputDialog;

	QWidget* wdg;



	KEYWORDINPUT(BROWSINGSEARCH* brwsSearch);

	KEYWORDINPUT(SPECIFICSEARCH* spcfSearch);

	QWidget* getWidget();

private:


public slots:
	void sendKeywordBrowsing();
	void sendKeywordSpecific();
	
};