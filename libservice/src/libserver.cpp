/*
 * =====================================================================================
 *
 *       Filename:  libserver.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/2012 11:32:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zzz.Mraz (Programmer), zzz.Mraz@gmail.com
 *   Organization:  ZSTU
 *
 * =====================================================================================
 */
#define	LOG_NDEBUG 0				/* print LOGV */
#define	LOT_TAG "libserver"			/* android log tag */
#include <utils/Log.h>
#include <binder/IServiceManager.h>
#include <binder/Parcel.h>
#include "libserver.h"

/*
 * =====================================================================================
 *        Class:  BpTestServer
 *  Description:  binder proxy 
 * =====================================================================================
 */
class BpTestServer : public BpInterface<ITestServer>
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		BpTestServer (const sp<IBinder> impl) : BpInterface<ITestServer>(impl) {}

		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class BpTestServer  ----- */

IMPLEMENT_META_INTERFACE(TestServer, SERVICE_NAME);

void TestServer::instantiate () 
{
	 defaultServiceManager()->addService(ITestServer::descriptor, new TestServer());
}		/* -----  end of method TestServer::instatiate  ----- */

TestServer::TestServer ()
{
	LOGV("TestServer created");
}		/* -----  end of method TestServer::TestServer  ----- */


TestServer::~TestServer ()
{
	LOGV("TestServer destroyed");
}		/* -----  end of method TestServer::~TestServer  ----- */


 status_t TestServer::onTransact (uint32_t code, 
		const  Parcel& data,
		 Parcel* reply,
		uint32_t flags)
{
	LOGV("onTransact(%u, %u)", code, flags);
	
	switch ( code ) {
		case HELLO_THERE: 
			{
				CHECK_INTERFACE(ITestServer, data, reply);
				const char* str;
				str = data.readCString();
				LOGI("*************TestServer::onTransact*************");
				LOGI("%s\n", str);
				return NO_ERROR;
			} break;

		default:	
			return BBinder::onTransact(code, data, reply, flags);
	}				/* -----  end switch  ----- */
	return  NO_ERROR;
}		/* -----  end of method TestServer::onTransact  ----- */

