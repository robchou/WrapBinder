/*
 * =====================================================================================
 *
 *       Filename:  main_server.cpp
 *
 *    Description:  binder server process
 *
 *        Version:  1.0
 *        Created:  12/12/2012 02:50:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zzz.Mraz (Programmer), zzz.Mraz@gmail.com
 *   Organization:  ZSTU
 *
 * =====================================================================================
 */
#define	LOG_TAG "server"			/* android log tag */
#include <utils/Log.h>
#include <binder/ProcessState.h>
#include <binder/IPCThreadState.h>
#include "libserver.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  server main function
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
	TestServer::instantiate();	
	ProcessState::self()->startThreadPool();
	IPCThreadState::self()->joinThreadPool();
	return 0;
}				/* ----------  end of function main  ---------- */
