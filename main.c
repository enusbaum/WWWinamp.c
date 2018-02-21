/*	======================================================================================================================
	Copyright (C) 1998-2001 Nullsoft, Inc.
	
	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any damages
	arising from the use of this software.
	
	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:
	
	1. The origin of this software must not be misrepresented; you must not
	   claim that you wrote the original software. If you use this software
	   in a product, an acknowledgment in the product documentation would be
	   appreciated but is not required.
	2. Altered source versions must be plainly marked as such, and must not be
	   misrepresented as being the original software.
	3. This notice may not be removed or altered from any source distribution.
	======================================================================================================================

	
	C H A N G E   L O G
	
	2.5.d  - ??

	2.6.02 - 2002/06/14	(rar) Lots o stuff has changed.   Includes support for *.css file., change some of the way
						(rar) this app logs stuff.  added some global variables to help reduce redundant code.  It'll get there.	
	2.6.05 - 2002/06/16 (rar) Added support for *.js file.  Incorporated use of the WebDings font for control symbols.
	2.6.10 - 2002/06/17 (rar) removed [p] button which clears the playlist and adds the selected song as the sole song to the liast
						(rar) added [c] in [p]'s place, which allows you to cue a song to play direct after the song that is currently playing.
	2.6.11 - 2002/06/19 (rar) Added Support for rebots.txt file, which basically disallows indexing of anything from this 
	                          "server".  Content resides within this program.
						(rar) Modified Cache expire time (from 1 hour to 1 year)
	2.6.12 - 2002/07/07 (rar) Added \r's to ROBOTS.TXT output string.
	         2002/11/27 (rar) Added Self Installer using NSIS.
	2.6.13 - 2002/11/27 (mm ) Added end-of-playlist actions
						(mm ) Added cover art options
	2.7.1  - 2002/11/29 (rar) Merge Michael Michon's changes into main.
	2.7.2  - 2003/01/11 (rar) added doRecursiveAddDB prototype to list of function prototypes
                        (rar) printf statement to clear the line in the console when MakeDB is run
                        (rar) removed call to link *.js file since functions are only for windows CE and are commented out at 
						      the moment.  For some reason, the functions within were causing javascript errors
    2.7.3  - 2003/01/12 (rar) added abiltiy to rescan files
						(rar) modified the layout to include controls in middle frame
						(rar) added 'listen' feature, which allows user to listen to the shoutcast stream directly from wwwinamp, and not have to 
						      visit the shoutcast server
						(rar) sprinkled a few comments here and there
                        (rar) change font size to use %, not px
						(rar) updated copyright statement
    2.7.4  - 2003/02/01 (rar) added cover art size, Winamp Class Name and library page size to options config file
						(rar) Formatted vanilla config for easier readability, and created subsections for grouped items
						(rar) added database list sorting
						(rar) redid how the cover art shows up, when enabled.  The size is now configureable, and will show up in a nested table to
						      the left in the song search.
						(rar) updated the interface, with new color scheme and controls images. Nifty
						(rar) started some work on reworking the LoadConfig.  Trying to get it to be a little bit smarter
						(rar) added support for multiple instances of winamp/wwwinamp.  Good for broadcasting multiple servers off of one machine. see readme for more details.
						(rar) Much more code commenting, cleanup, reorganization.
						(rar) fixed a bug that would cause wwwinamp to crash when loading the playlist window & there were no items in the media library
						(mm ) fixed BUG676947 [ 676947 ] Trailing slash on 'Listen' HyperLink
						(mm ) fixed BUG683202 [ 683202 ] Cover art doesn't show with multiple paths 
						(mm ) added RFE683207 [ 683207 ] Library update should be general update
						(mm ) added RFE683222 [ 683222 ] optional HTML header snippet 
						(mm ) added separate size for database list and now playing cover art
						(mm ) added logic to prevent adding duplicate songs, usually caused by accidential double clicking.
						(mm ) added ability to enqueue an entire folder by clicking on the folder name
						(rar) fixed bug with "log into mp3j mode" button & html target tag
						(rar) added a critical section mutex to media library update function
						(rar) removed the need attach "m=left" on operation calls.  this will save bandwith.
						(rar) moved update button to media library window
						(rar) redid how cover art works, uses dynamic urls and not folder names for url.
	2.7.5  - 2003/03/05 (released 2.7.5)
	2.7.6  - 2003/08/19 (rar) changed code to print out server address upon successful start up
						(rar) made modifications to log_printf error messages in several spots, as well as cleaned up some verbiage, more work to be done
	2.7.7  - 2003/12/07 (rar) made changes that caused access violations while loading files with long names. change wsprintf to strncpy. Also changed some test to make it less confusing to figure out how to use configuration files.
	2.7.8  - 2003/12/30 (rar) included source as part of distro
						(rar) added auto select to  input field for search box
						(rar) got sidetracked and re-formated output of startup messages
						(rar) added user:pass to Interfaces output for easier cutting & pasting
						(rar) added search google button
	3.0.0  - 2005/11/16 (epn) fixed bug of 'adding duplicate album' after playlist clears from "end of list song add"
						(epn) fixed bug where 'end of playlist' action would be triggered if you pressed 'STOP' on last track
						(epn) added 'end of playlist' option 'play current playlist from beginning' to config file
						(epn) added ability for administrator to Shutdown Server
						TODO:
						(epn) changed page and button layout. better able to skin and customize wwwinamp
						(epn) able to allow users to download files from library
	3.0.1  - 2006/08/24 (blg) changed frame layout, optimised for 1024 wide browser
						(blg) removed window size operations from controls frame
						(blg) added first and last links to back forward controls in library
						(blg) fixed library position counters
						(blg) added title attribute to ambiguous hrefs
						(blg) library frame loads all by default (due to new frame layout)
						(blg) moved library position counters to seperate lines, so links are always in same spot
						(blg) library navigation links and position counters now at top of list as well as bottom
						(blg) moved copyright info to playlist frame to increase visibility
						(blg) fixed td and table width for currently playing track to maintain display consistency
3.0.1 b2   - 2006/09/23 (blg) added button allowing you to 'Jump' to certain part of library by entering a number in the search field
						TODO:
						(blg) a-z linking in library view (tho I have no idea how)
						(blg) move playlist controls to playlist frame

  
*/
#define _CRT_SECURE_NO_DEPRECATE
#define DEBUG				0
#define SERV_VER 			"3.0.1 beta 2 (Built: " __DATE__ " " __TIME__ ")"
#define SERV_NAME			"WWWinamp"
#define SERV_NAME_LONG 		"WWWinamp Remote Control Server"
#define COPYRIGHT 			"(C) Copyright 1998-2001 Nullsoft, Inc. All Rights Reserved."
#define BRANDING 			"Nullsoft"
#define BRANDING_URL 		"http://www.enusbaum.com/"
#define BRANDING_COPYRIGHT	"(C) Copyright 2002-2003 Halo 8 Productions, Inc. All Rights Reserved."
#define MODIFICATION_COPYRIGHT	"(C) Copyright 2005 <a href=\"http://www.enusbaum.com/\" target=\"_blank\">Eric Nusbaum</a>. All Rights Reserved"
#define MODIFICATION_COPYRIGHT1	"(C) Copyright 2006 <a href=\"http://www.realityloop.com/\" target=\"_blank\">Brian Gilbert</a>. All Rights Reserved"

#define ADMIN_URL			"/mp3j"
#define STYLE_URL			"/wwwinamp.css"
#define JSCRIPT_URL			"/wwwinamp.js"
#define ROBOTS_URL			"/robots.txt"
#define CONTROL_URL			"/controls.gif"
#define CONTROLBG_URL		"/controls.bg.gif"
#define CONTROLADM_URL		"/controls.mp3j.gif"
#define SPACER_URL			"/spacer.gif"
#define FOLDER_URL			"/folder.gif"
#define PLAYLIST_DEFAULT	"?m=left#playing"

/*	======================================================================================================================
	INCLUDES 
*/

#include <windows.h>
#include <winsock.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdarg.h>     // allows passing an unknown number parameters
#include <signal.h>
#include <process.h>
#include <time.h>
#include <limits.h>		// used for INT_MAX declaration
#include <sys/types.h>
#include <sys/stat.h>

#include "frontend.h"
#include "ipc_pe.h"

#ifndef min
#define min(x,y) (( x ) < ( y ) ? ( x ) : ( y ))
#define max(x,y) (( y ) < ( x ) ? ( x ) : ( y ))
#endif

/*	======================================================================================================================
	TYPES
*/

typedef struct {
	struct sockaddr_in sin;
	int msgsock,s;
	} cnx_inf;

typedef struct {
	char *leading_path;
	char file[MAX_PATH];
	} dbType;

/*	======================================================================================================================
	FUNCTION PROTOTYPES
*/

int		main(int argc, char **argv);
int		LoadConfig(void);
int		getip(int which, struct sockaddr_in *sin);
int		init_socketlib(int which);
int		recv_string(int s, char *str, int maxlen);
int		OpenSocket(short port, int mc);
int		WaitForConnection(int sock,struct sockaddr_in *sin);
int		sock_printf(int sock, char *fmt, ...);
int		sock_send(int sock, char *buffer,int size);
int		myrand(void);
int		httpgetFile( int sock, char *fileName, char *ContentType, char *cacheString );
int		hasCoverArt( char *fn );
char	*getTimeStr(long alt_time);
char	*gethost(struct sockaddr_in *sin);
char	*extension(char *fn);
void	mysrand (unsigned int seed);
void	encodeLP(char *out, char *in);
void	quit();
void	makeDB();
void	doRecursiveAddDB(char *leading_path, char *this_path);
void	fixstring(char *in, char *out);
void	unfixstring(char *in, char *out, int maxlen);
void	log_printf(char *format, ...);
void	launchthread(void *threadproc, void *data);
void	setnonblock(int msgsock, int i);
void	CloseSocket(int sock);
void	http_handlereq(char *url, char *user_agent, char *encodedlp, int sock, struct sockaddr_in *sin);
void	quitthread();

unsigned int WINAPI HandleConnection(void *p);

/*	======================================================================================================================
	GLOBAL VARIABLES
*/

// configured/validated in LoadConfig()
short	g_dst_port						= 80;

int		g_show_cover_art				= 0;
int		g_perform_lookups				= 0;
int		g_show_requests					= 0;
int		g_left_refresh					= 60;				// left panel refresh rate
int		g_library_page_size				= 500;
int		g_cover_art_size_db				= 100;
int		g_cover_art_size_playing		= 150;

char	g_acclp[512]					= ""; // encoded access password
char	g_admlp[512]					= ""; // encoded admin password
char	g_acclp_c[512]					= ""; // unencoded access password
char	g_admlp_c[512]					= ""; // unencoded admin password
char	g_dst_ip[128]					= "";
char	g_ext_types[128]				= "";
char	g_sc_server[1024]				= ""; // shoucast server info, null/empty for none
char	g_winamp_class_name[128]		= "Winamp v1.x";

char	g_db_path[MAX_PATH]				= "";
char	g_log_file[MAX_PATH]			= "";
char	g_winamp_dir[MAX_PATH]			= "C:\\Program Files\\Winamp";
char	g_db_filelist[MAX_PATH]			= "";
char	g_filler_stream_url[MAX_PATH]	= "";
char	g_html_include_file[MAX_PATH]	= "include.html";
char	g_cover_art_root_dir[MAX_PATH]	= "";

enum	eop_modes{ eop_mode_silence=0, eop_mode_random=1, eop_mode_stream=2, eop_mode_repeat=3} g_eop_action	= eop_mode_silence;


// rest of the global config
CRITICAL_SECTION log_mutex;
CRITICAL_SECTION library_mutex;
CRITICAL_SECTION playlist_mutex;
dbType *database;
int		g_count;
int		database_used;
int		database_size;
int		g_log							= 1;
int		g_playing_standby				= 0;
int		g_rand_next						= 1;
int		g_last_track					= INT_MAX;            // index to last added track 
int		g_last_action					= 0; //Last action performed
int		g_shutdown						= 0;
char	g_config_file[MAX_PATH];
char	g_working_exe[MAX_PATH];
char	g_working_dir[MAX_PATH];
char	g_winamp_exe[MAX_PATH];
char	g_working_full[MAX_PATH];
char	g_working_name[MAX_PATH];
char	g_ext_type_list[128]			= "mp3;ogg;wav";
char	g_cover_art_filename[256]		= "folder.jpg";
char	g_debug[16]						= "DEBUG:\n\t";
char*	g_include_html					= 0;

/*	======================================================================================================================
	FUNCTION IMPLEMENTATIONS
*/

int main(int argc, char **argv) {
	int MainSocket;
	char log_area[16]="[main]", *q;
	struct sockaddr_in sin;
	// added to get hostname in output
	int iError;
	char szHostName[20];
	HOSTENT *hHostent;

	InitializeCriticalSection(&log_mutex);
	InitializeCriticalSection(&library_mutex);
	InitializeCriticalSection(&playlist_mutex);

	// get arg[0], the execution path and filename.
	GetModuleFileName( NULL, g_working_full, MAX_PATH );
	
	//set up g_working_dir
	strncpy( g_working_dir,  g_working_full, MAX_PATH ); // strncpy(s, t, n) copy n chars from s to t
	q = g_working_dir + strlen(g_working_dir);
	while (q >= g_working_dir && *q != '\\') q--;    
	*++q=0;
	
	// set up g_working_exe
	strncpy( g_working_exe,  g_working_full, MAX_PATH );
	q = g_working_exe + strlen(g_working_exe);
	while (q >= g_working_exe && *q != '\\') q--; 
	strcpy( g_working_exe, ++q );
	
	// set up g_working_name   (get the wwwinamp portion to find the rest of the files.
	strncpy( g_working_name, g_working_exe, MAX_PATH );
	q = g_working_name + strlen(g_working_name);
	while (q >= g_working_name && *q != '.') q--; *q=0;
	
	// print out header to show what's going on...
	printf("\n" "-- " SERV_NAME_LONG " " SERV_VER "\n" "-- " BRANDING_COPYRIGHT "\n" "-- " COPYRIGHT "\n" "-- " MODIFICATION_COPYRIGHT "\n" "-- Use \"%s config-file.ini\" to specify an configuration file.\n\n", g_working_exe);
	if (argc > 1) { // our only argument to wwwinamp should be the config file name
		if ( strstr(argv[1],"\\") ) strcpy( g_config_file, argv[1] );			// appears to be in a separate directory (\\ = \) so use whole string
		else wsprintf( g_config_file, "%s%s", g_working_dir, argv[1] );			// looks like simple file name, so we append the current working dir
		}
	else wsprintf( g_config_file, "%s%s.ini", g_working_dir, g_working_name );	// we don't have a command line argument... so just use the default...

	// Debug Statements
	if (DEBUG) printf( 
		"%s" 
		"g_working_full: %s\n\t" 
		"g_working_dir : %s\n\t"
		"g_working_exe : %s\n\t"
		"g_working_name: %s\n\t"
		"g_config_file : %s\n\t"
		, 
		g_debug, 
		g_working_full, 
		g_working_dir, 
		g_working_exe, 
		g_working_name,
		g_config_file
		);
	
	if ( LoadConfig() ) quit();

	// Initialzing port
	log_printf( "%s Initializing Port: ", log_area, g_dst_port );
	if ( init_socketlib(1) < 0 ) {
		printf( "Failure.\n" );
		quit();
		}
	else printf( "Successful.\n" );

	// Opening Socket
	log_printf( "%s Opening Socket: ", log_area );
	MainSocket = OpenSocket(g_dst_port,32);
	if (MainSocket < 0) {
		printf( "Failure.\n" );
		quit();
		}
	else printf( "Successful.\n" );

	makeDB();

	iError=gethostname(szHostName,sizeof(szHostName));
	// Tell the user that we could not get the host name
	if(iError==SOCKET_ERROR) {
		log_printf("%s ERROR: Could not get the host name.\n", log_area);
		}
	hHostent=gethostbyname(szHostName);
	// Tell the user that we could not get the host address
	if(hHostent==NULL) {
		log_printf("%s ERROR: Could not get the host address.\n", log_area);
		}
	else {
		// debug log_printf("Host name : %s\n", hHostent->h_name);
		// debug log_printf("IP Address : %s\n", inet_ntoa(*((struct in_addr*)hHostent->h_addr)));
		log_printf( "%s User Interface:  http://%s@%s:%d\n", log_area, g_acclp_c, inet_ntoa(*((struct in_addr*)hHostent->h_addr)), g_dst_port );
		log_printf( "%s Admin Interface: http://%s@%s:%d%s\n", log_area, g_admlp_c, inet_ntoa(*((struct in_addr*)hHostent->h_addr)), g_dst_port, ADMIN_URL );
		}

	log_printf("%s %s Start-up: Successful. System available for users.\n\n", log_area, SERV_NAME, g_dst_port);

	mysrand( (unsigned)time( NULL ) );

	while (g_shutdown == 0) {
		int msgsock;
		cnx_inf *c = (cnx_inf*) calloc( 1, sizeof(cnx_inf) );
		msgsock = WaitForConnection( MainSocket, &sin ); 
		memcpy( &c->sin, &sin, sizeof(sin) );
		c->msgsock = msgsock;
		c->s = MainSocket;
		launchthread( (void*)HandleConnection, (void *)c );
		}
	CloseSocket(MainSocket);
	log_printf( "%s Shutting down socket.", log_area );
	init_socketlib(0);
	return 0;
	}

int LoadConfig(void) {
	FILE *conf=NULL;
	FILE* includeFile;
	int line_number			= 0;
	char log_area[8]		= "[conf]";
	char buffer[1024];
	char *configarray[] = {
		"AccessLoginPassword", 
		"AdminLoginPassword",
		"NameLookups", 
		"ShowRequests", 
		"ShowCoverArt", 
		"Port", 
		"RefreshRate", 
		"LibraryPageSize", 
		"CoverArtSizeLibrary", 
		"CoverArtSizePlaylist",
		"EndOfPlaylistAction",
		"WinampDir", 
		"LogFile",  
		"DBPath", 
		"DBFileList", 
		"Extensions", 
		"ShoutCastServer", 
		"WinampClassName", 
		"CoverArtFilename", 
		"FillerStreamURL",
		"CoverArtRootDir",
		"HTMLIncludeFile",
		"IP"
		};
	
	conf = fopen( g_config_file, "rb" );
	log_printf( "%s Loading Configuration: %s.\n", log_area, g_config_file );
	if (!conf) {
		printf( "%s ERROR: couldn't find config file.\n", log_area );
		return -1;
		}
	while (1) {
		int i = 0;
		char *pbuffer;
		char *tok;
		fgets(buffer, sizeof(buffer), conf);
		if ( feof(conf) ) break; // end of file, quit
		line_number++; // increment the line number

		// terminate the string where we find a carriage return or line feed
		while ( buffer[strlen(buffer)-1]=='\n' || buffer[strlen(buffer)-1]=='\r' ) buffer[strlen(buffer)-1]='\0';

		pbuffer=buffer;
		while (*pbuffer == ' ' || *pbuffer == '\t') pbuffer++; // skip white space
      
		// if we encounter a ; [ or #, or if it's empty, then we just go to the next line
		if (!*pbuffer || *pbuffer == ';' || *pbuffer == '[' || *pbuffer == '#') continue; 
      
		tok=pbuffer;
		while (*pbuffer != '=' && *pbuffer != '\r' && *pbuffer) pbuffer++;
		if (!*pbuffer) { // basically, if we got to the end of the string with no '='
			log_printf( "%s ERROR: line %d: invalid configuration syntax.\n", log_area, line_number );
			return -1;
			}
		*pbuffer++=0;
		for (i=0; i < sizeof(configarray)/sizeof(configarray[0]) && stricmp( configarray[i], tok ); i++); // after done, i will = index of configuration
		if (i >= sizeof(configarray)/sizeof(configarray[0])) {
			log_printf( "%s ERROR: line %d: invalid configuration option.\n", log_area, line_number);
			return -1;
			}
      
		tok=pbuffer;
		while (*tok == ' ') tok++;
      
		switch (i) {
			// Login & Password Strings
			case 0:		encodeLP(g_acclp, tok);	strcpy(g_acclp_c, tok);	break; // "AccessLoginPassword"
			case 1:		encodeLP(g_admlp, tok);	strcpy(g_admlp_c, tok);	break; // "AdminLoginPassword"

			// boolean values
			case 2:		g_perform_lookups				= !!atoi(tok);	break; // "NameLookups"
			case 3:		g_show_requests					= !!atoi(tok);	break; // "ShowRequests"
			case 4:		g_show_cover_art				= !!atoi(tok);	break; // "ShowCoverArt"

			// Integer Values // atoi() returns zero if it can't find anything int in the string.
			case 5:		g_dst_port						= atoi(tok);	break; // "Port"
			case 6:		g_left_refresh					= atoi(tok);	break; // "RefreshRate"
			case 7:		g_library_page_size				= atoi(tok);	break; // "LibraryPageSize"
			case 8:		g_cover_art_size_db				= atoi(tok);	break; // "CoverArtSizeDB"
			case 9:		g_cover_art_size_playing		= atoi(tok);	break; // "CoverArtSizePlaying"
			case 10:	g_eop_action					= atoi(tok);	break; // "EndOfPlaylistAction"

			// strings
			case 11:	strcpy(g_winamp_dir,			tok);			break; // "WinampDir"
			case 12:	strcpy(g_log_file,				tok);			break; // "LogFile"
			case 13:	strcpy(g_db_path,				tok);			break; // "DBPath"
			case 14:	strcpy(g_db_filelist,			tok);			break; // "DBFileList"
			case 15:	strcpy(g_ext_types,				tok);			break; // "Extensions"
			case 16:	strcpy(g_sc_server,				tok);			break; // "ShoutCastServer"
			case 17:	strcpy(g_winamp_class_name,		tok);			break; // "WinampClassName"
			case 18: 	strcpy(g_cover_art_filename,	tok);			break; // "CoverArtFilename"
			case 19:	strcpy(g_filler_stream_url,		tok);			break; // "FillerStreamURL"
			case 20:	strcpy(g_cover_art_root_dir,	tok);			break; // "CoverArtRootDir"
			case 21:	strcpy(g_html_include_file,		tok);			break; // "HTMLIncludeFile"

			case 22:	if (stricmp(tok,"ANY")) strcpy(g_dst_ip,tok);	break; // "IP"
			default:	break;
			}
		}
	fclose(conf);

	// check to see if the page sizes are sane, and if they're not, make them so
	g_library_page_size = (g_library_page_size > 10000) ? 10000 : g_library_page_size;
	g_library_page_size = (g_library_page_size < 25) ? 25 : g_library_page_size;
	if (DEBUG) printf ( "g_library_page_size set to %d\n", g_library_page_size);
	if (DEBUG) printf ( "g_winamp_class_name to %s\n", g_winamp_class_name);

	// set up the log file
	if (!stricmp(g_log_file,"none") || !stricmp(g_log_file,"/dev/null") || strlen(g_log_file) < 1) g_log=0;
	else {
		if (!strstr(g_log_file,"\\")) {
			char a[MAX_PATH] = "";
			strcat(a, g_working_dir);
			strcat(a, g_log_file);
			strcpy(g_log_file, a);
			}
		}

	// set up the file types
	if (g_ext_types[0]) {
		char *p=g_ext_type_list;
		strcpy(g_ext_type_list,g_ext_types);
		g_ext_type_list[strlen(g_ext_type_list)+1]=0;
		while (p && *p) {
			p=strstr(p,";");
			if (p && *p) *p++=0;
			}
		}

	wsprintf( g_winamp_exe, "%s\\winamp.exe", g_winamp_dir );

	if(g_include_html!=0) free(g_include_html); // deallocate the previous text

	// load the include file, if it exists
	if(includeFile=fopen(g_html_include_file,"r")){
		struct _stat buf;
		long fileSize;
		int index=0;
		_stat(g_html_include_file, &buf );

		log_printf( "%s loading HTML include file: %s.\n", log_area, g_html_include_file);

		fileSize=buf.st_size;

		g_include_html=malloc(fileSize+1);
		while(!feof(includeFile)){
			index+=fread(g_include_html+index,1,fileSize,includeFile);
		}
		g_include_html[index]=0; // null-terminate the string after read from file

		fclose(includeFile);
	}
	
	log_printf( "%s Successfully Loaded Configuration.\n", log_area );
	return 0;
	}

unsigned int WINAPI HandleConnection(void *p) {
	cnx_inf *c=(cnx_inf *)p;
	int sock=(int)c->msgsock;
	int i=0;
	char req[1024];
	char user_agent[1024]="";
	char encodedlp[1024]="";
	char buf[1024];
	
	setnonblock(sock,1);
	if (recv_string(sock,req,sizeof(req)) > 2) {
		while (recv_string(sock,buf,sizeof(buf)) > 2) {
			buf[sizeof(buf)-1]=0;
			if (!strnicmp(buf,"User-Agent:",strlen("User-Agent:"))) {
				char *p=buf+strlen("User-Agent:");
				while (*p == ' ') p++;
				strncpy(user_agent,p,sizeof(user_agent)-1);
				user_agent[sizeof(user_agent)-1]=0;
			    }
			if (!strnicmp(buf,"Authorization: Basic ",strlen("Authorization: Basic "))) {
				char *p=buf+strlen("Authorization: Basic ");
				while (*p == ' ') p++;
				strncpy(encodedlp,p,sizeof(encodedlp)-1);
				encodedlp[sizeof(encodedlp)-1]=0;
				}
			}
		if (!strnicmp(req,"GET ",4)) {
			char *p=req+4,*p2,*p3;
			p3=p2=p;
			while (*p2 != ' ' && *p2) p2++;
			if (p2 == p) {
				p="/";
				}
			else {
				if (*p2) *p2=0;
				if (strstr(p,"//")) {
					p=strstr(p,"//");
					p+=3;
					while (*p != '/' && *p) p++;
					if (!*p) p="/";
					}
				}
			setnonblock(sock,0);
			http_handlereq(p, user_agent, encodedlp, sock, &c->sin);
			}
		}
	CloseSocket(sock);
	free(p);
	quitthread();
	return 0;
	}

static void parselist(char *out, char *in) {
	int nt=8, inquotes=0, neednull=0;
	char c;
	while (*in) {
		c=*in++;
		if (c >= 'A' && c <= 'Z') c+='a'-'A';
		if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
			neednull=1;
			*out++=c;
			}
		else if (c == '\"') {
			inquotes=!inquotes;
			if (!inquotes) {
				*out++=0;
				if (!nt--) break;
				neednull=0;
				}
			}
		else {
			if (inquotes) *out++=c;
			else if (neednull) {
				*out++=0;
				if (!nt--) break;
				neednull=0;
				}
			}
		}
	*out++=0;
	*out++=0;
	}

static int in_string(char *string, char *substring) {
	int len = strlen(substring)-2;
	if (len<0) return 1;
	while (*string) {
		if ((string[0]|32) == (substring[0]|32) && (string[1]|32) == (substring[1]|32)) {
			if (len < 1 || !strnicmp(string+2,substring+2,len)) return 1;
			}
		string++;
		}
	return 0;
	}

static int substr_search(char *bigtext, char *littletext_list) { 
	while (*littletext_list) {
		if (!in_string(bigtext,littletext_list)) return 0;
		while (*littletext_list) littletext_list++;
		littletext_list++;
		}
	return 1;  
	}

void fixstring(char *in, char *out) {
	while (*in) {
		if ((*in >= 'A' && *in <= 'Z')||
			(*in >= 'a' && *in <= 'z')||
			(*in >= '0' && *in <= '9')) *out++=*in++;
		else {
			int i=*in++;
			wsprintf(out,"%%%02X",i);
			out += 3;
			}
		}
	*out=0;
	} 

void unfixstring(char *in, char *out, int maxlen) {
	while (*in && maxlen) {
		if (*in == '%' && in[1] != '%' && in[1]) {
			int a=0;
			int b=0;
			for ( b = 0; b < 2; b ++) {
				int r=in[1+b];
				if (r>='0'&&r<='9') r-='0';
				else if (r>='a'&&r<='z') r-='a'-10;
				else if (r>='A'&&r<='Z') r-='A'-10;
				else break;
				a*=16;
				a+=r;
				}
			if (b < 2) *out++=*in++;
			else { 
				*out++=a; 
				in += 3;
				}
			}
		else *out++=*in++;
		maxlen--;
		}
	*out=0;
	}

char *getTimeStr(long alt_time) {
	static char timeret[50];
	int alt_hour, alt_min, alt_sec;
	alt_hour	= alt_time/3600;
	alt_min		= (alt_time % 3600) / 60;
	alt_sec		= alt_time % 60;
	if (alt_hour) wsprintf(timeret,"%dh&nbsp;%02dm&nbsp;%02ds", alt_hour, alt_min, alt_sec);
	else wsprintf(timeret,"%dm&nbsp;%02ds", alt_min, alt_sec);
	return timeret;
	}

int getip(int which, struct sockaddr_in *sin) {
	if (which==3) return (sin->sin_addr.s_addr>>24);
	if (which==2) return ((sin->sin_addr.s_addr&0xff0000)>>16);
	if (which==1) return ((sin->sin_addr.s_addr&0xff00)>>8);
	return (sin->sin_addr.s_addr&0xff);
	}

char *gethost(struct sockaddr_in *sin) {
	static char hname[256];
	char ipaddr[16] = "";
	wsprintf(ipaddr, "%d.%d.%d.%d", getip(0,sin),getip(1,sin),getip(2,sin),getip(3,sin));
	if (g_perform_lookups) {
		int ip=inet_addr(ipaddr);
		struct hostent *p = gethostbyaddr((char *)&ip,4,AF_INET);
		if (p) wsprintf(hname,"%s",p->h_name);
		else wsprintf(hname, "%s", ipaddr); 
		}
	else wsprintf(hname, "%s", ipaddr);
	return hname;
	}

int recv_string(int s, char *str, int maxlen) {
	int sleeps=0;
	int p=0;
	do {
		int t;
		do {
			t=recv(s,str+p,1,0);
			if (t != 1) {
				if (!t || (t < 0 && WSAGetLastError() != WSAEWOULDBLOCK)) { str[p]=0; return -1; }
				Sleep(100);
				if (sleeps++ > 10*10) { str[p]=0; return -1; }
				}
			if (str[p] == '\r') t=0;
			} while (t!=1);
		} while (str[p] != '\n' && ++p < maxlen-1);
	str[p--]=0;
	while (str[p] == '\n' && p > 0) {
		str[p--]=0;
		}
	if (p < 0) p = 0;
	return p;
	}

void launchthread(void *threadproc, void *data) {
	_beginthread(threadproc,0,data);
	}

void quitthread() {
	_endthread();
	}

void setnonblock(int msgsock, int i) {
	ioctlsocket(msgsock,FIONBIO,&i);
	}

int OpenSocket(short port, int mc) {
	char *p=g_dst_ip;
	int  sock;
	struct sockaddr_in  sin;
  
	sock = socket(AF_INET,SOCK_STREAM,0);
	if (sock < 0) return -1;
  
	memset((char *) &sin, 0,sizeof(sin));
	sin.sin_family = AF_INET;
	sin.sin_port = htons( port );
	if (*p)  sin.sin_addr.s_addr = inet_addr(p);
	if (!*p || !sin.sin_addr.s_addr) sin.sin_addr.s_addr=INADDR_ANY;
   
	if (bind (sock,(struct sockaddr *)&sin,sizeof(sin))) {
		CloseSocket(sock);
		return -1;
		}
  
	if (listen(sock,mc)==-1) {
		CloseSocket(sock);
		return -1;
		}
	return sock;
	}

void CloseSocket(int sock) {
	shutdown(sock, 2);
	closesocket(sock);
	}

int init_socketlib(int which) {
	WSADATA wsaData;
	if (which) {
		if ( WSAStartup( MAKEWORD(1, 1), &wsaData ) ) return -1;
		}
	else {
		WSACleanup();
		}
	return 0;
	}

char *extension(char *fn) {
	char *s = fn + strlen(fn);
	while (s >= fn && *s != '.' && *s != '\\') s--;
	if (s < fn) return "";
	if (*s == '\\') return "";
	return (s+1);
	}

void quit() {
	printf("Hit any key to close...");
	fflush(stdout);
	getch();
	exit(1);
	}

void log_printf(char *format, ...) { 
	char buf[1024]; 
	time_t t; 
	struct tm *tm; 
	va_list ar;
	va_start(ar,format);
	t = time(NULL);
	tm = localtime(&t);
	wsprintf(buf,"[%02d/%02d/%02d %02d:%02d:%02d]%s",
		tm->tm_mon+1, 
		tm->tm_mday, 
		tm->tm_year+1900, 
		tm->tm_hour, 
		tm->tm_min, 
		tm->tm_sec, 
		format);
	EnterCriticalSection(&log_mutex);
	if (g_log) {
		FILE *fp = fopen(g_log_file,"a+");
		if (fp) {
			vfprintf(fp,buf,ar);
			fclose(fp);
			}
		}
	vprintf(buf,ar);
	fflush(stdout);
	LeaveCriticalSection(&log_mutex);
	va_end(ar);
	}

static int in_list(char *list, char *v) {
	while (*list) {
		if (!stricmp(v,list)) return 1;
		list+=strlen(list)+1;
		}
	return 0;
	}

int sock_printf(int sock, char *fmt, ...) {
	char buffer[2048]={0,};
	char *p=buffer;
	int i;
	va_list ar;
	va_start(ar,fmt);
	vsprintf(buffer,fmt,ar);
	va_end(ar);
	i=strlen(buffer);
	while (i > 0) {
		int r=send(sock,p,i,0);
		if (r > 0) i-=r;
		else {
			if (r < 0) {
				if (WSAGetLastError() != WSAEWOULDBLOCK) break;
				else Sleep(250);
				}
			}
		}
	return strlen(buffer)-i;
	}

int sock_send(int sock, char *buffer,int size) {
	char *p=buffer;
	int i=size;
	while (i > 0) {
		int r=send(sock,p,i,0);
		if (r > 0) i-=r;
		else {
			if (r < 0) {
				if (WSAGetLastError() != WSAEWOULDBLOCK) break;
				else Sleep(250);
				}
			}
		}
	return size-i;
	}

void doRecursiveAddDB(char *leading_path, char *this_path) {
	char log_area[20] = "doadddb -->";
	char maskstr[MAX_PATH];
	WIN32_FIND_DATA d;
	HANDLE h;
	char *leading_path_suffixed;
	wsprintf(maskstr,"%s%s",leading_path,leading_path[strlen(leading_path)-1]=='\\' ? "" : "\\");
	leading_path_suffixed=strdup(maskstr);

	if (*this_path) {
		strcat(maskstr,this_path);
		if (this_path[strlen(this_path)-1]!='\\') strcat(maskstr,"\\");
		}
	strcat(maskstr,"*.*");
	h = FindFirstFile(maskstr,&d);
	//printf("%s\n",maskstr);
	if ( h != INVALID_HANDLE_VALUE ) {
		do {
			if ( !(d.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY) ) {
				char *p=extension(d.cFileName);
				if (*p && in_list(g_ext_type_list,p)) {
					if (database_used >= database_size) {
						if (database) {
							database_size*=2;
							database = realloc(database,database_size*sizeof(dbType));
							}
						else {
							database_size=32;
							database = malloc(database_size*sizeof(dbType));
							}
						}
					wsprintf(database[database_used].file,"%s%s%s",this_path,this_path[0]?"\\":"",d.cFileName);
					database[database_used].leading_path=leading_path_suffixed;
					database_used++;
					if (!(database_used%16)) {
						int x;
						char s[1024];
						wsprintf(s,"Scanning: %s",d.cFileName);
						x=79-strlen(s); while (x-- > 0) strcat(s," ");
						s[79]=0;
						printf("%s\r",s);
						}
					g_count++;
					}
				}
			else {
				if (d.cFileName[0] != '.') {
					char ps[MAX_PATH];
					wsprintf(ps,"%s%s%s",this_path,this_path[0]?"\\":"",d.cFileName);
					doRecursiveAddDB( leading_path, ps );
					}
				}
			} while (FindNextFile(h,&d));
		FindClose(h);
		}
	}

int _deepcompare( const char *name1, const char *name2, int debug ) {
	int dirCmp;
	char *st1 = strstr( name1, "\\" ), d1[MAX_PATH], *p1;
	char *st2 = strstr( name2, "\\" ), d2[MAX_PATH], *p2;
	if ( !st1 && !st2 ) return strnicmp( name1, name2, MAX_PATH ); // both are files, evaluate using stricmp.
	if (  st1 && !st2 ) return 1;	// 1st file is a dir and 2nd isn't.  2nd gets precedence
	if ( !st1 &&  st2 ) return -1;	// 2nd file is a dir and 1st isn't.  1st gets precedence
	// now we are getting tricky...
	// 1st and 2nd are dirs, we need to compare the 2 dir names and 
	// if they are the same, recurse, else return the stricmp.
	strncpy( d1, name1, MAX_PATH); p1 = d1; while (p1 && *p1++) if (*p1 == '\\') *p1=0; // get 1st dir name in 2nd
	strncpy( d2, name2, MAX_PATH); p2 = d2; while (p2 && *p2++) if (*p2 == '\\') *p2=0; // get 1st dir name in 2nd
	dirCmp = strnicmp( d1, d2, MAX_PATH );
	if (dirCmp) return dirCmp;
	else return _deepcompare( ++st1, ++st2, debug );
	}

int _compare( const dbType *arg1, const dbType *arg2 ) {
	// basically get the file name from the dbType objects, and pass to _deepcompare.
	char file1[MAX_PATH];
	char file2[MAX_PATH];
	int test;
	strncpy(file1, arg1->file, MAX_PATH);
	strncpy(file2, arg2->file, MAX_PATH);
	test = _deepcompare( file1, file2, 0 );
	return test;
	}

void encodeLP(char *out, char *in) {
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	int shift = 0;
	int accum = 0;

	while (*in) {
		if (*in) {
			accum <<= 8;
			shift += 8;
			accum |= *in++;
			}
		while ( shift >= 6 ) {
			shift -= 6;
			*out++ = alphabet[(accum >> shift) & 0x3F];
			}
		}
	if (shift == 4) {
		*out++ = alphabet[(accum & 0xF)<<2];
		*out++ = '=';  
		}
	else 
		if (shift == 2) {
			*out++ = alphabet[(accum & 0x3)<<4];
			*out++ = '=';  
    		*out++ = '=';  
			}
	*out++=0;
	}

void makeDB() {
	char log_area[16]	= "[mLib]";
	char spacer[128]	= "                                             ";
	char path_buf[1025] = "";
	char *p;
	strcpy( path_buf, g_db_path );
	log_printf( "%s Building Media Library:\n", log_area );
	path_buf[strlen(path_buf)+1]=0;
	p=path_buf;
	while ( p && *p ) { // replace all ;'s with \0 to simulate null termination. me thinks
		p = strstr( p, ";" );
    	if ( p && *p ) *p++=0;
		}
	p=path_buf;
	while (*p) {
		g_count=0;
		doRecursiveAddDB(p,"");
		log_printf( "%s -%6d file%s in %s%s\n", log_area, g_count, (g_count==1)?"":"s", p, spacer );
		p+=strlen(p)+1;
		}
	p=g_db_filelist;
	while (p && *p) {
		p = strstr(p,";");
		if (p&&*p) *p++=0;
		}
	p=g_db_filelist;
	while (*p) {
		FILE *inf=fopen(p,"rt");
		if (inf) {
			char buf[1024];
			char *lp;
			g_count=0;
			fgets(buf,1024,inf);
			while (buf[0] && (buf[strlen(buf)-1] == '\r' || buf[strlen(buf)-1] == '\n')) buf[strlen(buf)-1]=0;
			lp=strdup(buf);
			while (!feof(inf)) {
				fgets(buf,1024,inf);
				while (buf[0] && (buf[strlen(buf)-1] == '\r' || buf[strlen(buf)-1] == '\n')) buf[strlen(buf)-1]=0;
				if (buf[0] && !feof(inf)) {
					if (database_used >= database_size) {
						if (database) {
							database_size*=2;
							database = realloc(database,database_size*sizeof(dbType));
							}
						else {
							database_size=32;
							database = malloc(database_size*sizeof(dbType));
							}
						}
					strcpy(database[database_used].file,buf);
					database[database_used].leading_path=lp;
					database_used++;
					g_count++;
					}
				}
			log_printf("%s %d files added from %s\n", log_area, g_count, p );
			fclose(inf);
			}
		p+=strlen(p)+1;
		}
	log_printf( "%s Sorting Database: ", log_area );
	qsort( database, database_used, sizeof(dbType), _compare );
	printf( " Successful.\n" );
	log_printf( "%s Media Library Contains %d File%s.\n", log_area, database_used, (database_used==1)?"":"s" );
	}

void http_handlereq(char *url, char *user_agent, char *encodedlp, int sock, struct sockaddr_in *sin) {
	int midHeight				= 31;
	int isCE	 				= !!strstr(user_agent,"Windows CE");
	int isStyle					= !strncmp(url, STYLE_URL,		strlen(STYLE_URL) );
	int isJScript				= !strncmp(url, JSCRIPT_URL,	strlen(JSCRIPT_URL) );
	int isSpacer				= !strncmp(url, SPACER_URL,		strlen(SPACER_URL) );
	int isFolder				= !strncmp(url, FOLDER_URL,		strlen(FOLDER_URL) );
	int isControls				= !strncmp(url, CONTROL_URL,	strlen(CONTROL_URL) );
	int isControlsADM			= !strncmp(url, CONTROLADM_URL,	strlen(CONTROLADM_URL) );
	int isControlsBG			= !strncmp(url, CONTROLBG_URL,	strlen(CONTROLBG_URL) );
	int isRobots				= !strncmp(url, ROBOTS_URL,		strlen(ROBOTS_URL));
	int admreq					= !strncmp(url, ADMIN_URL,		strlen(ADMIN_URL));
	int is_adm					= admreq && (!g_admlp[0] ||  !strcmp( encodedlp, g_admlp ) || !strcmp( g_admlp, ":" ));
	char headHTTPOK[256]		= "HTTP/1.0 200 OK\r\n";
	char headServer[256]		= "Server: " SERV_NAME SERV_VER "\r\n";
	char headContentType[256]	= "Content-Type: text/html\r\n";
	char headNoCache[256]		= "Cache-Control: no-cache, must-revalidate\r\nPragma: no-cache\r\nExpires: -1\r\n";
	char headCache[256]			= "Cache-Control: max-age=31536000\r\n";
	char headStyle[256]			= "\t<link rel=\"stylesheet\" href=\"" STYLE_URL "\">\n";
	char *p						= strstr(url,"?");
	char *qmark					= strstr(url,"?");
	char log_area[16]			= "[http]";
	char thisurl[128]			= "/";

	char mode[256], opt[256], add[256], coverart[256], search[256], srchstart[256];

	struct {
		char *key;	
		char *val;
		} httpgetdata[]= {
		{"m=",mode},
		{"o=",opt},
		{"a=",add},
		{"ca=",coverart},
		{"q=",search},
		{"ss=",srchstart},
		};

	while (p && *p) { // if url has no ?, then this will not execute...
		int x;
		for (x = 0; x < sizeof(httpgetdata)/sizeof(httpgetdata[0]) && strncmp( p+1, httpgetdata[x].key, strlen(httpgetdata[x].key) ); x++);
		if ( x < sizeof(httpgetdata)/sizeof(httpgetdata[0]) ) {
			char *p2=httpgetdata[x].val;
			*p2=0;
			strncpy(p2,p+strlen(httpgetdata[x].key)+1,256);
			while (*p2 && *p2 != '&') p2++;
			*p2=0;
			}
		p=strstr(p+1,"&");
		}

	if ( strstr(mode,"#") ) {
		char *q;
		q = mode + strlen(mode);
		while (q >= mode && *q != '#') q--; *q=0;
		}

	if (g_show_requests) log_printf( "%s %s \"%s\" \"%s\"\n", log_area, gethost(sin), url, user_agent ); //print out the url before we mangle it
	if (qmark) *qmark=0; // this is a pointer to the url where ? is, kill it.
	if (is_adm) strcpy(thisurl, ADMIN_URL);
	

	if (isRobots) { // ROBOTS.TXT file to disallow server pages to be indexed.
		sock_printf( sock, "%s%sContent-type: text/plain\r\n\r\nUser-agent: *\r\nDisallow: /\r\n", headHTTPOK, headCache );
		return;
		}
	if (isStyle) { // STYLE SHEET
		char style_file[MAX_PATH];
		wsprintf( style_file,"%s%s.css", g_working_dir, g_working_name );
		httpgetFile( sock, style_file, "text/css", headCache );
		return;
		}
	if (isJScript) { // JAVA SCRIPT
		char jscript_file[MAX_PATH];
		wsprintf( jscript_file,"%s%s.js", g_working_dir, g_working_name );
		httpgetFile( sock, jscript_file, "application/x-javascript", headCache );
		return;
		}
	if (isSpacer || isFolder || isControls || isControlsADM || isControlsBG) { // IMAGES USED
		char control_file[MAX_PATH];
		if (isSpacer)		wsprintf( control_file,"%sspacer.gif",			g_working_dir );
		if (isFolder)		wsprintf( control_file,"%sfolder.gif",			g_working_dir );
		if (isControls)		wsprintf( control_file,"%scontrols.gif",		g_working_dir );
		if (isControlsADM)	wsprintf( control_file,"%scontrols.mp3j.gif",	g_working_dir );
		if (isControlsBG)	wsprintf( control_file,"%scontrols.bg.gif",		g_working_dir );
		httpgetFile( sock, control_file, "image/gif", headCache );
		return;
		}

	// check privledges...
	// do not put above downloaded files (css & js)
	if (!is_adm && ((encodedlp[0] && strcmp(encodedlp,g_acclp)) || admreq)) {
		sock_printf( sock, 
			"HTTP/1.0 401 Unauthorized\r\n" 
			"WWW-Authenticate: basic realm=\"" BRANDING "%s\"\r\n" 
			"content-type:text/plain\r\n\r\nAuthorization failed.\r\n"
			, admreq?" Administrator Login":"" );
		return;
		}

	// This bit of code validates that the user is at a correct url... either / or /mp3j
	if ( strcmp(url, thisurl) ) {
		httpgetFile( sock, "/dev/null", 0, headNoCache );
		return;
		}
	
	// mode is a string... if we check the 0th byte and it's 0 (null) then
	// the string is empty...   and the if will fail, but we ! it so we it passes
	// the only time mode should be empty is on the initial request (or if a user hits reload)
	if (!mode[0] && !opt[0] && !coverart[0]) {
		sock_printf( sock, "%s%s%s\r\n"
			"<HTML>\n"
			"<HEAD>\n"
			"\t<TITLE>" BRANDING " " SERV_NAME "</TITLE>\n%s"
			"</HEAD>\n\n"
			"<FRAMESET ROWS=\"%d,*\" cols=\"*\" FRAMEBORDER=\"NO\" FRAMESPACING=\"0\" BORDER=\"0\">\n"
			"\t<FRAME SRC=\"%s?m=control\" NAME=\"wwControl\" SCROLLING=\"NO\">\n"
			"\t\t<FRAMESET cols=\"50%%,50%%\" FRAMEBORDER=\"NO\" FRAMESPACING=\"0\" BORDER=\"0\">\n"
			"\t\t\t<FRAME SRC=\"%s%s\" NAME=\"wwLeft\">\n"
			"\t\t\t<FRAME SRC=\"%s?m=right&q=*\" NAME=\"wwRight\">\n"
			"\t\t</FRAMESET>\n"
			"</FRAMESET>\n\n</HTML>\n",
			headHTTPOK, headServer, headCache, !isCE?headStyle:"", midHeight, thisurl, thisurl, PLAYLIST_DEFAULT, thisurl );
		return;
		}
	else {
		// mode is not null... 
		// set up main window window handler
		HWND hwnd_wa = FindWindow( g_winamp_class_name, NULL );
		int track=atoi(add);  // r is the track to be operated on

		if ( DEBUG ) printf ("%s looking for window %s\n", g_debug, g_winamp_class_name);
		
		if ( opt[0] ) { // ckeck to see if the option is emtpy. ALL ACTIONS WILL REDIRECT USER BACK TO PLAYLIST WINDOW
			
			if (hwnd_wa) { // Check to see if we have a winamp handle
				
				// set up playlist window handler.  Move to this section to be executed only when needed.
				// The orginal code only supported one on instance of winamp
				//HWND hwnd_pe = FindWindowEx( hwnd_wa, NULL, "Winamp PE", NULL );
				// One would think the following piece of code would support, however, the winamp playlist is 
				// not a child of the winamp main window.
				//HWND hwnd_pe = FindWindowEx( hwnd_wa, NULL, "Winamp PE", NULL );
				// Instead, we have to cycle thru all the windows from the top until we find the Playlist 
				// window with the same process id as the main window (they are the same).
				HWND hwnd_pe;
				HWND hwnd_top = GetDesktopWindow();

				while ( hwnd_pe = FindWindowEx( hwnd_top, hwnd_pe, "Winamp PE", NULL) ) {
					DWORD id1, id2; // create ID insances
					GetWindowThreadProcessId( hwnd_wa, &id1 );  // get the process id
					GetWindowThreadProcessId( hwnd_pe, &id2 );
					if ( DEBUG ) printf ("%s found playlist, checking proccess ids ID: %d ID: %d\n", g_debug, id1, id2);
					if (id1==id2) break;
					}
				// PHEW! we should have a valie winamp pe window handle.

				if		( !strcmp(opt,"rew")    && is_adm)	{ SendMessage( hwnd_wa, WM_COMMAND, WINAMP_BUTTON1, 0); g_last_action = 4; }
				else if ( !strcmp(opt,"pl")     && is_adm)	{ SendMessage( hwnd_wa, WM_COMMAND, WINAMP_BUTTON2, 0); g_last_action = 2; } // play would take it out of standby mode
				else if ( !strcmp(opt,"pau")    && is_adm)	{ SendMessage( hwnd_wa, WM_COMMAND, WINAMP_BUTTON3, 0); g_last_action = 5; }
				else if ( !strcmp(opt,"unp")    && is_adm)	{ SendMessage( hwnd_wa, WM_COMMAND, WINAMP_BUTTON3, 0); g_last_action = 5; }
				else if ( !strcmp(opt,"st")     && is_adm)	{ SendMessage( hwnd_wa, WM_COMMAND, WINAMP_BUTTON4, 0); g_last_action = 1; }
				else if ( !strcmp(opt,"for")	&& is_adm)	{ SendMessage( hwnd_wa, WM_COMMAND, WINAMP_BUTTON5, 0); g_last_action = 3; }
				else if ( !strcmp(opt,"clear")	&& is_adm)	{ SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_DELETE ); g_last_track = 0; }					// clear playlist and set last track == 0
				else if ( !strcmp(opt,"random")	&& is_adm)	SendMessage( hwnd_pe, WM_COMMAND, IPC_PE_RANDOMIZE, 0); // got this undocumented feature from tag
				else if ( !strcmp(opt,"d")      && is_adm)	SendMessage( hwnd_pe, WM_USER, 104, track);
				else if ( !strcmp(opt,"upPL")   && is_adm)	log_printf( "%s %s\n", "[list]", "Updating Playlist" );	
				else if ( !strcmp(opt,"sd")		&& is_adm)	{ g_shutdown = 1; }
				else if ( !strcmp(opt,"upML")   && is_adm)	{ // reload database
					// can't do that cuz they will change ports :P or other stupid things users do
					// LoadConfig(); // purposely ignore harmless errors
					int x;
					EnterCriticalSection(&library_mutex);
					for ( x = 0; x < database_used; x++ ) {
						wsprintf( database[x].file, "" );
						wsprintf( database[x].leading_path, "" );
						}
					database_used=0;
					makeDB();
					LeaveCriticalSection(&library_mutex);
					}
				else if ( !strcmp(opt,"j") && is_adm) {
					g_playing_standby=0; // jumped to a file, so we're no longer in standby mode
					SendMessage( hwnd_wa, WM_WA_IPC, track, IPC_SETPLAYLISTPOS );
					SendMessage( hwnd_wa, WM_COMMAND, WINAMP_BUTTON2, 0 );
					}
				else { // cue or add track or album
					if ( 0 <= track && track < database_used ) {
						char s[MAX_PATH];
						wsprintf( s, "%s%s", database[track].leading_path, database[track].file );

						// don't add a track that is the same as the very last track queued, unless winamp isn't playing anything 
						// only checks for files added this section, needs to be reworked so that it checks existing items.
						if ( (track!=g_last_track) || (!SendMessage(hwnd_wa,WM_WA_IPC,0,IPC_ISPLAYING)) ) {
							COPYDATASTRUCT cds;
							g_last_track = track;  // save the index of the last track 

							// if we're in standby mode, and adding a track, then we want to clear the current playlist
							if (g_playing_standby) SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_DELETE );	// clear playlist standby song.

							if (!strcmp(opt,"cue") && is_adm) {
								fileinfo song;
								strcpy(song.file, s);
								song.index = SendMessage( hwnd_wa, WM_WA_IPC, 0, 120 );
								song.index += 1;
								cds.dwData = IPC_PE_INSERTFILENAME;
								cds.lpData = (void *) &song;
								cds.cbData = sizeof(fileinfo);
								SendMessage(hwnd_pe,  WM_COPYDATA, (WPARAM)IPC_PE_INSERTFILENAME, (LPARAM)&cds );
								}
							if (!strcmp(opt,"add") ) { 
								cds.dwData = IPC_PLAYFILE; 
								cds.lpData = (void *) s; 
								cds.cbData = strlen((char *) cds.lpData)+1; 
								SendMessage( hwnd_wa, WM_COPYDATA, (WPARAM)NULL, (LPARAM)&cds ); 
								} 
							if (!strcmp(opt,"addd") ) { // add directory to playlist
								char pathArg[MAX_PATH];
								char dir[MAX_PATH];
								char *p;
								strncpy( dir, s, MAX_PATH );
								p = dir + strlen(dir);
								while (p >= dir && *p != '\\') p--;
								*p=0;
								wsprintf(pathArg," /CLASS=\"%s\" /ADD \"%s\"", g_winamp_class_name, dir );
								_spawnl( _P_NOWAIT, g_winamp_exe, pathArg, NULL ); // add an entire folder and all subfolders
								}

							// hit play   we'll come back to this later :P 
							// if ( !SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_ISPLAYING ) ) SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_STARTPLAY );
							
							// if it's still playing the standby track
							// just skip to new track
							if (g_playing_standby) 	SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_STARTPLAY ); // start playing newly added track
							g_playing_standby=0; // move out of standby mode, if we were in it

							}
						else{ 
							log_printf( "%s Attempted to cue or add duplicate track or folder: %s\n", log_area, s ); 
							} 
						}
					}
				}
			else { // no handler exists.  Winamp is not open.  
				if ( !strcmp(opt,"swa") && is_adm ) {
					// if the option is to start winamp, then we attempt to start winamp.
					// we call winamp.mpu as a parameter so that winamp automatically starts playing.
					// autoplaying prevents having to click twice in the browser window.
					STARTUPINFO startWAinfo={sizeof(startWAinfo),};
					PROCESS_INFORMATION processWAinfo;
					char startWA[MAX_PATH];
					wsprintf( startWA, "\"%s\" /class=\"%s\" \"%s\\winamp.m3u\"", g_winamp_exe, g_winamp_class_name, g_winamp_dir );
					log_printf("[mp3j] Executing %s\n",startWA);
					CreateProcess( NULL, startWA, NULL, NULL, 0, 0, NULL, g_winamp_dir, &startWAinfo, &processWAinfo );
					}
				}

			// this type of redirect doesn't support time out refreshing. we want to wait a second 
			// so Winamp updates the playlist after any operations on it
			sock_printf( sock, 
				"HTTP/1.0 302 Found\r\n"
				"Content-type:text/html\r\n"
				 "Server: " SERV_NAME SERV_VER "\r\n"
				"Location: %s%s\r\n"
				"\r\n"
				"<HTML>\r\n<HEAD>\r\n\t<TITLE>Redirect</TITLE>\r\n</HEAD>\r\n\r\n<BODY>\r\nClick <a href=\"%s%s\">HERE</A> for redirect.\r\n</BODY>\r\n</HTML>\r\n"
				, thisurl, PLAYLIST_DEFAULT, thisurl, PLAYLIST_DEFAULT );
			//sock_printf( sock, "%s%s%s\r\n", headHTTPOK, headServer, headNoCache );
			//sock_printf( sock, "<meta http-equiv=\"refresh\" content=\"0; url=%s%s\">%s<BODY CLASS=\"loading\">Loading...</body>", thisurl, PLAYLIST_DEFAULT, headStyle );
			}
		else {
			if (coverart[0]) {
				char coverArtFile[MAX_PATH];
				char s[MAX_PATH];
				char *p;

				// if we are doing a media list coverart, then get the url from the dbType database.
				if (!strcmp( coverart, "ML" )) wsprintf( s, "%s%s", database[track].leading_path, database[track].file );
				// else we need to get the full file name from wwwinamp, and the IPC_GETPLAYLISTFILE option only works using plugins, not external apps. :(
				if (!strcmp( coverart, "PL" )) {
					FILE *fp;
					int cursong		= SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_WRITEPLAYLIST );
					int x = 0;
					char fn[MAX_PATH];
					wsprintf( fn, "%s\\winamp.m3u", g_winamp_dir );
					fp = fopen( fn, "rt" );
					if (fp && hwnd_wa) {
						while (1) {
							char *fnp;
							fgets(fn,sizeof(fn),fp);
							if (feof(fp)) break;
							fnp=fn;
							if (fnp[0] && fnp[strlen(fnp)-1] == '\n') fnp[strlen(fnp)-1]=0;
							while (*fnp == ' ') fnp++;
							if (*fnp == '#') continue;
							if ( x == track) {
								strncpy( s, fnp, MAX_PATH );
								break;
								}
							x++;
							}
						}
					}
				// take the actual file name, and then parse out the directory name from that.
				p = s + strlen(s);
				while (p >= s && *p != '\\') p--;
				*++p=0;
				// fetch the cover art
				wsprintf( coverArtFile, "%s%s", s, g_cover_art_filename );
				httpgetFile( sock, coverArtFile, "image/jpeg", headCache );
				return;
				}
			else { // no option, not an action
				// mode is not null, but add and opt are... so we are simply displaying a page...

				// http protocol stuff.
				sock_printf( sock, "%s%s%s\r\n", headHTTPOK, headServer, headNoCache );

				// html stuff.
				sock_printf( sock, "<HTML>\n<HEAD>\n%s", !isCE ? headStyle : "");
				if ( !strcmp(mode,"left") ) {
					if ( g_left_refresh ) sock_printf(sock,"\t<META HTTP-EQUIV=\"Refresh\" CONTENT=\"%d\">\n", g_left_refresh );
					// sock_printf(sock,"\t<script language=\"JavaScript\" src=\"" JSCRIPT_URL "\"></script>\r\n");
					}
				sock_printf(sock, "</HEAD>\n\n<BODY CLASS=\"WWWinamp_%s\">\n\n", mode);
				
				//if ( is_adm ) sock_printf(sock,"<A href=\"%s?o=random\">Random</a> | <A href=\"%s?o=clear\">Clear</a> | <A href=\"%s?o=upPL\">Update</a><br />", thisurl );
				
				if (!strcmp(mode,"left")) {
					// find the winamp playlist....
					if (hwnd_wa) {
						char fn[MAX_PATH];
						FILE *fp;
						EnterCriticalSection(&playlist_mutex);
						wsprintf( fn, "%s\\winamp.m3u", g_winamp_dir );
						fp = fopen( fn, "rt" );
						if (fp) {
							int x=0;
							int cursong		= SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_WRITEPLAYLIST );
							int numtracks	= SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_GETLISTLENGTH );
							int ps			= SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_ISPLAYING);
							int listlen = numtracks - cursong;
							char tempID3[MAX_PATH];
							
							if (listlen==1 && ps==0) { // STANDBY MODE
								// if one track left, but stopped (i.e., after last song), either
								// play a random track
								if (g_last_action != 1 ) {
									//only play a random track if the users last action wasnt STOP
									if ( g_eop_action == eop_mode_random ) {
										int r = (int)(database_used * (int)myrand() / (double)(RAND_MAX+1));
										char s[MAX_PATH];
										COPYDATASTRUCT cds;
										// Set g_last_track = 0 so you can add the same album you were just listening to, before the random track was added								
										g_last_track = 0;
										wsprintf( s, "%s%s", database[r].leading_path, database[r].file );
										cds.dwData = IPC_PLAYFILE;
										cds.lpData = (void *) s;
										cds.cbData = strlen((char *) cds.lpData)+1;
										SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_DELETE );					// clear playlist
										SendMessage( hwnd_wa, WM_COPYDATA, (WPARAM)NULL, (LPARAM)&cds );	// add new track
										//SendMessage( hwnd_wa, WM_WA_IPC, 1, IPC_SETPLAYLISTPOS );			// skip to the new track
										SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_STARTPLAY );				// play track
										g_playing_standby=1;
									}
									if ( g_eop_action == eop_mode_stream ) {
										// play the filler stream
										char pathArg[256]; 
										wsprintf( pathArg, " /CLASS=\"%s\" %s", g_winamp_class_name, g_filler_stream_url ); 
										_spawnl( _P_NOWAIT, g_winamp_exe, pathArg, NULL ); 
										g_playing_standby=1;
									}
									if ( g_eop_action == eop_mode_repeat ) {
										//repeat playlist from beginning
										SendMessage( hwnd_wa, WM_WA_IPC, track, IPC_SETPLAYLISTPOS );
										SendMessage( hwnd_wa, WM_COMMAND, WINAMP_BUTTON2, 0 );
									}
								}
							}

							// display the "include" file
							if (g_include_html) sock_printf( sock, "<div class=\"include\"%s</div>\n<p>",g_include_html );

							sock_printf(sock,"<pre>");

							while (1) {
								char tmp[1024];
								char *p;
								fgets(fn,sizeof(fn),fp);
								if (feof(fp)) break;
								p=fn;
								if (p[0] && p[strlen(p)-1] == '\n') p[strlen(p)-1]=0;
								while (*p == ' ') p++;
								if (*p == '#') {
									if ( !strncmp(p,"#EXTINF",7) ) {
										while (*p != ',') p++;
										strcpy(tempID3,++p);
										}
									continue;
									}
								if ( tempID3[0] ) {
									strcpy(tmp,tempID3);
									tempID3[0]=0;
									}
								else {
									char *tp;
									p=fn+strlen(fn);
									while (*p != '\\' && *p != '/' && p >= fn) p--;
									while (*p != '\\' && *p != '/' && p >= fn) p--;
									if (p[0]) p++;
									tp=p;
									while (*tp) tp++;
									while (tp > p && *tp != '.' && *tp != '\\' && *tp != '/') tp--;
									if (tp > p && *tp == '.') *tp=0;
									unfixstring(p,tmp,sizeof(tmp));
									}
								if (x == cursong) {
									sock_printf( sock, "<table class=\"CurrentBox\"><tr><td width=\"%d\">", g_cover_art_size_playing);
									if(g_show_cover_art && hasCoverArt(fn) ) sock_printf( sock, 
										"<img src=\"%s?ca=PL&a=%d\" width=\"%d\" height=\"%d\" border=\"0\">"
										, thisurl, x, g_cover_art_size_playing, g_cover_art_size_playing );
									sock_printf( sock, "</td><td class=\"Current\">");
									switch ( SendMessage( hwnd_wa, WM_WA_IPC, 0, IPC_ISPLAYING ) ) {
										case 0: sock_printf(sock,"Currently stopped"); break;
										case 1: sock_printf(sock,"Currently playing"); break;
										case 3: sock_printf(sock,"Currently paused");  break;
										default: break;
										}
									sock_printf( sock, "<br /><a name=\"playing\">%d. <b class=\"CurrentSong\">%s</b></a><br />", x+1, tmp );

									sock_printf( sock, "<b>%d of %d file%s</b> left in queue</td></tr></table>", listlen, numtracks, numtracks==1?"":"s");
									}
								else {
									if (!isCE || (isCE && (x > cursong) && (x < cursong + 10))) {
										sock_printf( sock, "% 6d. ", x+1 );
										if (is_adm) {
											sock_printf( sock, "[<a href=\"%s?o=j&a=%d\" title=\"play this track\">j</a>]", thisurl, x );
											sock_printf( sock, "[<a href=\"%s?o=d&a=%d\" title=\"remove from queue\">d</a>] ", thisurl, x );
											}
										sock_printf( sock, "%s\n", tmp );
										}
									}
								x++;
								}
							sock_printf(sock,"</pre>");
							if (!isCE){ sock_printf( sock, "\n"
								"\n\n<p><div class=\"footer\"><a href=\"" BRANDING_URL "\" target=\"_blank\">" SERV_NAME_LONG "</a><br />\n"
								BRANDING " " SERV_NAME " " SERV_VER "<BR />\n"
								MODIFICATION_COPYRIGHT1 "<br />\n"
								MODIFICATION_COPYRIGHT "<br />\n"
								BRANDING_COPYRIGHT "<br />\n"
								COPYRIGHT "</div>\n");
							}
							fclose(fp);          
							LeaveCriticalSection(&playlist_mutex);
							} 
						else if (!isCE) sock_printf(sock,"<B>No Winamp playlist found</B><br /><br />");
						}
					else {
						sock_printf( sock, "%s", !isCE?"<div class='search'>No instance Winamp was found running.<br />":"No Winamp - " );
						if (is_adm) sock_printf( sock, "[ <a href=\"%s?o=swa\">%s</a> ]\n\n",thisurl, !isCE?"Try starting Winamp":"start" );
						sock_printf( sock, "%s", !isCE?"</div":"" );
						}
					}
				else if (!strcmp(mode,"control")) {
					sock_printf( sock, "<table border=0 cellpadding=0 cellspacing=0 width=\"%s\"><tr><td align=\"left\">\n", "99%" );
					sock_printf( sock, "<base target=\"wwLeft\">\n<MAP NAME=\"controls_Map\">\n" );
					if ( !is_adm ) sock_printf( sock, "<AREA SHAPE=\"rect\" ALT=\"Log-In using MP3J Mode\"	COORDS=\"2,11,97,27\" href=\"%s\" target=\"_top\">\n", ADMIN_URL );
					else {
						sock_printf( sock, 
							"<AREA SHAPE=\"rect\" ALT=\"\" COORDS=\" 2,12,18,28\"   href=\"%s?o=rew\">\n"
							"<AREA SHAPE=\"rect\" ALT=\"\" COORDS=\"22,12,38,28\"   href=\"%s?o=pl\">\n"
							"<AREA SHAPE=\"rect\" ALT=\"\" COORDS=\"42,12,58,28\"   href=\"%s?o=pau\">\n"
							"<AREA SHAPE=\"rect\" ALT=\"\" COORDS=\"62,12,78,28\"   href=\"%s?o=st\">\n"
							"<AREA SHAPE=\"rect\" ALT=\"\" COORDS=\"82,12,98,28\"   href=\"%s?o=for\">\n"
							"<AREA SHAPE=\"rect\" ALT=\"\" COORDS=\"247,12,302,32\" href=\"%s?o=random\">\n"
							"<AREA SHAPE=\"rect\" ALT=\"\" COORDS=\"306,12,335,32\" href=\"%s?o=clear\">\n"
							"<AREA SHAPE=\"rect\" ALT=\"\" COORDS=\"340,12,376,32\" href=\"%s?o=upPL\">\n"
							,
							thisurl, thisurl, thisurl, thisurl, thisurl, thisurl, thisurl, thisurl 
							);
						}
					
					if ( g_sc_server[0] )
						sock_printf( sock,
							"<AREA SHAPE=\"rect\" ALT=\"Listen To Stream\"	COORDS=\"385,8,409,28\" HREF=\"%s/listen.pls\">\n"
							"<AREA SHAPE=\"rect\" ALT=\"Shoutcast Server\"	COORDS=\"414,8,438,28\" TARGET=\"_blank\" HREF=\"%s\">\n"
							,
							g_sc_server, g_sc_server
							);
					else sock_printf( sock, "<area shape=\"rect\" alt=\"shoutcast not configured\" COORDS=\"385,8,438,28\"  onclick=\"alert('WWWinamp is not configured for use with shoutcast at this time');\">\n" );
					sock_printf( sock, "</MAP>\n\n" );
					sock_printf( sock, "<img src=\"%s\" width=700 height=32 border=0 usemap=\"#controls_Map\">", (is_adm)?CONTROLADM_URL:CONTROL_URL );
					if ( is_adm ) {
						sock_printf( sock, "</td><td align=\"right\" valign=\"middle\"><small>[<a href=\"%s?o=sd\">Shutdown Server</a>]</small></td></tr></table>\n", thisurl );
					}
					if ( !is_adm ) {
						sock_printf( sock, "</td><td>&nbsp;</td></tr></table>\n" );
					}
				}
				else {
					// Media Library 
					if (!strcmp(mode,"right")) {
					
						int x;
						int start;
						int showAll=0;
						int nf=0;
						int pagesize = isCE ? 64 : g_library_page_size;
						char searchstring[1024], *p;
			
						unfixstring(search,searchstring,1024);
						p=searchstring;

						while (*p) {
							if (*p == '+') *p=' ';
							p++;
							}
						if (!strcmp(searchstring,"*")) showAll=1;
						sock_printf(sock,"<table border=0 cellspacing=0 cellpadding=3>\n" "<tr valign=\"top\">\n" );
						if (is_adm) {
							sock_printf(sock,"<form method=\"get\" action=\"%s\" target=\"wwLeft\">\n"
								"<input type=hidden name=\"o\" value=\"upML\">\n"
								"<td><input type=submit value=\"Update\"></td>\n"
								"</form>\n"
								,thisurl);
							}
						sock_printf(sock,"<form method=\"get\" action=\"%s\">\n"
							"<input type=hidden name=\"m\" value=\"right\">\n"
							"<input type=hidden name=\"q\" value=\"*\">\n"
							"<td><input type=submit value=\"All\"></td>\n"

							"</form>\n"
							,thisurl);
						sock_printf( sock,
							"<form method=\"get\" action=\"%s\" name=\"search\">\n"
							"<input type=hidden name=\"m\" value=\"right\">\n"
							"<td><input type=text name=\"q\" size=\"30\" maxlen=\"64\" value=\"%s\" onfocus=\"this.select()\"></td>\n"
							"<td><input type=submit value=\"Search\"></td>\n<td><input type=button value=\"Jump\" onclick=\"if ( search.q.value ) window.location='\%s?m=right&q=*&ss=' + search.q.value \"></td>\n<td><input type=button value=\"Google\" onclick=\"if ( search.q.value ) window.open( 'http://www.google.com/search?q=' + search.q.value );\"></td>\n</form>\n"
							, thisurl, searchstring, thisurl);
						sock_printf(sock,"</tr></table><BR />\n");

						if ( showAll || strlen(searchstring) > 1 ) {
							int istablestarted=0;
							int istdstarted=0;
							char last_leading_path[1024];
							char *ssout = (char*)malloc(strlen(searchstring)*2+8);
							parselist(ssout,searchstring);
							strcpy(last_leading_path,"\\\\\\\\\\");
							start = atoi(srchstart);
			
							sock_printf( sock, "<div class=search>\n\n");
							if (showAll) sock_printf(sock, "Showing all %d item%s.", database_used,  (database_used==1)?"":"s" );
							else sock_printf( sock, "Searching for '%s' in %d item%s.", searchstring, database_used, (database_used==1)?"":"s" );
							if (start) sock_printf( sock, " (Starting at %d)", start );
							if (1==1) {
								sock_printf( sock, "<br /> Showing %d - %d of %d item%s ", start-pagesize+pagesize, start+pagesize, database_used,database_used==1?"":"s" );
								if (start>0) {
									sock_printf( sock, "<br /><a href=\"%s?m=right&q=%s&ss=%d\">&laquo; first </a>", thisurl, search, 0 );
									sock_printf( sock, "<a href=\"%s?m=right&q=%s&ss=%d\">&lt; prev </a>", thisurl, search, max(start-pagesize,0) );
									}
									else {
										sock_printf( sock, "<br /><span class=inactive>&laquo; first </span>");
										sock_printf( sock, "<span class=inactive>&lt; prev </span>");
									}
								sock_printf( sock, " | ");
								if (database_used-1000 > start+pagesize) {
									sock_printf( sock, "<a href=\"%s?m=right&q=%s&ss=%d\"> next &gt;</a>", thisurl, search, start+pagesize );
									sock_printf( sock, "<a href=\"%s?m=right&q=%s&ss=%d\"> last &raquo;</a>", thisurl, search, database_used-pagesize );
									}
									else {
										sock_printf( sock, "<span class=inactive> next &gt;</span>" );
										sock_printf( sock, "<span class=inactive> last &raquo;</span>" );
									}
								}
							sock_printf( sock, "</div>\n\n<p>");

							for (x = 0; x < database_used; x ++) {
								int found=showAll || substr_search(database[x].file,ssout) || substr_search(database[x].leading_path,ssout);
								if (!found) {
									char dummy[1024];
									unfixstring( database[x].file, dummy, 1024 );
									found = substr_search( dummy, ssout );
									}
								if (found && ++nf >= start && nf < start+pagesize) {
									char leading_path[MAX_PATH];
									char buf[MAX_PATH];
									char *tp = buf;
									char *p = buf;
									char *ptr = database[x].file;
									unfixstring(ptr,buf,sizeof(buf));
									while (*p) p++;
									while (p > buf && *p != '\\' && *p !=  '/') p--;
									*p=0;
									strncpy( leading_path, buf, sizeof(leading_path)-1 );
									leading_path[sizeof(leading_path)-1]=0;
									// stricmp returns 0 if equal, will skip if last_leading path eqals leading_path
									if (stricmp(leading_path,last_leading_path)) {
										char fullFilename[MAX_PATH];
										char addDirLink[128];
										strcpy(last_leading_path,leading_path);
										wsprintf( fullFilename, "%s%s", database[x].leading_path, database[x].file );
										wsprintf( addDirLink, "<a target=\"wwLeft\" href=\"%s?o=addd&a=%d\">", thisurl, x );
										if ( g_show_cover_art ) {
											if (istablestarted) sock_printf( sock, "</td></tr></table>\n");
											sock_printf( sock, "<table class=l>\n");
											sock_printf( sock, "<tr><td colspan=2 class=ld>%s<img src=\"/folder.gif\"></a> %s\\</td></tr>\n<tr><td class=ca>%s", addDirLink, leading_path, addDirLink );
											if( hasCoverArt(fullFilename) )	sock_printf( sock, "<img src=\"%s?ca=ML&a=%d\" width=\"%d\" height=\"%d\" border=\"0\">", thisurl, x, g_cover_art_size_db, g_cover_art_size_db );
											else sock_printf( sock, "<img src=\"/spacer.gif\" width=\"%d\" height=\"1\" border=\"0\">", g_cover_art_size_db);
											sock_printf( sock, "</a></td>\n<td class=l><pre>");
											}
										else {
											if (!istablestarted) sock_printf( sock, "<pre>");
											sock_printf( sock, "<p><b>[%sA</a>] %s</b>\\\n", addDirLink, leading_path );
											}
										istablestarted++;
										istdstarted=0;
										}
									while (*ptr) ptr++;
									while (*ptr != '\\' && *ptr != '/' && ptr > database[x].file) ptr--;
									if (ptr > database[x].file) ptr--;
									while (*ptr != '\\' && *ptr != '/' && ptr >= database[x].file) ptr--;
									ptr++;
									//sock_printf( sock, "%s. ", (istdstarted)?"\n":"", x+1 );
									sock_printf( sock, "%s", (istdstarted)?"\n":"" );
									if (is_adm) sock_printf(sock,"[<a href=\"%s?o=cue&a=%d\" target=\"wwLeft\" title=\"cue this as next track\">c</a>] ",thisurl,x);
									unfixstring(ptr,buf,sizeof(buf));
									while (*tp) tp++;
									while (tp > buf && *tp != '.' && *tp != '\\' && *tp != '/') tp--;
									if (tp > buf && *tp == '.') *tp=0;
									while (tp >= buf && *tp != '\\' && *tp != '/') tp--;
									tp++;
									sock_printf( sock, "<a title=\"click to add file to end of playlist\" href=\"%s?o=add&a=%d\" target=\"wwLeft\">%s</a>", thisurl, x, tp );
									istdstarted++;
									}
								}
							
							if (istablestarted) {
								if( g_show_cover_art ) sock_printf( sock, "</td></tr></table>");
								else sock_printf(sock,"</pre>\n\n");
								}

							if (nf) {
								sock_printf( sock, "<div class=search>" );
								sock_printf( sock, " Showing %d - %d of %d item%s <br />",start-pagesize+pagesize, start+pagesize, nf,nf==1?"":"s" );
								if (start>0) {
									sock_printf( sock, "<a href=\"%s?m=right&q=%s&ss=%d\">&laquo; first </a>", thisurl, search, 0 );
									sock_printf( sock, "<a href=\"%s?m=right&q=%s&ss=%d\">&lt; last </a>", thisurl, search, max(start-pagesize,0) );
								}
								else {
									sock_printf( sock, "<span class=inactive>&laquo; first </span>");
									sock_printf( sock, "<span class=inactive>&lt; last </span>");
								}
								sock_printf( sock, " | ");
								if (nf > start+pagesize){
									sock_printf( sock, "<a href=\"%s?m=right&q=%s&ss=%d\"> next &gt;</a>", thisurl, search, start+pagesize );
									sock_printf( sock, "<a href=\"%s?m=right&q=%s&ss=%d\"> last &raquo;</a>", thisurl, search, nf-pagesize );
									}
									else {
										sock_printf( sock, "<span class=inactive> next &gt;</span>" );
										sock_printf( sock, "<span class=inactive> last &raquo;</span>" );
									}
								
                sock_printf( sock, "</div>" );
								}
							else sock_printf( sock, "<div class=search>No items found.</div>\n\n" );
							free(ssout);
							}
						}
					}
				sock_printf( sock, "\n</body>\n</html>\n");
				}
			return;
			}
		}
	}

int hasCoverArt( char *fn ) {
	FILE*	fTmp;
	char	coverArtDir[MAX_PATH];
	char	coverArtFile[MAX_PATH]	= "";
	char	*p;
	strncpy( coverArtDir, fn, MAX_PATH );
	p = coverArtDir + strlen(coverArtDir);
	while (p >= coverArtDir && *p != '\\') p--;
	*++p=0;
	wsprintf( coverArtFile, "%s%s", coverArtDir, g_cover_art_filename );
	if( fTmp = fopen(coverArtFile,"r") ) {
		fclose( fTmp );
		return 1;
		}
	return 0;
	}

int WaitForConnection(int sock,struct sockaddr_in *sin) {
	int msgsock, length;
	length = sizeof(struct sockaddr_in);
 	msgsock = accept(sock, (struct sockaddr *)sin, &length);
	return msgsock;
	}

int myrand(void) {
	g_rand_next = g_rand_next * 1103515245 + 12345;
	return ( (g_rand_next >>16) & RAND_MAX);
	}

void mysrand (unsigned int seed) { 
	g_rand_next = seed;
	}

int httpgetFile( int sock, char *fileName, char *ContentType, char *cacheString ) {
	FILE *httpFile=NULL;
	char filebuffer[1024];
	char headHTTP200[256]		= "HTTP/1.0 200 OK\r\n";
	char headHTTP404[256]		= "HTTP/1.0 404 Not Found\r\n";
	char log_area[8]			= "[file]";
	httpFile = fopen(fileName, "rb");
	if (httpFile && ContentType) {
		int readBytes;
		sock_printf( sock, "%s%sContent-type: %s\r\n\r\n", headHTTP200, cacheString, ContentType );
		while (!feof(httpFile)) {
			readBytes = fread( filebuffer, sizeof(char), 1024, httpFile );
			sock_send(sock, filebuffer, readBytes);
			}
		fclose(httpFile);
		return 1;
		}
	else {
		sock_printf( sock, "%sContent-type: text/html\r\n\r\n", headHTTP404 );
		sock_printf( sock, "<HTML><HEAD>\n<TITLE>404 Not Found</TITLE>\n</HEAD><BODY>\n<H1>Not Found</H1>\nThe requested URL was not found on this server.<P>\n<HR><ADDRESS>%s %s Port %d</ADDRESS>\n</BODY></HTML>", SERV_NAME, SERV_VER, g_dst_port );
		if (ContentType) log_printf( "%s ERROR: couldn't find %s .\n", log_area, fileName );
		return 0;
		}
	}
