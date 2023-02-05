#pragma once
#include "qtDefine.h"
#include "stdio.h"
#include <String>

class RESULTITEM {
public:
	
	std::string resultName;
	int resultId;
	int resultParentId;
	std::string resultImagePath;
	
	//Can be refactored to store it directly in HoverVisu
	std::vector<std::string> resultFeatures;


	QImage* resultImage;
	QLabel* resultImageLabel;

	RESULTITEM(std::string name, int id, std::string imagePath, std::vector<std::string> features,int parentId = NULL);

	QLabel* getResultLabel();
	void setVisibility(bool visibility);

};