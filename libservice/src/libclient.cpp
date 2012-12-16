/*
 * =====================================================================================
 *
 *       Filename:  libclient.cpp
 *
 *    Description:  implementation of libclient
 *
 *        Version:  1.0
 *        Created:  12/12/2012 12:27:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zzz.Mraz (Programmer), zzz.Mraz@gmail.com
 *   Organization:  ZSTU
 *
 * =====================================================================================
 */
#define	LOG_TAG "libclient"			/* android log tag */
#include <utils/Log.h>
#include <binder/Parcel.h>
#include "libserver.h"
#include "libclient.h"

/*
 * =====================================================================================
 *        Class:  BpTestClient
 *  Description:  binder proxy implementation
 * =====================================================================================
 */
class BpTestClient : public BpInterface<ITestClient>
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		BpTestClient (const sp<IBinder> impl) : BpInterface<ITestClient>(impl) {}

		/* ====================  ACCESSORS     ======================================= */
        void hellothere(const char *str)
        {
                Parcel data, reply;
                data.writeInterfaceToken(ITestClient::getInterfaceDescriptor());
                data.writeCString(str);
				LOGI("**************BpTestClient::hellothere()***************");
                remote()->transact(HELLO_THERE, data, &reply, android::IBinder::FLAG_ONEWAY);
        }

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class BpTestClient  ----- */

IMPLEMENT_META_INTERFACE(TestClient, SERVICE_NAME);
