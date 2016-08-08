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

/* General dependencies */
   
#include <iostream>
#include <time.h>
#include <chrono>
#include <string>
#include <vector>

/* Modular dependencies */

#include "SQLClient.h"

/* gSOAP dependencies */ 

#include "soapSDEService.h"
#include "SDE.nsmap"
#include "SDEKey.cpp"

int main() { 

    std::string SQLServer = "us-cdbr-iron-east-04.cleardb.net";
    std::string SQLUser = "bbea41a94fb106";
    std::string SQLPassword = "";
    std::string SQLSchema = "heroku_5160d72946064c2";

    SQLClient* sql = new SQLClient(SQLServer, SQLUser, SQLPassword, SQLSchema, "true");

    SDEService* server = new SDEService(sql);
   
	while (server->run(8080) != SOAP_TCP_ERROR) 
    	server->soap_stream_fault(std::cerr);

    server->destroy(); 
}
