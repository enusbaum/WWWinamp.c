Halo 8 WWWinamp v2.7.4
Winamp Remote Control Server 
http://projects.halo8.net/
February 2 2003

Copyright (c) 1998-2001 Nullsoft, Inc.
Copyright (c) 2002-2003 Halo 8 Productions

-------------------------------------------------------------------------------
S E C T I O N S
-------------------------------------------------------------------------------

1. License
2. About
3. Usage
4. Using multiple instances of Winamp

-------------------------------------------------------------------------------
L I C E N S E
-------------------------------------------------------------------------------

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

-------------------------------------------------------------------------------
A B O U T
-------------------------------------------------------------------------------

WWWinamp is a simple web server-like application that allows remote control
of Winamp via any web browser. WWWinamp manages a database of files and/or 
URLs that can be queued into a running Winamp.

WWWinamp supports most standard web browsers, and includes a special mode
(that conserves bandwidth and screen space) for Windows CE devices.

WWWinamp supports two optional levels of password protection. The first level
lets you control who can search the database and queue files, and the second 
lets you control who can do things like remove files from the queue, pause 
playback, and so on.

-------------------------------------------------------------------------------
U S A G E
-------------------------------------------------------------------------------

To configure WWWinamp, first the configuration file (wwwinamp.ini) in your
Winamp directory. The installer should have created a start menu shortcut for
that purpose.

Once you have editted the configuration file to meet your needs, start the 
server. Again, the installer should have created a start menu shortcut for that
purpose as well.

Once the server is running, you can gain access to it by going to 
http://hostname/ or http://hostname:port/ (depending on how you configured the
port). If running on the local machine, use http://localhost/.

For access to the second level of control, use http://hostname/admin/

-------------------------------------------------------------------------------
U S I N G   M U L T I P L E   I N S T A N C E S   O F   W I N A M P
-------------------------------------------------------------------------------

To configure wwwinamp to support muptiple instances of winamp, you're more than
likely going to be hosting two or more shoutcast streams.  WWWinamp and Winamp will 
work together, the right way, to run as many versions as you need using only 
config files.  That is to say, you will only need one WWWinamp executable and 
one Winamp executable located on your system.   However, as you already may know
from configuring multiple shoutcast instances, you may need separate winamp/DSP 
plugin executables for the shoutcast configuration.   Sadly, this is not under
our control.

Anywhoo, the way WWWinamp supports multiple Winamp versions is by using different 
class names for the main winamp window.   You can specify the class name one of 2 
ways.

1) Start winamp with the the correct configuration parameter, and make sure the 
   parameter is the same specified in the WWWinamp configuration file.

   wwwinamp.ini
   ------------
   WinampClassName=MyWinampWindow

   Start Winamp
   ------------
   C:\Program Files\Winamp\> winamp.exe /CLASS=MyWinampWindow

2) Simply edit the wwwinamp configuration (as in example 1) and then start winamp 
   from within the wwwinamp application.   

NOTE: Because you are probally using multiple versions of Winamp, you may have the 
"Allow Muliple Versions" settings turned on in Winamp's preferences.  We recommend
you turn this setting off.   Winamp will start a new instance regarless of that setting
if you pass it /new or /class=Something parameters.

