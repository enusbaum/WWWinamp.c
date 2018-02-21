!define APP_VER_MAJOR 2
!define APP_VER_MINOR 7.8
!define APP_PUBLISHER "Halo 8 Productions"
!define APP_NAME "WWWinamp"
!define APP_FOLDER "wwwinamp"
!define APP_LONGNAME "WWWinamp Remote Control"


; The name of the installer
Name "${APP_LONGNAME}"

; The file to write-+
OutFile "Halo8WWWinamp-${APP_VER_MAJOR}.${APP_VER_MINOR}.exe"

; The text to prompt the user to enter a directory
ComponentText "This will install ${APP_PUBLISHER} ${APP_NAME} on your computer. Select which optional things you want installed."

; The text to prompt the user to enter a directory
DirText "This program will install ${APP_NAME} on your computer. Please choose a directory."

; uninstall stuff
UninstallText "This will uninstall ${APP_NAME}. Hit next to continue."

; The default installation directory
; Registry key to check for directory upon re-install
InstallDir "$PROGRAMFILES\${APP_PUBLISHER}\${APP_FOLDER}"
InstallDirRegKey HKLM "SOFTWARE\${APP_PUBLISHER}\${APP_FOLDER}" "Install_Dir"

; Making mY Shit pretty!
Icon "${APP_PUBLISHER}.ico"
ShowInstDetails show
ShowUninstDetails show
InstProgressFlags colored
InstallColors FFCC00 666666

; The stuff to install
Section "${APP_NAME} (required)"
	; Set output path to the installation directory.
	SetOutPath $INSTDIR

	; R E G I S T R Y ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	; Write the installation path into the registry
	WriteRegStr HKLM "SOFTWARE\${APP_PUBLISHER}\${APP_FOLDER}" "Install_Dir" "$INSTDIR"

	; F I L E S  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	; oname = file name in release
	; File /oname=wwwinamp.css wwwinamp_release.css
	File Release\wwwinamp.exe
	File wwwinamp.css
	File wwwinamp.js
	File readme_nullsoft.txt
	File readme.txt
	File spacer.gif
	File folder.gif
	File controls.gif
	File controls.bg.gif
	File controls.mp3j.gif

	IfFileExists "$INSTDIR\wwwinamp.ini" 0 WriteAsNewName
		File /oname=wwwinamp_${APP_VER_MAJOR}.${APP_VER_MINOR}.ini wwwinamp.ini
		MessageBox MB_OK "Please note: Your customized ${APP_NAME} configuration file has not been modified.  Please review the configuration file installed with the lastest version of ${APP_NAME} (wwwinamp_${APP_VER_MAJOR}.${APP_VER_MINOR}.ini) for any new options or changes and apply these changes to your existing configuration.  Thank you."
		goto WriteAnyway
	WriteAsNewName:
		File wwwinamp.ini
	WriteAnyway:

	; U N I N S T A L L E R ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	; Write the uninstall file and the uninstall keys in windows registry
	WriteUninstaller "uninstall.exe"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\h8${APP_FOLDER}" "DisplayName" "${APP_PUBLISHER} ${APP_NAME}"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\h8${APP_FOLDER}" "UninstallString" '"$INSTDIR\uninstall.exe"'


SectionEnd

; optional section
Section "Start Menu Shortcuts"
	; C R E A T E   V E N D O R ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	CreateDirectory "$SMPROGRAMS\${APP_PUBLISHER}"
	SetOutPath "$SMPROGRAMS\${APP_PUBLISHER}"
	File "${APP_PUBLISHER}.url"

	; C R E A T E   V E N D O R ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	CreateDirectory "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}"
	CreateShortCut "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}\Uninstall.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\uninstall.exe" 0
	CreateShortCut "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}\${APP_NAME}.lnk" "$INSTDIR\wwwinamp.exe" "" "" 0
	CreateShortCut "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}\Configure.lnk" "$INSTDIR\wwwinamp.ini" "" "" 0
	CreateShortCut "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}\Readme.lnk" "$INSTDIR\readme.txt" "" "" 0

	; delete any existing readme's as they contain the version numbers in them.
;	Delete "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}\Read Me *.lnk"
;	CreateShortCut "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}\Read Me v${APP_VER_MAJOR}.${APP_VER_MINOR}.lnk" "$INSTDIR\readme.htm" "" "" 0
	; R E S T O R E   SetOutPath ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	SetOutPath $INSTDIR
SectionEnd


; The stuff to install for source code
Section "${APP_NAME} Source Code"
	; Set output path to the installation directory.
	SetOutPath $INSTDIR/source

	; F I L E S  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	; oname = file name in release
	; File /oname=wwwinamp.css wwwinamp_release.css
	File "${APP_PUBLISHER}.url"
	File "${APP_PUBLISHER}.ico"
	File *.psd
	File *.gif
	File read*.txt
	File *.h
	File *.c
	File wwwinamp.css
	File wwwinamp.js
	File wwwinamp.dsp
	File wwwinamp.dsw
	File wwwinamp.ini
	File wwwinamp.nsi

SectionEnd

Section "Uninstall"
	;; Custom Actions

	; NO Custom Actions 

	;; Base Actions

	; remove uninstall and install registry keys
	DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\h8${APP_FOLDER}"
	DeleteRegKey HKLM "SOFTWARE\${APP_PUBLISHER}\${APP_FOLDER}"

	; remove shortcuts.
	Delete "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}\Source\*.*"
	RMDir "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}\Source"
	Delete "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}\*.*"
	RMDir "$SMPROGRAMS\${APP_PUBLISHER}\${APP_LONGNAME}"
	IfFileExists "$SMPROGRAMS\${APP_PUBLISHER}" 0 NoDeletePublisher
		RMDir "$SMPROGRAMS\${APP_PUBLISHER}"
	NoDeletePublisher:

	; remove files
	Delete $INSTDIR\*.*
	Delete $INSTDIR\uninstall.exe
	RMDir "$INSTDIR"
	; remove files
SectionEnd
