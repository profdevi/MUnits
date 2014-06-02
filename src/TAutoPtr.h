//v1.2 copyright Comine.com 20140518U0936
#ifndef TAutoPtr_h
#define TAutoPtr_h

///////////////////////////////////////////
#include "MStdLib.h"

//******************************************************
//**  TAutoPtr Template
//******************************************************
template<class RefObject>
class TAutoPtr
	{
	////////////////////////////////////////
	RefObject *mRefObject;

	////////////////////////////////////////
	void ClearObject(void)
		{
		mRefObject=NULL;
		}

	////////////////////////////////////////
	public:
	TAutoPtr(bool create=false)
		{
		ClearObject();
		if(create==true && Create()==false)
			{
			return;
			}
		}

	///////////////////////////////////////
	~TAutoPtr(void)
		{
		Destroy();
		}

	///////////////////////////////////////
	bool Create(void)
		{
		// Allocate heap object
		RefObject *newobj=new RefObject;
		if(newobj==NULL)
			{
			Destroy();
			return false;
			}

		// Destroy exisiting reference
		Destroy();
		
		mRefObject=newobj;
		return true;
		}


	////////////////////////////////////////
	bool Destroy(void)
		{
		if(mRefObject!=NULL)
			{
			delete mRefObject;
			mRefObject=NULL;
			}

		return true;
		}


	/////////////////////////////////////////
	RefObject *operator ->(void)
		{
		return mRefObject;
		}

	/////////////////////////////////////////
	RefObject& operator *(void)
		{
		return *mRefObject;
		}


	/////////////////////////////////////////
	RefObject *Get(void)
		{
		// Return internal pointer
		return mRefObject;
		}

	/////////////////////////////////////////
	bool Swap(TAutoPtr<RefObject> &ref)
		{
		// Swap Referenced Memory
		RefObject *tmpobj=mRefObject;
		mRefObject = ref.mRefObject;
		ref.mRefObject=tmpobj;

		return true;
		}

	//////////////////////////////////////////
	bool operator=(TAutoPtr<RefObject> &ref)
		{
		if(ref.Get()==NULL)
			{
			Destroy();
			return true;
			}
		
		if(Create()==false)
			{
			return false;
			}

		// Assume Copy Sematics for type
		(*mRefObject) = (* ref.mRefObject);

		return true;
		}
	};

#endif // TAutoPtr_h

