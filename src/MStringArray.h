//v2.0 copyright Comine.com 20140513T0951
#ifndef MStringArray_h
#define MStringArray_h

/////////////////////////////////////////////////
#include "MStdLib.h"
#include "MString.h"
#include "TVector.h"
#include "TAutoPtr.h"

/////////////////////////////////////////////////
class MStringArray
	{
	/////////////////////////////////////////////////
	bool mNullStringsAllowed;
	TVector<TAutoPtr<MString> > mList;
	int mCount;

	/////////////////////////////////////////////////
	void ClearObject(void);
	bool UpdateString(int index,const char *string);
	bool ResizeArray(int size);
	
	/////////////////////////////////////////////////
	public:
	MStringArray(bool create=false,bool nullstrings=false);
	~MStringArray(void);
	bool Create(bool nullstrings=false);
	bool Destroy(void);
	bool Clear(void);									// Clear all the strings
	int GetCount(void);									// Get Count in Array
	const char *GetString(int index);					// Get String
	bool SetString(int index,const char *string);		// Add string at position
	bool SetString(const char *string);					// Add string to end
	bool Remove(int index);								// Remove string at index
	bool IsMember(const char *string);					// Check if string is a member
	bool Print(void);									// Print out the Array List
	};

#endif // MStringArray_h

