/*
 * =====================================================================================
 *
 *       Filename:  main_client.cpp
 *
 *    Description:  binder client implementation
 *
 *        Version:  1.0
 *        Created:  12/12/2012 03:52:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zzz.Mraz (Programmer), zzz.Mraz@gmail.com
 *   Organization:  ZSTU
 *
 * =====================================================================================
 */
#define	LOG_TAG "client"			/* android log tag */
#include <utils/Log.h>
#include <binder/ProcessState.h>
#include <binder/IPCThreadState.h>
#include <binder/IServiceManager.h>
#include "libclient.h"

using namespace android;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
	sp<IServiceManager> sm = defaultServiceManager();
	sp<IBinder> binder;
	sp<ITestClient> mClient;
	do 
	{
		binder = sm->getService(ITestClient::descriptor);
		if ( binder != 0)
			break;
		LOGW("TestService not published, waiting...");
		usleep(500000);
	} while ( true );				/* -----  end do-while  ----- */

	LOGI("TestClient now is trying...");

	mClient = interface_cast<ITestClient>(binder);
	mClient->hellothere("*****hello binder!*****");

	LOGI("TestClient now is exiting...");
	return 0;
}				/* ----------  end of function main  ---------- */

