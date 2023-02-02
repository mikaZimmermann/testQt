#include "qtDefine.h"
#include "searchselect.h"
#include "browsingSearch.h"
#include "specificSearch.h"
#include <iostream>



SEARCHSELECT::SEARCHSELECT(QApplication* app) {

	qapp = app;

	selectSearch = new QWidget();
	//QMainWindow::setCentralWidget(wdg);

	QHBoxLayout* mainLayout = new QHBoxLayout(selectSearch);


	browsingSearchButton = new QPushButton(selectSearch);
	specificSearchButton = new QPushButton(selectSearch);

	QObject::connect(browsingSearchButton, &QPushButton::clicked,	this , &SEARCHSELECT::openBrowsingSearchWindow);
	QObject::connect(specificSearchButton, &QPushButton::clicked, this, &SEARCHSELECT::openSpecificSearchWindow);


	browsingSearchButton->setText("Browsing Search");
	specificSearchButton->setText("Specific Search");

	mainLayout->addWidget(browsingSearchButton);
	mainLayout->addWidget(specificSearchButton);


	selectSearch->setWindowTitle("Title!");
	selectSearch->resize(120, 240);
	selectSearch->show();
	
	//app->exec only in main needed, might delete QApp completely from this class
	//app->exec();
}



 void SEARCHSELECT::openBrowsingSearchWindow() {

	browsingSearch = new BROWSINGSEARCH(qapp);
	selectSearch->close();


}

 void SEARCHSELECT::openSpecificSearchWindow()
 {
	 specificSearch = new SPECIFICSEARCH(qapp);
	 selectSearch->close();

 }