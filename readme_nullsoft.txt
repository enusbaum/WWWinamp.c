WWWinamp v2.5d (Winamp Remote Control Server) - Sep 4 2001
http://www.nullsoft.com/free/wwwinamp/

Copyright 1998-2001 Nullsoft, Inc.

-------------------------------------------------------------------------------
License
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
About
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
Usage
-------------------------------------------------------------------------------

To configure WWWinamp, first edit the configuration file (wwwinamp.ini) in your
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
Notes
-------------------------------------------------------------------------------

This code has evolved over the course of about 3 years. It's kludgy, but works.
C source is in source\ if your installer installed it.

That's it for now.

Love,

Justin Frankel
justin@nullsoft.com
