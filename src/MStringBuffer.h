//v2.0 copyright Comine.com 20140513T0854
#ifndef MStringBuffer_h
#define MStringBuffer_h

//////////////////////////////////////////////////////
#include "MStdLib.h"
#include "TVector.h"

//////////////////////////////////////////////////////////////
class MStringBuffer
	{
	TVector<char> mBuffer;					// TVector
	int mEndPos;							// location of '\0'

	/////////////////////////////////////////////////////////
	void ClearObject(void);

	/////////////////////////////////////////////////////////
	public:
	MStringBuffer(void);
	explicit MStringBuffer(int length);		// length=maximum strlen of string
	~MStringBuffer(void);
	bool Create(int length);				// length=maximum strlen of string
	bool Create(const char *string);		// allocate space for string
	bool Destroy(void);
	bool Clear(void);						// Reset string to NULL
	const char *Get(void);					// Get string
	bool Add(char ch);						// Add a char to end of buffer
	bool Add(const char *st);				// Add str to buffer
	bool Add(int index,char ch);			// Insert a char at index
	bool Set(int index,char ch);			// Set char at index
	bool Set(const char *string);			// Set a string in space
	char Get(int index);					// returns char at index
	int GetStringLength(void);				// Get string length
	char operator[](int index);				// Efficient way of accessing  a character
	bool TrimLeft(void);					// Trim extra spaces from left
	bool TrimRight(void);					// Trim Extra spaces from right
	bool Trim(void);						// Trim all unnecessary spaces
	bool Compare(const char *string);		// Compare string with buffer content
	bool ICompare(const char *string);		// Case Insensitive Compare
	bool CutLeft(int length);				// Cut length characters
	bool CompareLeft(const char *string);	// Check if left portion of string matchs
	bool CapitilizeFirstLetter(void);		// Capitilize First Letter: this is a test -> This Is A Test
	bool ToUpperCase(void);					// Convert to Upper case
	bool ToLowerCase(void);					// Convert to Lower case
	};

#endif // MStringBuffer_h

