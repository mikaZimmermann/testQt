#include "qtDefine.h"
#include "guiHandler.h"
#include "browsingSearch.h"
#include <iostream>



GUIHANDLER::GUIHANDLER(QApplication* app) {

	
	//BROWSINGSEARCH browsingSearchGui = BROWSINGSEARCH();

	QWidget *wdg = new QWidget();
	//QMainWindow::setCentralWidget(wdg);

	QHBoxLayout* mainLayout = new QHBoxLayout(wdg);


	QPushButton* browsingSearchButton = new QPushButton(wdg);
	QPushButton* specificSearchButton = new QPushButton(wdg);

	QObject::connect(browsingSearchButton, &QPushButton::clicked,	this , &GUIHANDLER::openBrowsingSearchWindow);



	browsingSearchButton->setText("Browsing Search");
	specificSearchButton->setText("Specific Search");

	mainLayout->addWidget(browsingSearchButton);
	mainLayout->addWidget(specificSearchButton);


	wdg->setWindowTitle("Title!");
	wdg->resize(120, 240);
	wdg->show();
	
	app->exec;
}

void GUIHANDLER::openBrowsingSearchWindow() {
	std::cout << "Hello, World!" << std::endl; // This prints Hello, World!

}