//v1.2 copyright Comine.com 20110330W22
#include "MStdLib.h"
#include "MIWriter.h"


///////////////////////////////////////////////
bool MIWriter::Write(const void *buffer,int length)
	{
	if(this->OnWrite(buffer,length)==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIWriter::Write(const char *string)
	{
	int length=MStdStrLen(string)+1;
	if(this->OnWrite(string,length)==false)
		{
		return false;
		}

	return true;	
	}


///////////////////////////////////////////////
bool MIWriter::Write(short value)
	{
	if(this->OnWrite(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIWriter::Write(int value)
	{
	if(this->OnWrite(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIWriter::Write(unsigned long value)
	{
	if(this->OnWrite(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}



///////////////////////////////////////////////
bool MIWriter::Write(char value)
	{
	if(this->OnWrite(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIWriter::Write(unsigned char value)
	{
	if(this->OnWrite(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIWriter::Write(bool boolvalue)
	{
	char value;
	if(boolvalue==false)
		{ value=0;  }
	else
		{ value=1;  }

	if(this->OnWrite(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIWriter::Write(float value)
	{
	if(this->OnWrite(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIWriter::Write(double value)
	{
	if(this->OnWrite(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIWriter::WriteChars(const char *string)
	{
	int length=MStdStrLen(string);

	if(length==0) { return true; }

	if(this->OnWrite(string,length)==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIWriter::WriteChars(const char *str1,const char *str2,const char *str3
		,const char *str4,const char *str5,const char *str6)
	{
	if(str1==NULL) {  return true; }
	if(WriteChars(str1)==false) { return false; }

	if(str2==NULL) {  return true; }
	if(WriteChars(str2)==false) { return false; }

	if(str3==NULL) {  return true; }
	if(WriteChars(str3)==false) { return false; }

	if(str4==NULL) {  return true; }
	if(WriteChars(str4)==false) { return false; }

	if(str5==NULL) {  return true; }
	if(WriteChars(str5)==false) { return false; }

	if(str6==NULL) {  return true; }
	if(WriteChars(str6)==false) { return false; }

	return true;
	}


