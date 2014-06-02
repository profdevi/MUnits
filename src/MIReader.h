//v1.4 copyright Comine.com 20110330W22
#ifndef MIREADER_H
#define MIREADER_H

////////////////////////////////////////////
struct MIReader
	{
	////////////////////////////////////////////
	virtual bool OnRead(void *buffer,int length)=0;

	////////////////////////////////////////////
	bool Read(char *string,int bufsize);
	bool Read(char &value);
	bool Read(unsigned char &value);
	bool Read(bool &value);
	bool Read(short &value);
	bool Read(int &value);
	bool Read(unsigned long &value);
	bool Read(float &value);
	bool Read(double &value);
	bool Read(void *block,int size);
	bool ReadLine(char *string,int bufsize);			// Reads whole line till '\n'
	};


////////////////////////////////////////////
// Support Functions
inline bool MIReaderRead(MIReader &reader,char *string,int bufsize)
	{
	return reader.Read(string,bufsize);
	}


////////////////////////////////////////////
inline bool MIReaderRead(MIReader &reader,char &value)
	{
	return reader.Read(value);
	}


////////////////////////////////////////////
inline bool MIReaderRead(MIReader &reader,unsigned char &value)
	{
	return reader.Read(value);
	}


////////////////////////////////////////////
inline bool MIReaderRead(MIReader &reader,bool &value)
	{
	return reader.Read(value);
	}


////////////////////////////////////////////
inline bool MIReaderRead(MIReader &reader,short &value)
	{
	return reader.Read(value);
	}


////////////////////////////////////////////
inline bool MIReaderRead(MIReader &reader,int &value)
	{
	return reader.Read(value);
	}


////////////////////////////////////////////
inline bool MIReaderRead(MIReader &reader,unsigned long &value)
	{
	return reader.Read(value);
	}


////////////////////////////////////////////
inline bool MIReaderRead(MIReader &reader,float &value)
	{
	return reader.Read(value);
	}


////////////////////////////////////////////
inline bool MIReaderRead(MIReader &reader,double &value)
	{
	return reader.Read(value);
	}


////////////////////////////////////////////
inline bool MIReaderRead(MIReader &reader,void *block,int size)
	{
	return reader.Read(block,size);
	}


////////////////////////////////////////////
inline bool MIReaderReadLine(MIReader &reader,char *string,int bufsize)
	{
	return reader.ReadLine(string,bufsize);
	}


#endif // MIREADER_H


