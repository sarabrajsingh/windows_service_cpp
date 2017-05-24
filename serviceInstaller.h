//SERVICE INSTALLER HEADER FILE

void InstallService(LPSTR pszServiceName,		// name of service being installed
					LPSTR pszDisplayName,		// dislayname of service
					DWORD dwStartType,			// service start option
					LPSTR pszDependencies,		// a pointer to double null-terminated array of null-seperated names of services or load ordering groups that the system must start before this service 
					LPSTR pszAccount,			// account that runs the service
					LPSTR pszPassword);			// service account password

void UninstallService(LPSTR pszSerivceName);	// name of the service being uninstalled
