/*
 * =====================================================================================
 *
 *       Filename:  imageview.c
 *
 *    Description:  just for view the image file
 *
 *        Version:  1.0
 *        Created:  2010年04月05日 15时02分58秒 CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lerosua (), lerosua@gmail.com
 *        Company:  Cyclone
 *
 * =====================================================================================
 */

#include <websites.h>

WebsiteInfo imageview= {
    "imageview",
    "^(?<video_id>http://.*\\.(jpg|png|gif|jpeg|xpm|bmp))$",
    "<p><img src=\"%VIDEO_ID%\" width=\"500\" alt=\"Bild;r\"></p>",
    NULL
};

