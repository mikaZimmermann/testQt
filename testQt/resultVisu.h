#pragma once
#include "qtDefine.h"

class RESULTITEM;
class HOVERVISU;

class RESULTVISU : public QWidget {

public:
	RESULTITEM* item;
	HOVERVISU* hvrVisu;

	QHBoxLayout* mainLayout;


	RESULTVISU(RESULTITEM* rsltItem);

	void enterEvent(QEnterEvent* event) override;
	void leaveEvent(QEvent* event) override;
};