/* This file is part of FTP Client for IBM i.                                    */
/*                                                                               */
/* Copyright (c) 2017 Chris Hird                                                 */
/* All rights reserved.                                                          */
/*                                                                               */
/* Redistribution and use in source and binary forms, with or without            */
/* modification, are permitted provided that the following conditions            */
/* are met:                                                                      */
/* 1. Redistributions of source code must retain the above copyright             */
/*    notice, this list of conditions and the following disclaimer.              */
/* 2. Redistributions in binary form must reproduce the above copyright          */
/*    notice, this list of conditions and the following disclaimer in the        */
/*    documentation and/or other materials provided with the distribution.       */
/*                                                                               */
/* Disclaimer :                                                                  */
/* FTP Client for IBM i is distributed in the hope that it will be useful,       */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of                */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                          */

#ifndef a_e_ccsid_h
   #define a_e_ccsid_h
        // includes
        #include <qtqiconv.h>                       /* conversion */
        #include <iconv.h>                          /* conversion */
        #include <errno.h>                          /* error number */
        #include <H/COMMON>
        // copyright statement
        #pragma comment(copyright,_CPYRGHT)

        // function pre-decs
        int AtoE_CCSID(char *, char *, int,iconv_t);
        int EtoA_CCSID(char *, char *, int,iconv_t);
        iconv_t Get_CCSID_table(int , int);
#endif
