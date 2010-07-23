/*------------------------------------------------------------\
|                                                             |
| This file is part of the Alliance CAD System Copyright      |
| (C) Laboratoire LIP6 - Département ASIM Universite P&M Curie|
|                                                             |
| Home page      : http://www-asim.lip6.fr/alliance/          |
| E-mail         : mailto:alliance-users@asim.lip6.fr       |
|                                                             |
| This progam is  free software; you can redistribute it      |
| and/or modify it under the  terms of the GNU Library General|
| Public License as published by the Free Software Foundation |
| either version 2 of the License, or (at your option) any    |
| later version.                                              |
|                                                             |
| Alliance VLSI  CAD System  is distributed  in the hope that |
| it  will be useful, but WITHOUT  ANY WARRANTY;              |
| without even the  implied warranty of MERCHANTABILITY or    |
| FITNESS FOR A PARTICULAR PURPOSE. See the GNU General       |
| Public License for more details.                            |
|                                                             |
| You should have received a copy  of the GNU General Public  |
| License along with the GNU C Library; see the file COPYING. |
| If not, write to the Free Software Foundation, Inc.,        |
| 675 Mass Ave, Cambridge, MA 02139, USA.                     |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
| Tool    :                     VVH                           |
|                                                             |
| File    :                   vvh_error.c                     |
|                                                             |
| Author  :                 Jacomme Ludovic                   |
|                                                             |
| Date    :                   01.01.95                        |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                         Include Files                       |
|                                                             |
\------------------------------------------------------------*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# include "mut.h"
# include "aut.h"

# include "vvh_error.h"

/*------------------------------------------------------------\
|                                                             |
|                           Constants                         |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                            Types                            |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                          Variables                          |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                          Functions                          |
|                                                             |
\------------------------------------------------------------*/

void vvh_error( Error, Text, Value, File, Line )

    int   Error;
    char *Text;
    long  Value;
    char *File;
    int   Line;
{
  char *Name;

  Name = mbkstrdup( File );
  Name[ strlen( File ) - 1 ] = '\0';

  fprintf( stderr, "%s%d ", Name, Line );

  switch( Error )
  {
    case VVH_ERROR_OPEN_FILE :
      fprintf( stderr, "Unable to open file \"%s\"\n", Text );
    break;
    case VVH_ERROR_PARSE_FILE :
      fprintf( stderr, "Unable to parse file \"%s\"\n", Text );
    break;
    case VVH_ERROR_AUX_INIT :
      fprintf( stderr, "Bad initilization of signal \"%s\"\n", Text );
    break;
    case VVH_ERROR_LOOP_PATH :
      fprintf( stderr, "Loop in process \"%s\" in figure \"%s\"\n", Text, (char *)Value );
    break;
    case VVH_ERROR_DRIVE_FILE :
      fprintf( stderr, "Unable to drive file \"%s\"\n", Text );
    break;
    case VVH_ERROR_BAD_TYPE :
      fprintf( stderr, "Invalid type \"%s\" in figure \"%s\"\n", Text, (char *)Value );
    break;
    default :
      fprintf( stderr, "Internal error number %d\n", Error );
  }

  autexit( 1 );
}

void vvh_warning( Warning, Text, Value, File, Line )

    int   Warning;
    char *Text;
    long  Value;
    char *File;
    int   Line;
{
  char *Name;

  Name = mbkstrdup( File );
  Name[ strlen( File ) - 1 ] = '\0';

  fprintf( stderr, "%s%d ", Name, Line );

  switch ( Warning )
  {
    default :
      fprintf( stderr, "Internal warning number %d\n", Warning );
  }
}
