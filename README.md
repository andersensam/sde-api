# sde-api
API Connection for SDE

Requirements: gSOAP 2.8.33, mysqlcppconn

Compile flags:

	c++ -Wall -Wextra -Wno-unused-parameter -Wno-macro-redefined -std=c++11 -I/usr/local/include SDE.cpp soapC.cpp soapSDEService.cpp -L/usr/local/lib -lgsoap++ -lmysqlcppconn -L. -lSQLClient -lSDE -o SDE.cgi
