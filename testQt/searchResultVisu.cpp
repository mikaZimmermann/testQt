#include "searchResultVisu.h"
#include "resultItem.h"
#include "resultVisu.h"

SEARCHRESULTVISU::SEARCHRESULTVISU(QApplication* app) {

	wdg = new QWidget();
	wdg->setMouseTracking(true);
	//wdg->setEnabled(false);
	QHBoxLayout* mainLayout = new QHBoxLayout(wdg);
	/*
	Dummy searchResultCreation until GMAF Problem is sorted out
	
	
	*/

	std::vector<std::string> testFeatures;
	testFeatures.push_back("Gruen");
	testFeatures.push_back("Altmodisch");

	RESULTITEM* testResultItem = new RESULTITEM("testpicture", '1', "C:\\Users\\coding\\Pictures\\Pferd.jpg", testFeatures);

	RESULTVISU* testResultVisu = new RESULTVISU(testResultItem);

	//Dummy searchResult ends here

	searchResults.push_back(testResultVisu);

	//mainLayout->setEnabled(false);

	int n = searchResults.size();

	mainLayout->addWidget(testResultVisu);

	/*
	for (int x = 0; x < n; x++)
		{
			
			mainLayout->addWidget(searchResults.at(x));

		}
	*/
	wdg->show();

}


void SEARCHRESULTVISU::selectFeature()
{


}
