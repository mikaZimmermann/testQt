#pragma once
#include "qtDefine.h"


class BROWSINGSEARCH;
class SPECIFICSEARCH;

class SEARCHSELECT : public QObject{

public:
	QApplication* qapp;

	QPushButton* browsingSearchButton;
	QPushButton* specificSearchButton;

	QWidget* selectSearch;

	BROWSINGSEARCH* browsingSearch;
	SPECIFICSEARCH* specificSearch;

	SEARCHSELECT(QApplication* app);
public slots:
	void openBrowsingSearchWindow();
	void openSpecificSearchWindow();
};
