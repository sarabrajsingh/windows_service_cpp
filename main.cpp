#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <tchar.h>
#include "serviceInstaller.h"

using namespace std;

////////////////////////////////////////
// settings of the serivce (metadata) //
////////////////////////////////////////

// internal name of the service

#define SERVICE_NAME	"RajsFirstWindowsService"

// display name of the service (in services.msc)

#define SERVICE_DISPLAY_NAME	"Raj's First Windows Service"

// service start options

#define SERVICE_START_TYPE		SERVICE_DEMAND_START

// list of service dependencies - "dep1\0dep2\0\0" --- \0 is a null character in cpp-

#define SERVICE_DEPENDENCIES	""

// defining the system account that will be used to run the service

#define SERVICE_ACCOUNT		"NT AUTHOIRTY\\System"

// password of the service account

#define SERVICE_PASSWORD	NULL

// main function = mainservice(int, wchar_t *[])
// arguments = int argc and wchar_t argv[]
// argc counts the number of arguments given to the main function
// argv[] is an array that holds all the arguments
// mainservice() will return an exit code after execution

int main(int argc, char *argv[]){
	
	if((argc > 1) && ((*argv[1] == L'-' || *argv[1] == L'/'))){ 		//this line controls the passed arguments
		if(_tcsicmp("install", argv[1]+1)==0){	
			cout << "wagwan you passed in the install command";					//this line recognizes the install parameter, and makes sure there are no preceeding parameters
			/*InstallService(
				SERVICE_NAME,
				SERVICE_DISPLAY_NAME,
				SERVICE_START_TYPE,
				SERVICE_DEPENDENCIES,
				SERVICE_ACCOUNT,
				SERVICE_PASSWORD);*/
		}else if(_tcsicmp("remove", argv[1]+1)==0){
			cout << "wagwan you passed in the remove command";
			/*UninstallService(SERVICE_NAME);*/
	}else{
		cout 	<< "Parameters that can be used:\n\n"
				<< "-install to install the service\n"
				<< "-remove to remove the service\n";
				
		/*CSampleService service(SERVICE_NAME);
		if(!CServiceBase::Run(serivce)){
			cout << "Service failed to run with error 0x%08lx\n " << GetLastError();
			}*/
		}
	}
	return 0;
}
