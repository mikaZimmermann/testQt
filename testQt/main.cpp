#include <iostream>
#include "qtDefine.h"
#include "guiHandler.h"
#include <string>
#include <stdio.h>
#include <winsock2.h>
#include <Ws2tcpip.h>
#include "..\..\..\..\Downloads\gsoap_2.8.124\gsoap-2.8\gsoap\bin\win32\soapGMAF_USCOREFacade_USCORESOAPImplPortBindingProxy.h"

#include <iostream>
#include <fstream>

#include "..\..\..\..\Downloads\gsoap_2.8.124\gsoap-2.8\gsoap\bin\win64\GMAF_USCOREFacade_USCORESOAPImplPortBinding.nsmap"

#pragma comment(lib, "Ws2_32.lib")


int main(int args,char *argv[]) {

	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy gmafInstance;


	ns1__getAuthToken* accessToken = new ns1__getAuthToken();

	std::string accessTokenValue = "fp2223";

	accessToken->arg0 = &accessTokenValue;

	

	ns1__getAuthTokenResponse* accessTokenResponse = new ns1__getAuthTokenResponse;
	
	
	ns1__processAssetFromURL* proccessAssetsFromUrl = new ns1__processAssetFromURL;
	ns1__processAssetFromURLResponse* proccessAssetsFromUrlResponse = new ns1__processAssetFromURLResponse;


	ns1__processAssetFromFile* proccessAssetsFromFile = new ns1__processAssetFromFile;
	ns1__processAssetFromFileResponse* proccessAssetsFromFileResponse = new ns1__processAssetFromFileResponse;


	std::string pathToFile = "C:\\Users\\coding\\Documents\\FP2223_GMAF_final\\FP2223_GMAF\\collection\\5YjXVOe.jpg";

	//ns1__processAssetFromURLResponse* processAssetsFromUrlResponse = new ns1__processAssetFromURLResponse;
	


	std::cout << "Hello, World!" << std::endl;

	if (gmafInstance.getAuthToken(accessToken, *accessTokenResponse) == SOAP_OK)
		std::cout << "We are hero!" << std::endl;
	

	//gmafInstance

	//gmafInstance.recv_getAuthToken(*accessTokenResponse);
	
	/*
	proccessAssetsFromFile->arg0 = accessTokenResponse->return_;
	proccessAssetsFromFile->arg1 = &pathToFile;
	
	*/
	//proccessAssetsFromFile->soap = gmafInstance.soap;
	
	/*
	ns1__processAssetFromBytes* processFromByte = new ns1__processAssetFromBytes;
	ns1__processAssetFromBytesResponse* processFromByteResponse = new ns1__processAssetFromBytesResponse;
	
	*/
	/*
	xsd__base64Binary* testBinary = new xsd__base64Binary;

	std::string myfile("C:\\Users\\coding\\Documents\\FP2223_GMAF_new\\FP2223_GMAF\\collection\\5YjXVOe.jpg");

	std::ifstream ifs(myfile, std::ios::binary | std::ios::ate);
	std::ifstream::pos_type pos = ifs.tellg();
	std::vector<char>  result(pos);

	if (pos == 0) {
		result = std::vector<char>{};
	}

	ifs.seekg(0, std::ios::beg);
	ifs.read(&result[0], pos);

	unsigned char* testChar = reinterpret_cast<unsigned char*>(result.front());

	
	testBinary->__ptr = testChar;
	testBinary->__size = result.size();


	processFromByte->arg0 = accessTokenResponse->return_;
	processFromByte->arg1 = testBinary;

	gmafInstance.processAssetFromBytes(processFromByte, *processFromByteResponse);

	//processFromByte->arg1 = "jpg"
	*/

	std::string url = "https://upload.wikimedia.org/wikipedia/commons/thumb/a/a2/Horse_December_2014-1.jpg/1280px-Horse_December_2014-1.jpg";

	proccessAssetsFromUrl->arg0 = accessTokenResponse->return_;
	proccessAssetsFromUrl->arg1 = &url;
//	proccessAssetsFromUrl->soap = accessTokenResponse->soap;
	
	if (gmafInstance.processAssetFromURL(proccessAssetsFromUrl, *proccessAssetsFromUrlResponse) == SOAP_OK)
		std::cout << "We are heros again!" << std::endl;

		
	ns1__getCollection* getCollection = new ns1__getCollection;

	ns1__getCollectionResponse* getCollectionResponse = new ns1__getCollectionResponse;

	getCollection->arg0 = accessTokenResponse->return_;




	gmafInstance.getCollection(getCollection, *getCollectionResponse);


	ns1__getRecommendedAssets* getRecommendedAssets = new ns1__getRecommendedAssets;
	ns1__getRecommendedAssetsResponse* getRecommendedAssetsResponse = new ns1__getRecommendedAssetsResponse;

	ns1__getOrGenerateGraphCodeResponse* testGenerateGC = new ns1__getOrGenerateGraphCodeResponse;

	

	

	QApplication* app = new QApplication(args, argv);

	GUIHANDLER* gui = new GUIHANDLER(app);
	
	QWidget* testwdg = new QWidget();

	testwdg->setWindowTitle("Fuck you");
	testwdg->show();

	app->exec();

	std::cout << "Hello, World!" << std::endl; // This prints Hello, World!
	return 0;
}