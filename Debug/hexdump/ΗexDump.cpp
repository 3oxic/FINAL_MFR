//
// Created by ntallaris on 5/5/2019.
//

#include "ΗexDump.h"

HexDump::HexDump(){

}

HexDump::HexDump(void *mem, unsigned int len):mem(mem), len(len){

}

void HexDump::print(void *memo, unsigned int leno) {
    hexdump2(memo, leno);
}

void HexDump::hexdump()
{
    unsigned int i, j;

    for(i = 0; i < len + ((len % HEXDUMP_COLS) ? (HEXDUMP_COLS - len % HEXDUMP_COLS) : 0); i++)
    {
        /* print offset */
        if(i % HEXDUMP_COLS == 0)
        {
            printf("0x%06x: ", i);
        }

        /* print hex data */
        if(i < len)
        {
            printf("%02x ", 0xFF & ((char*)mem)[i]);
        }
        else /* end of block, just aligning for ASCII dump */
        {
            printf("   ");
        }

        /* print ASCII dump */
        if(i % HEXDUMP_COLS == (HEXDUMP_COLS - 1))
        {
            for(j = i - (HEXDUMP_COLS - 1); j <= i; j++)
            {
                if(j >= len) /* end of block, not really printing */
                {
                    putchar(' ');
                }
                else if(isprint(((char*)mem)[j])) /* printable char */
                {
                    putchar(0xFF & ((char*)mem)[j]);
                }
                else /* other char */
                {
                    putchar('.');
                }
            }
            putchar('\n');
        }
    }
}


void HexDump::hexdump2(void *memo, unsigned int leno)
{
    unsigned int i, j;

    for(i = 0; i < leno + ((leno % HEXDUMP_COLS) ? (HEXDUMP_COLS - leno % HEXDUMP_COLS) : 0); i++)
    {
        /* print offset */
        if(i % HEXDUMP_COLS == 0)
        {
            printf("0x%06x: ", i);
        }

        /* print hex data */
        if(i < leno)
        {
            printf("%02x ", 0xFF & ((char*)memo)[i]);
        }
        else /* end of block, just aligning for ASCII dump */
        {
            printf("   ");
        }

        /* print ASCII dump */
        if(i % HEXDUMP_COLS == (HEXDUMP_COLS - 1))
        {
            for(j = i - (HEXDUMP_COLS - 1); j <= i; j++)
            {
                if(j >= leno) /* end of block, not really printing */
                {
                    putchar(' ');
                }
                else if(isprint(((char*)memo)[j])) /* printable char */
                {
                    putchar(0xFF & ((char*)memo)[j]);
                }
                else /* other char */
                {
                    putchar('.');
                }
            }
            putchar('\n');
        }
    }
}
