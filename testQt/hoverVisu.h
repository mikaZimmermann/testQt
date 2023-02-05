#pragma once
#include "qtDefine.h"

class HOVERVISU : public QWidget {
public:
	std::vector<std::string> features;
	std::vector<QLabel*> featuresLabel;

	QGridLayout* mainLayout;

	HOVERVISU(std::vector<std::string> resultFeatures);

	std::vector<std::string> getFeautres(int amountFeatures);

	void setVisibility(bool visibility);

};