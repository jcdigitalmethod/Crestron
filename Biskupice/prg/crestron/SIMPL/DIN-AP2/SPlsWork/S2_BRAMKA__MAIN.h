#ifndef __S2_BRAMKA__MAIN_H__
#define __S2_BRAMKA__MAIN_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_BRAMKA__MAIN_CHECKBUFFER_DIG_INPUT 0
#define __S2_BRAMKA__MAIN_ENABLE_DIG_INPUT 1


/*
* ANALOG_INPUT
*/



#define __S2_BRAMKA__MAIN_KOLOUT_STRING_INPUT 0
#define __S2_BRAMKA__MAIN_KOLOUT_ARRAY_NUM_ELEMS 15
#define __S2_BRAMKA__MAIN_KOLOUT_ARRAY_NUM_CHARS 30
CREATE_STRING_ARRAY( S2_BRAMKA__MAIN, __KOLOUT, __S2_BRAMKA__MAIN_KOLOUT_ARRAY_NUM_ELEMS, __S2_BRAMKA__MAIN_KOLOUT_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_BRAMKA__MAIN_CONNECTED_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/


#define __S2_BRAMKA__MAIN_KOLIN_STRING_OUTPUT 0
#define __S2_BRAMKA__MAIN_KOLIN_ARRAY_LENGTH 15

/*
* Direct Socket Variables
*/

#define __S2_BRAMKA__MAIN_WAGOCLIENT_SOCKET 17
#define __S2_BRAMKA__MAIN_WAGOCLIENT_STRING_MAX_LEN 300
START_SOCKET_DEFINITION( S2_BRAMKA__MAIN, __WAGOCLIENT )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_BRAMKA__MAIN, SocketRxBuf, __S2_BRAMKA__MAIN_WAGOCLIENT_STRING_MAX_LEN );
};



/*
* INTEGER_PARAMETER
*/
#define __S2_BRAMKA__MAIN_PORT_INTEGER_PARAMETER 10
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/
#define __S2_BRAMKA__MAIN_IP_STRING_PARAMETER 11
#define __S2_BRAMKA__MAIN_START_STRING_PARAMETER 12
#define __S2_BRAMKA__MAIN_END_STRING_PARAMETER 13
#define __S2_BRAMKA__MAIN_IP_PARAM_MAX_LEN 15
CREATE_STRING_STRUCT( S2_BRAMKA__MAIN, __IP, __S2_BRAMKA__MAIN_IP_PARAM_MAX_LEN );
#define __S2_BRAMKA__MAIN_START_PARAM_MAX_LEN 2
CREATE_STRING_STRUCT( S2_BRAMKA__MAIN, __START, __S2_BRAMKA__MAIN_START_PARAM_MAX_LEN );
#define __S2_BRAMKA__MAIN_END_PARAM_MAX_LEN 2
CREATE_STRING_STRUCT( S2_BRAMKA__MAIN, __END, __S2_BRAMKA__MAIN_END_PARAM_MAX_LEN );
#define __S2_BRAMKA__MAIN_KOLTYPE_STRING_PARAMETER 14
#define __S2_BRAMKA__MAIN_KOLTYPE_ARRAY_NUM_ELEMS 15
#define __S2_BRAMKA__MAIN_KOLTYPE_ARRAY_NUM_CHARS 3
CREATE_STRING_ARRAY( S2_BRAMKA__MAIN, __KOLTYPE, __S2_BRAMKA__MAIN_KOLTYPE_ARRAY_NUM_ELEMS, __S2_BRAMKA__MAIN_KOLTYPE_ARRAY_NUM_CHARS );


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_BRAMKA__MAIN )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __KOLIN );
   DECLARE_STRING_ARRAY( S2_BRAMKA__MAIN, __KOLOUT );
   DECLARE_SOCKET( S2_BRAMKA__MAIN, __WAGOCLIENT );
   DECLARE_STRING_STRUCT( S2_BRAMKA__MAIN, __IP );
   DECLARE_STRING_STRUCT( S2_BRAMKA__MAIN, __START );
   DECLARE_STRING_STRUCT( S2_BRAMKA__MAIN, __END );
   DECLARE_STRING_ARRAY( S2_BRAMKA__MAIN, __KOLTYPE );
};

START_NVRAM_VAR_STRUCT( S2_BRAMKA__MAIN )
{
   unsigned short __SEMAFOR;
   unsigned short __MX;
   unsigned short __WT;
};



#endif //__S2_BRAMKA__MAIN_H__

