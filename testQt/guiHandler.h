#pragma once
#include "qtDefine.h"


class GUIHANDLER : public QObject{

public:
	QPushButton browsingSearchButton;
	GUIHANDLER(QApplication* app);
public slots:
	void openBrowsingSearchWindow();
};
