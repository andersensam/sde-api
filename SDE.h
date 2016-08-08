/*  (    (           
 *  )\ ) )\ )        
 *  (()/((()/(   (    
 *  /(_))/(_))  )\   
 *  (_)) (_))_  ((_)  
 *  / __| |   \ | __| 
 *  \__ \ | |) || _|  
 *  |___/ |___/ |___| 
 *
 * Project: SDE
 * Author: Sam Andersen
 * Version: 20160808
 * TODO: Continue adding functionality
 */

// File: SDE.h
//gsoap ns service name: SDE
//gsoap ns service namespace: urn:SDE
//gsoap ns service location: http://localhost:8080
/*int ns__currentTime(time_t& response);*/

#include <string>
#include <vector>
#import "import/stlvector.h"

//gsoap ns schema namespace: urn:SDE

class ns:SDEKey {
public:
	std::string sessionKey {"0"};

	ns:SDEKey();
	virtual ~ns:SDEKey();
};

int ns__getLoginInfo(ns:SDEKey* session, std::string* desiredOnyen, std::string& response);
int ns__getRegisteredClasses(ns:SDEKey* session, std::string* desiredOnyen, std::vector<std::string>& response);
int ns__addOnyen(ns:SDEKey* session, std::string* desiredOnyen, std::string* desiredPassword, std::string& response);
int ns__registerClass(ns:SDEKey* session, std::string* desiredOnyen, std::string* desiredClass, std::string& response);