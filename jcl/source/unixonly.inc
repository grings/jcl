{$IFNDEF UNIXONLY_INC}
{$DEFINE UNIXONLY_INC}

{-----------------------------------------------------------------------------
The contents of this file are subject to the Mozilla Public License
Version 1.1 (the "License"); you may not use this file except in compliance
with the License. You may obtain a copy of the License at
http://www.mozilla.org/MPL/MPL-1.1.html

Software distributed under the License is distributed on an "AS IS" basis,
WITHOUT WARRANTY OF ANY KIND, either expressed or implied. See the License for
the specific language governing rights and limitations under the License.

The Original Code is: unixonly.inc, released on 2004-06-21

Last Modified: 2004-05-07

You may retrieve the latest version of this file at the JCL home page,
located at http://homepages.borland.com/jedi/jcl/

Known Issues:
-----------------------------------------------------------------------------}

// Last modified: $Date$
// For history see end of file

{$I jedi.inc}

{$WARN UNIT_PLATFORM OFF}
{$WARN SYMBOL_PLATFORM OFF}

{$IFNDEF UNIX}
  {$IFDEF SUPPORTS_COMPILETIME_MESSAGES}
    {$MESSAGE FATAL 'This unit is only supported on Unix!'}
  {$ELSE}
    {$IFDEF XPLATFORM_RTL}
      'This unit is only supported on Unix!'
    {$ENDIF XPLATFORM_RTL}
  {$ENDIF SUPPORTS_COMPILETIME_MESSAGES}
{$ENDIF UNIX}

// History:

// $Log$
// Revision 1.1  2004/06/21 01:21:37  rrossmair
// - renamed from linuxonly.inc
// - $IFDEFed contents (to prevent from repeated inclusion)
// - uses UNIX symbol instead of LINUX (FPC requirement)
// - use of feature friendly symbol names
// - header text adapted for JCL
//

{$ENDIF ~UNIXONLY_INC}