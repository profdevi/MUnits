//v1.1 copyright Comine.com 20060205U14
#ifndef MCommandParser_h
#define MCommandParser_h

/////////////////////////////////////////////////////
#include "MString.h"
#include "MStringArray.h"

/////////////////////////////////////////////////////
class MCommandParser
	{
	/////////////////////////////////////////////////
	MString mSeperatorList;
	MStringArray mArray;

	/////////////////////////////////////////////////
	void ClearObject(void);
	bool IsSeperator(char ch);

	/////////////////////////////////////////////////
	public:
	MCommandParser(void);
	~MCommandParser(void);
	bool Create(const char *seperatorlist="\t\r\n =");
	bool Destroy(void);
	bool Clear(void);
	bool ParseString(const char *string);
	int GetCount(void);
	const char *GetString(int index);
	};


#endif // MCommandParser_h

