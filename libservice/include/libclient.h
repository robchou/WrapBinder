/*
 * =====================================================================================
 *
 *       Filename:  libclient.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/2012 11:24:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zzz.Mraz (Programmer), zzz.Mraz@gmail.com
 *   Organization:  ZSTU
 *
 * =====================================================================================
 */

#ifndef  __LIBCLIENT_H__
#define  __LIBCLIENT_H__
#include <binder/IInterface.h>
#include "libserver.h"
/*
 * =====================================================================================
 *        Class:  TestClient
 *  Description:  binder client
 * =====================================================================================
 */
class ITestClient : public android::IInterface
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		DECLARE_META_INTERFACE(TestClient);

		/* ====================  ACCESSORS     ======================================= */
		virtual void hellothere(const char* str) = 0;

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class TestClient  ----- */


#endif   /* ----- #ifndef __LIBCLIENT_H__  ----- */

