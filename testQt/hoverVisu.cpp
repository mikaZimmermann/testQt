#include "hoverVisu.h"
#include "qtDefine.h"

HOVERVISU::HOVERVISU(std::vector<std::string> resultFeatures)
{
	features = resultFeatures;

	mainLayout = new QGridLayout(this);

	int n = features.size();

	QString tmpQString;
	QLabel tmpLabel;

	for (int i = 0; i < n; i++) {

		featuresLabel.push_back(new QLabel());
		tmpQString = QString::fromLocal8Bit(features.at(i));
		featuresLabel[i]->setText(tmpQString);
		
	}

	for (int i = 0; i < n; i++) {

		mainLayout->addWidget(featuresLabel.at(i));

	}
}

std::vector<std::string> HOVERVISU::getFeautres(int amountFeatures)
{
	if (features.size() < amountFeatures)
	{
		return features;
	}
	
	//Missing random feature return
	else {
		std::vector<std::string> tempFeatures;
		
		
		for (int x = 0; x < amountFeatures; x++) {

			tempFeatures.push_back(features.at(x));

		}
		return tempFeatures;
	}
}

void HOVERVISU::setVisibility(bool visibility)
{
	this->setVisible(visibility);
}
