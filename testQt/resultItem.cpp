#include "resultItem.h"
#include "stdio.h"
#include <string>
#include "qtDefine.h"

RESULTITEM::RESULTITEM(std::string name, int id, std::string imagePath, std::vector<std::string> features, int parentId) {

	resultName = name;
	resultId = id;
	resultParentId = parentId;
	resultImagePath = imagePath;
	resultFeatures = features;

	QString testqs = QString::fromLocal8Bit(imagePath);


	resultImageLabel = new QLabel();
	QPixmap pixmap(testqs);
	resultImageLabel->setPixmap(pixmap);


}

QLabel* RESULTITEM::getResultLabel()
{
	return this->resultImageLabel;
}

void RESULTITEM::setVisibility(bool visibility)
{

	resultImageLabel->setVisible(visibility);

}

