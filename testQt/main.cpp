#include <iostream>
#include "qtDefine.h"
#include "searchselect.h"
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
		
// Setup QT App and Start Gui


	QApplication* app = new QApplication(args, argv);

	SEARCHSELECT* gui = new SEARCHSELECT(app);
	
	QWidget* testwdg = new QWidget();
	app->exec();

	return 0;
}