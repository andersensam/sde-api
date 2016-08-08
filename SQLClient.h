/*  (    (           
 *  )\ ) )\ )        
 *  (()/((()/(   (    
 *  /(_))/(_))  )\   
 *  (_)) (_))_  ((_)  
 *  / __| |   \ | __| 
 *  \__ \ | |) || _|  
 *  |___/ |___/ |___| 
 *
 * Project: MySQL Client in C++
 * Author: Sam Andersen
 * Version: 20160808
 * TODO: Continue adding functionality
 */

#ifndef SQL_CLIENT_H
#define SQL_CLIENT_H

/* Standard libraries */
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string> 

/* MySQL dependencies */
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

class SQLClient {
public:
	SQLClient(std::string _server, std::string _username, std::string _password,
		std::string _schema, std::string _displaydebug);

	std::string getCount(std::string tableName);
	int getMaxId(std::string tableName);
	void execute(std::string query);

	int getInternalId(std::string table, std::string Id);
	std::vector<int> getChildIds(std::string parentTable, int parentId, std::string childTable);

	void executeTransaction(std::vector<std::string>& queryList);
	void executePreparedStatement(const std::string& baseStatement, std::vector<std::string>& escapeStrings);

	bool existingRecord(std::string table, std::string Id);
	std::vector<int> getLinkedSessions(std::string eventId);

	std::vector<std::string> getQueryResult(std::string query, std::string resultName);
	std::vector<std::string> getQueryResult(std::string baseStatement, std::vector<std::string>& escapeStrings, std::string resultName);
private:
	sql::Driver* driver;
	sql::Connection* conn;
	sql::Statement* stmt;
	sql::ResultSet* res;
	sql::PreparedStatement* prep;

	std::string server;
	std::string username;
	std::string password;
	std::string schema;

	std::string tempQuery;

	bool SQL_DISPLAYDEBUG;
};

#endif 