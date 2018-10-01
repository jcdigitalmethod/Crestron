#ifndef __S2_XBMC_BROWSE_H__
#define __S2_XBMC_BROWSE_H__


#include "S2_Common_Functions.h"

/*
* STRUCTURE S2_XBMC_Browse__LISTITEM
*/
#define LISTITEM__S2_XBMC_Browse_LABEL_STRING_MAX_LEN 250
#define LISTITEM__S2_XBMC_Browse_GENRE_STRING_MAX_LEN 90
#define LISTITEM__S2_XBMC_Browse_THUMBNAIL_STRING_MAX_LEN 200
#define LISTITEM__S2_XBMC_Browse_YEAR_STRING_MAX_LEN 10
START_STRUCTURE_DEFINITION( S2_XBMC_Browse, LISTITEM )
{
   CREATE_STRING_STRUCT( S2_XBMC_Browse, LISTITEM__LABEL, LISTITEM__S2_XBMC_Browse_LABEL_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, LISTITEM__LABEL );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, LISTITEM__GENRE, LISTITEM__S2_XBMC_Browse_GENRE_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, LISTITEM__GENRE );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, LISTITEM__THUMBNAIL, LISTITEM__S2_XBMC_Browse_THUMBNAIL_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, LISTITEM__THUMBNAIL );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, LISTITEM__YEAR, LISTITEM__S2_XBMC_Browse_YEAR_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, LISTITEM__YEAR );
   unsigned short LISTITEM__ID;
   unsigned short LISTITEM__PLAYCOUNT;
};

/*
* STRUCTURE S2_XBMC_Browse__ALBUMLISTITEM
*/
#define ALBUMLISTITEM__S2_XBMC_Browse_LABEL_STRING_MAX_LEN 250
#define ALBUMLISTITEM__S2_XBMC_Browse_GENRE_STRING_MAX_LEN 50
#define ALBUMLISTITEM__S2_XBMC_Browse_ARTIST_STRING_MAX_LEN 50
#define ALBUMLISTITEM__S2_XBMC_Browse_THUMBNAIL_STRING_MAX_LEN 200
#define ALBUMLISTITEM__S2_XBMC_Browse_YEAR_STRING_MAX_LEN 10
START_STRUCTURE_DEFINITION( S2_XBMC_Browse, ALBUMLISTITEM )
{
   CREATE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__LABEL, ALBUMLISTITEM__S2_XBMC_Browse_LABEL_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__LABEL );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__GENRE, ALBUMLISTITEM__S2_XBMC_Browse_GENRE_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__GENRE );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__ARTIST, ALBUMLISTITEM__S2_XBMC_Browse_ARTIST_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__ARTIST );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__THUMBNAIL, ALBUMLISTITEM__S2_XBMC_Browse_THUMBNAIL_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__THUMBNAIL );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__YEAR, ALBUMLISTITEM__S2_XBMC_Browse_YEAR_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, ALBUMLISTITEM__YEAR );
   unsigned short ALBUMLISTITEM__ID;
   unsigned short ALBUMLISTITEM__PLAYCOUNT;
};

/*
* STRUCTURE S2_XBMC_Browse__SONGLISTITEM
*/
#define SONGLISTITEM__S2_XBMC_Browse_LABEL_STRING_MAX_LEN 250
#define SONGLISTITEM__S2_XBMC_Browse_GENRE_STRING_MAX_LEN 50
#define SONGLISTITEM__S2_XBMC_Browse_ALBUM_STRING_MAX_LEN 50
#define SONGLISTITEM__S2_XBMC_Browse_THUMBNAIL_STRING_MAX_LEN 200
#define SONGLISTITEM__S2_XBMC_Browse_DURATION_STRING_MAX_LEN 10
#define SONGLISTITEM__S2_XBMC_Browse_TRACKNO_STRING_MAX_LEN 3
START_STRUCTURE_DEFINITION( S2_XBMC_Browse, SONGLISTITEM )
{
   CREATE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__LABEL, SONGLISTITEM__S2_XBMC_Browse_LABEL_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__LABEL );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__GENRE, SONGLISTITEM__S2_XBMC_Browse_GENRE_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__GENRE );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__ALBUM, SONGLISTITEM__S2_XBMC_Browse_ALBUM_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__ALBUM );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__THUMBNAIL, SONGLISTITEM__S2_XBMC_Browse_THUMBNAIL_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__THUMBNAIL );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__DURATION, SONGLISTITEM__S2_XBMC_Browse_DURATION_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__DURATION );
   CREATE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__TRACKNO, SONGLISTITEM__S2_XBMC_Browse_TRACKNO_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, SONGLISTITEM__TRACKNO );
   unsigned short SONGLISTITEM__ID;
};


/*
* Constructor and Destructor
*/
int S2_XBMC_Browse_LISTITEM_Constructor ( START_STRUCTURE_DEFINITION( S2_XBMC_Browse, LISTITEM ) * me, int nVerbose );
int S2_XBMC_Browse_LISTITEM_Destructor ( START_STRUCTURE_DEFINITION( S2_XBMC_Browse, LISTITEM ) * me, int nVerbose );
int S2_XBMC_Browse_ALBUMLISTITEM_Constructor ( START_STRUCTURE_DEFINITION( S2_XBMC_Browse, ALBUMLISTITEM ) * me, int nVerbose );
int S2_XBMC_Browse_ALBUMLISTITEM_Destructor ( START_STRUCTURE_DEFINITION( S2_XBMC_Browse, ALBUMLISTITEM ) * me, int nVerbose );
int S2_XBMC_Browse_SONGLISTITEM_Constructor ( START_STRUCTURE_DEFINITION( S2_XBMC_Browse, SONGLISTITEM ) * me, int nVerbose );
int S2_XBMC_Browse_SONGLISTITEM_Destructor ( START_STRUCTURE_DEFINITION( S2_XBMC_Browse, SONGLISTITEM ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_XBMC_Browse_LIST_UNWATCHEDONLY_DIG_INPUT 0
#define __S2_XBMC_Browse_LIST_TOPPAGE_DIG_INPUT 1
#define __S2_XBMC_Browse_LIST_BOTTOMPAGE_DIG_INPUT 2
#define __S2_XBMC_Browse_LIST_PAGEMINUS_DIG_INPUT 3
#define __S2_XBMC_Browse_LIST_PAGEPLUS_DIG_INPUT 4
#define __S2_XBMC_Browse_LIST_BACK_DIG_INPUT 5
#define __S2_XBMC_Browse_LIST_MOVIES_DIG_INPUT 6
#define __S2_XBMC_Browse_LIST_ALBUMS_DIG_INPUT 7
#define __S2_XBMC_Browse_LIST_TVSHOWS_DIG_INPUT 8
#define __S2_XBMC_Browse_LIST_ARTISTS_DIG_INPUT 9
#define __S2_XBMC_Browse_LIST_SONGS_DIG_INPUT 10
#define __S2_XBMC_Browse_LIST_EXIT_DETAILS_PAGE_DIG_INPUT 11
#define __S2_XBMC_Browse_CONNECT_DIG_INPUT 12


/*
* ANALOG_INPUT
*/
#define __S2_XBMC_Browse_PLAYITEM_ANALOG_INPUT 0
#define __S2_XBMC_Browse_SELECTEDITEM_ANALOG_INPUT 1

#define __S2_XBMC_Browse_SEARCHCRITERIA$_STRING_INPUT 2
#define __S2_XBMC_Browse_SEARCHCRITERIA$_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_XBMC_Browse, __SEARCHCRITERIA$, __S2_XBMC_Browse_SEARCHCRITERIA$_STRING_MAX_LEN );

#define __S2_XBMC_Browse_TX$_BUFFER_INPUT 3
#define __S2_XBMC_Browse_TX$_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_XBMC_Browse, __TX$, __S2_XBMC_Browse_TX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_XBMC_Browse_ISCONNECTED_DIG_OUTPUT 0
#define __S2_XBMC_Browse_MOVIEDETAILS_DIG_OUTPUT 1
#define __S2_XBMC_Browse_TVSHOWDETAILS_DIG_OUTPUT 2
#define __S2_XBMC_Browse_MUSICDETAILS_DIG_OUTPUT 3
#define __S2_XBMC_Browse_SEARCHAVAILABLE_DIG_OUTPUT 4
#define __S2_XBMC_Browse_ISMOVIELIST_DIG_OUTPUT 5
#define __S2_XBMC_Browse_ISALBUMLIST_DIG_OUTPUT 6
#define __S2_XBMC_Browse_ISTVSHOWLIST_DIG_OUTPUT 7
#define __S2_XBMC_Browse_ISARTISTLIST_DIG_OUTPUT 8
#define __S2_XBMC_Browse_ISSONGLIST_DIG_OUTPUT 9
#define __S2_XBMC_Browse_CHECKCURRENTLYPLAYING_DIG_OUTPUT 10
#define __S2_XBMC_Browse_CLEARCURRENTLYPLAYING_DIG_OUTPUT 11
#define __S2_XBMC_Browse_SOCKETBUSY_DIG_OUTPUT 12
#define __S2_XBMC_Browse_LOADING_DIG_OUTPUT 13

#define __S2_XBMC_Browse_WATCHED_DIG_OUTPUT 14
#define __S2_XBMC_Browse_WATCHED_ARRAY_LENGTH 10

/*
* ANALOG_OUTPUT
*/
#define __S2_XBMC_Browse_LIST_CURRENTSCREEN_ANALOG_OUTPUT 3

#define __S2_XBMC_Browse_PLOTSELECTED$_STRING_OUTPUT 0
#define __S2_XBMC_Browse_LIST_SUMMARY$_STRING_OUTPUT 1
#define __S2_XBMC_Browse_RX$_STRING_OUTPUT 2

#define __S2_XBMC_Browse_NAME$_STRING_OUTPUT 4
#define __S2_XBMC_Browse_NAME$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_YEAR$_STRING_OUTPUT 14
#define __S2_XBMC_Browse_YEAR$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_GENRE$_STRING_OUTPUT 24
#define __S2_XBMC_Browse_GENRE$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_RATING$_STRING_OUTPUT 34
#define __S2_XBMC_Browse_RATING$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_RUNTIME$_STRING_OUTPUT 44
#define __S2_XBMC_Browse_RUNTIME$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_DIRECTOR$_STRING_OUTPUT 54
#define __S2_XBMC_Browse_DIRECTOR$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_TAGLINE$_STRING_OUTPUT 64
#define __S2_XBMC_Browse_TAGLINE$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_THUMB$_STRING_OUTPUT 74
#define __S2_XBMC_Browse_THUMB$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_WRITER$_STRING_OUTPUT 84
#define __S2_XBMC_Browse_WRITER$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_EPISODEORTRACKNUM$_STRING_OUTPUT 94
#define __S2_XBMC_Browse_EPISODEORTRACKNUM$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_SEASONORALBUMNAME$_STRING_OUTPUT 104
#define __S2_XBMC_Browse_SEASONORALBUMNAME$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_STUDIO$_STRING_OUTPUT 114
#define __S2_XBMC_Browse_STUDIO$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_MPAA$_STRING_OUTPUT 124
#define __S2_XBMC_Browse_MPAA$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_SERIESORARTISTNAME$_STRING_OUTPUT 134
#define __S2_XBMC_Browse_SERIESORARTISTNAME$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_FANART$_STRING_OUTPUT 144
#define __S2_XBMC_Browse_FANART$_ARRAY_LENGTH 10
#define __S2_XBMC_Browse_FILENAME$_STRING_OUTPUT 154
#define __S2_XBMC_Browse_FILENAME$_ARRAY_LENGTH 10

/*
* Direct Socket Variables
*/

#define __S2_XBMC_Browse_XBMC_SOCKET 7
#define __S2_XBMC_Browse_XBMC_STRING_MAX_LEN 40000
START_SOCKET_DEFINITION( S2_XBMC_Browse, __XBMC )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_XBMC_Browse, SocketRxBuf, __S2_XBMC_Browse_XBMC_STRING_MAX_LEN );
};



/*
* INTEGER_PARAMETER
*/
#define __S2_XBMC_Browse_STEPAMOUNT_INTEGER_PARAMETER 12
#define __S2_XBMC_Browse_USEJPGEXTENSION_INTEGER_PARAMETER 13
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
#define __S2_XBMC_Browse_XBMC_IPADDR$_STRING_PARAMETER 10
#define __S2_XBMC_Browse_XBMC_HTTPPORT$_STRING_PARAMETER 11
#define __S2_XBMC_Browse_LOGIN_STRING_PARAMETER 14
#define __S2_XBMC_Browse_PASSWORD_STRING_PARAMETER 15
#define __S2_XBMC_Browse_XBMC_TCPPORT$_STRING_PARAMETER 16
#define __S2_XBMC_Browse_XBMC_IPADDR$_PARAM_MAX_LEN 16
CREATE_STRING_STRUCT( S2_XBMC_Browse, __XBMC_IPADDR$, __S2_XBMC_Browse_XBMC_IPADDR$_PARAM_MAX_LEN );
#define __S2_XBMC_Browse_XBMC_HTTPPORT$_PARAM_MAX_LEN 5
CREATE_STRING_STRUCT( S2_XBMC_Browse, __XBMC_HTTPPORT$, __S2_XBMC_Browse_XBMC_HTTPPORT$_PARAM_MAX_LEN );
#define __S2_XBMC_Browse_LOGIN_PARAM_MAX_LEN 30
CREATE_STRING_STRUCT( S2_XBMC_Browse, __LOGIN, __S2_XBMC_Browse_LOGIN_PARAM_MAX_LEN );
#define __S2_XBMC_Browse_PASSWORD_PARAM_MAX_LEN 30
CREATE_STRING_STRUCT( S2_XBMC_Browse, __PASSWORD, __S2_XBMC_Browse_PASSWORD_PARAM_MAX_LEN );
#define __S2_XBMC_Browse_XBMC_TCPPORT$_PARAM_MAX_LEN 5
CREATE_STRING_STRUCT( S2_XBMC_Browse, __XBMC_TCPPORT$, __S2_XBMC_Browse_XBMC_TCPPORT$_PARAM_MAX_LEN );


/*
* INTEGER
*/
CREATE_INTARRAY1D( S2_XBMC_Browse, __LIST_IDS, 10 );;
CREATE_INTARRAY1D( S2_XBMC_Browse, __SEASONNUMBER, 10 );;
CREATE_INTARRAY1D( S2_XBMC_Browse, __PLAYLISTIDS, 100 );;
CREATE_INTARRAY1D( S2_XBMC_Browse, __TCPBLOCKER, 1 );;
CREATE_DYNAMIC_INTARRAY1D( S2_XBMC_Browse, __TVSHOWSEASONS, 10 );;


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
#define __S2_XBMC_Browse_OUTPUTSTRING_STRING_MAX_LEN 250
CREATE_STRING_STRUCT( S2_XBMC_Browse, __OUTPUTSTRING, __S2_XBMC_Browse_OUTPUTSTRING_STRING_MAX_LEN );
#define __S2_XBMC_Browse_OUTPUTSTRINGNAME_ARRAY_NUM_ELEMS 20
#define __S2_XBMC_Browse_OUTPUTSTRINGNAME_ARRAY_NUM_CHARS 250
CREATE_STRING_ARRAY( S2_XBMC_Browse, __OUTPUTSTRINGNAME, __S2_XBMC_Browse_OUTPUTSTRINGNAME_ARRAY_NUM_ELEMS, __S2_XBMC_Browse_OUTPUTSTRINGNAME_ARRAY_NUM_CHARS );
#define __S2_XBMC_Browse_OUTPUTSTRINGVALUE_ARRAY_NUM_ELEMS 20
#define __S2_XBMC_Browse_OUTPUTSTRINGVALUE_ARRAY_NUM_CHARS 2000
CREATE_STRING_ARRAY( S2_XBMC_Browse, __OUTPUTSTRINGVALUE, __S2_XBMC_Browse_OUTPUTSTRINGVALUE_ARRAY_NUM_ELEMS, __S2_XBMC_Browse_OUTPUTSTRINGVALUE_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/
#define __S2_XBMC_Browse_ALBUMS_STRUCT_MAX_LEN 100
CREATE_STRUCTURE_DYNAMIC_ARRAY( S2_XBMC_Browse, __ALBUMS, ALBUMLISTITEM, __S2_XBMC_Browse_ALBUMS_STRUCT_MAX_LEN );
#define __S2_XBMC_Browse_ARTISTS_STRUCT_MAX_LEN 100
CREATE_STRUCTURE_DYNAMIC_ARRAY( S2_XBMC_Browse, __ARTISTS, LISTITEM, __S2_XBMC_Browse_ARTISTS_STRUCT_MAX_LEN );
#define __S2_XBMC_Browse_SONGS_STRUCT_MAX_LEN 50
CREATE_STRUCTURE_DYNAMIC_ARRAY( S2_XBMC_Browse, __SONGS, SONGLISTITEM, __S2_XBMC_Browse_SONGS_STRUCT_MAX_LEN );
#define __S2_XBMC_Browse_MOVIES_STRUCT_MAX_LEN 100
CREATE_STRUCTURE_DYNAMIC_ARRAY( S2_XBMC_Browse, __MOVIES, LISTITEM, __S2_XBMC_Browse_MOVIES_STRUCT_MAX_LEN );
#define __S2_XBMC_Browse_TVSHOWS_STRUCT_MAX_LEN 50
CREATE_STRUCTURE_DYNAMIC_ARRAY( S2_XBMC_Browse, __TVSHOWS, LISTITEM, __S2_XBMC_Browse_TVSHOWS_STRUCT_MAX_LEN );
#define __S2_XBMC_Browse_TVSHOWEPISODES_STRUCT_MAX_LEN 50
CREATE_STRUCTURE_DYNAMIC_ARRAY( S2_XBMC_Browse, __TVSHOWEPISODES, LISTITEM, __S2_XBMC_Browse_TVSHOWEPISODES_STRUCT_MAX_LEN );
#define __S2_XBMC_Browse_ARTISTALBUMS_STRUCT_MAX_LEN 15
CREATE_STRUCTURE_DYNAMIC_ARRAY( S2_XBMC_Browse, __ARTISTALBUMS, LISTITEM, __S2_XBMC_Browse_ARTISTALBUMS_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_XBMC_Browse )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __WATCHED );
   DECLARE_IO_ARRAY( __NAME$ );
   DECLARE_IO_ARRAY( __YEAR$ );
   DECLARE_IO_ARRAY( __GENRE$ );
   DECLARE_IO_ARRAY( __RATING$ );
   DECLARE_IO_ARRAY( __RUNTIME$ );
   DECLARE_IO_ARRAY( __DIRECTOR$ );
   DECLARE_IO_ARRAY( __TAGLINE$ );
   DECLARE_IO_ARRAY( __THUMB$ );
   DECLARE_IO_ARRAY( __WRITER$ );
   DECLARE_IO_ARRAY( __EPISODEORTRACKNUM$ );
   DECLARE_IO_ARRAY( __SEASONORALBUMNAME$ );
   DECLARE_IO_ARRAY( __STUDIO$ );
   DECLARE_IO_ARRAY( __MPAA$ );
   DECLARE_IO_ARRAY( __SERIESORARTISTNAME$ );
   DECLARE_IO_ARRAY( __FANART$ );
   DECLARE_IO_ARRAY( __FILENAME$ );
   unsigned short __LIST_PAGENUMBER;
   unsigned short __LIST_TOTAL;
   unsigned short __OLDSHOWLISTPAGE;
   unsigned short __OLDSEASONLISTPAGE;
   unsigned short __OLDARTISTLISTPAGE;
   unsigned short __OLDALBUMLISTPAGE;
   unsigned short __TVSHOWID;
   unsigned short __TVSHOWSEASONID;
   unsigned short __TVSHOWEPISODEID;
   unsigned short __ALBUMID;
   unsigned short __ARTISTID;
   unsigned short __NUMBEROFALBUMS;
   unsigned short __NUMBEROFARTISTS;
   unsigned short __NUMBEROFSONGS;
   unsigned short __NUMBEROFMOVIES;
   unsigned short __NUMBEROFTVSHOWS;
   unsigned short __NUMBEROFTVSHOWSEASONS;
   unsigned short __NUMBEROFTVSHOWEPISODES;
   unsigned short __NUMBEROFARTISTALBUMS;
   unsigned short __NUMSTARTBRACKETS;
   unsigned short __NUMENDBRACKETS;
   unsigned short __DOUBLEQUOTESCOUNT;
   unsigned short __INARRAY;
   unsigned short __INARRAYOBJECT;
   unsigned short __INARRAYITEMNAME;
   unsigned short __INARRAYNAMEVALUENUMBER;
   unsigned short __OUTPUTPOSITION;
   unsigned short __OUTPUTARRAYITEMPOSITION;
   unsigned short __PREVCHARACTER;
   unsigned short __EXTERNALREQUEST;
   DECLARE_INTARRAY( S2_XBMC_Browse, __LIST_IDS );
   DECLARE_INTARRAY( S2_XBMC_Browse, __SEASONNUMBER );
   DECLARE_INTARRAY( S2_XBMC_Browse, __PLAYLISTIDS );
   DECLARE_INTARRAY( S2_XBMC_Browse, __TCPBLOCKER );
   DECLARE_DYNAMIC_INTARRAY( S2_XBMC_Browse, __TVSHOWSEASONS );
   short __CONNECTIONSTATUS;
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, __OUTPUTSTRING );
   DECLARE_STRING_ARRAY( S2_XBMC_Browse, __OUTPUTSTRINGNAME );
   DECLARE_STRING_ARRAY( S2_XBMC_Browse, __OUTPUTSTRINGVALUE );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, __SEARCHCRITERIA$ );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, __TX$ );
   DECLARE_SOCKET( S2_XBMC_Browse, __XBMC );
   DECLARE_STRUCT_DYNAMIC_ARRAY( S2_XBMC_Browse, __ALBUMS );
   DECLARE_STRUCT_DYNAMIC_ARRAY( S2_XBMC_Browse, __ARTISTS );
   DECLARE_STRUCT_DYNAMIC_ARRAY( S2_XBMC_Browse, __SONGS );
   DECLARE_STRUCT_DYNAMIC_ARRAY( S2_XBMC_Browse, __MOVIES );
   DECLARE_STRUCT_DYNAMIC_ARRAY( S2_XBMC_Browse, __TVSHOWS );
   DECLARE_STRUCT_DYNAMIC_ARRAY( S2_XBMC_Browse, __TVSHOWEPISODES );
   DECLARE_STRUCT_DYNAMIC_ARRAY( S2_XBMC_Browse, __ARTISTALBUMS );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, __XBMC_IPADDR$ );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, __XBMC_HTTPPORT$ );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, __LOGIN );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, __PASSWORD );
   DECLARE_STRING_STRUCT( S2_XBMC_Browse, __XBMC_TCPPORT$ );
};

START_NVRAM_VAR_STRUCT( S2_XBMC_Browse )
{
};

DEFINE_WAITEVENT( S2_XBMC_Browse, __SPLS_TMPVAR__WAITLABEL_0__ );
DEFINE_WAITEVENT( S2_XBMC_Browse, __SPLS_TMPVAR__WAITLABEL_1__ );
DEFINE_WAITEVENT( S2_XBMC_Browse, __SPLS_TMPVAR__WAITLABEL_2__ );


#endif //__S2_XBMC_BROWSE_H__
