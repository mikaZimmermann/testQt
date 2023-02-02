#include "qtDefine.h"
#include "keywordInput.h"
#include "browsingSearch.h"
#include "specificSearch.h"


KEYWORDINPUT::KEYWORDINPUT(BROWSINGSEARCH* brwsSearch) {
	
		brwsSearchHodler = brwsSearch;

		spcfSearchHodler = NULL;

		wdg = new QWidget;
		QHBoxLayout* mainLayout = new QHBoxLayout(wdg);

		
		//cancel button still not usefull
		keywordInputDialog = new QInputDialog();
		keywordInputDialog->setInputMode(QInputDialog::TextInput);
		
		//Workaround for Cancel button has to be found
		//keywordInputDialog->setOption(QInputDialog::NoButtons);

		QObject::connect(keywordInputDialog, &QInputDialog::textValueSelected, this, &KEYWORDINPUT::sendKeywordBrowsing);

}

KEYWORDINPUT::KEYWORDINPUT(SPECIFICSEARCH* spcfSearch) {

	brwsSearchHodler = NULL;
		
	spcfSearchHodler = spcfSearch;


	wdg = new QWidget;
	QHBoxLayout* mainLayout = new QHBoxLayout(wdg);


	//cancel button still not usefull
	keywordInputDialog = new QInputDialog();
	keywordInputDialog->setInputMode(QInputDialog::TextInput);

	//Workaround for Cancel button has to be found
	//keywordInputDialog->setOption(QInputDialog::NoButtons);

	QObject::connect(keywordInputDialog, &QInputDialog::textValueSelected, this, &KEYWORDINPUT::sendKeywordSpecific);

}

QWidget* KEYWORDINPUT::getWidget()
{
	return this->keywordInputDialog;
}

void KEYWORDINPUT::sendKeywordBrowsing() {
	QString qs = keywordInputDialog->textValue();

	//QString toStdString() returns empty string because of some encoding-issues 
	//std::string keyword = qs.toLocal8Bit().constData();
	if (brwsSearchHodler != NULL)
		brwsSearchHodler->setKeyword(qs);

}

void KEYWORDINPUT::sendKeywordSpecific() {
		QString qs = keywordInputDialog->textValue();

		//QString toStdString() returns empty string because of some encoding-issues 
		//std::string keyword = qs.toLocal8Bit().constData();
		if (spcfSearchHodler!=NULL)
			spcfSearchHodler->setKeyword(qs);

	}