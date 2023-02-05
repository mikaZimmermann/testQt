#include "resultItem.h"
#include "resultVisu.h"
#include "hoverVisu.h"


RESULTVISU::RESULTVISU(RESULTITEM* rsltItem) : QWidget(){


	item = rsltItem;
	hvrVisu = new HOVERVISU(item->resultFeatures);

	mainLayout = new QHBoxLayout(this);
	//mainLayout->setEnabled(false);


	setMouseTracking(true);
	mainLayout->addWidget(item->getResultLabel());
	mainLayout->addWidget(hvrVisu);
	hvrVisu->setVisibility(false);

}


void RESULTVISU::enterEvent(QEnterEvent* event) {
	item->setVisibility(false);
	hvrVisu->setVisibility(true);
}

void RESULTVISU::leaveEvent(QEvent* event)
{
	hvrVisu->setVisibility(false);
	item->resultImageLabel->setVisible(true);

}
