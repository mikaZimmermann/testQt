#include "qtDefine.h"
#include "keywordInput.h"
#include "specificSearch.h"
#include <iostream>
#include "stdio.h"


SPECIFICSEARCH::SPECIFICSEARCH(QApplication* app) {

	qapp = app;

	specificSearch = new QWidget();


	keywordInput = new KEYWORDINPUT(this);

	//option to delete Keyword missing
	keywordListWdg = new QListWidget();


	createQueryButton = new QPushButton();
	createQueryButton->setText("Send Query!");

	mainLayout = new QHBoxLayout(specificSearch);
	mainLayout->addWidget(keywordListWdg);
	setInputWidget(mainLayout, keywordInput->getWidget());
	mainLayout->addWidget(createQueryButton);



	specificSearch->setWindowTitle("Fuck you");
	specificSearch->show();

	QObject::connect(createQueryButton, &QPushButton::clicked, this, &SPECIFICSEARCH::sendQuery);



	//app->exec only in main needed, might delete QApp completely from this class
	//qapp->exec;
}

void SPECIFICSEARCH::setInputWidget(QHBoxLayout* mainLayout, QWidget* inputWdg)
{
	mainLayout->addWidget(inputWdg);

}



void SPECIFICSEARCH::setKeyword(QString keyword)
{
	//missing check for valid string - only one word


	/*
	* Moving list of keywords to QListWidget
	*
	this->keywords.push_back(keyword);

	*/
	keywordListWdg->addItem(keyword);
	keywordInput = new KEYWORDINPUT(this);

	//workaround until Layoutmanagement is figured out
	mainLayout->removeWidget(createQueryButton);
	setInputWidget(this->mainLayout, keywordInput->getWidget());
	//workaround until Layoutmanagement is figured out
	mainLayout->addWidget(createQueryButton);
}

void SPECIFICSEARCH::openBrowsingWindow() {
	QWidget* testwdg = new QWidget();
	testwdg->setWindowTitle("Help me!");


}

void SPECIFICSEARCH::sendQuery()
{
	std::vector<std::string> keywordsForQuery;

	//get all keywords in string vector for handover 
	int n = keywordListWdg->count();
	for (int x = 0; x < n; x++)
	{

		QString qs = keywordListWdg->item(x)->text();
		keywordsForQuery.push_back(qs.toLocal8Bit().constData());

	}

}