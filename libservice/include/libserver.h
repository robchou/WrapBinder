/*
 * =====================================================================================
 *
 *       Filename:  libserver.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/05/2012 10:45:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zzz.Mraz (Programmer), zzz.Mraz@gmail.com
 *   Organization:  ZSTU
 *
 * =====================================================================================
 */
#ifndef  __LIBSERVER_H__
#define  __LIBSERVER_H__
#define	SERVICE_NAME "test.service"	/* service name */

#include <binder/IInterface.h>
#include <utils/String16.h>

using namespace android;

enum {
	HELLO_THERE = 0
};

/*
 * =====================================================================================
 *        Class:  ITestServer
 *  Description:  binder server
 * =====================================================================================
 */
class ITestServer : public  IInterface
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		DECLARE_META_INTERFACE(TestServer);

		/* ====================  ACCESSORS     ======================================= */
//		virtual void hellothere(const char *str) = 0;

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class ITestServer  ----- */


/*
 * =====================================================================================
 *        Class:  BnTestServer
 *  Description:  Binder native server
 * =====================================================================================
 */
class BnTestServer : public  BnInterface<ITestServer>
{
	public:
		/* ====================  LIFECYCLE     ======================================= */

		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class BnTestServer  ----- */


/*
 * =====================================================================================
 *        Class:  TestServer
 *  Description:  server
 * =====================================================================================
 */
class TestServer : public BnTestServer
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		TestServer ();                             /* constructor */
		virtual ~TestServer();                  	/* destructor */
		static void instantiate();

		/* ====================  ACCESSORS     ======================================= */
		 status_t onTransact(uint32_t code,
				const  Parcel &data,
				 Parcel *reply,
				uint32_t flags);

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class TestServer  ----- */

#endif   /* ----- #ifndef __LIBSERVER_H__  ----- */
