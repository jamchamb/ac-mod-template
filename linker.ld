ENTRY(__entry)
SECTIONS
{
        /* Code location. Also the address of __entry(). */
        . = 0x80002000;
        .text . : {
               *(.text.__entry);
               *(.text*);
        }

        /* Standard C functions */
        memcpy = 0x80003490;
        memcmp = 0x8009CFF4;

        sprintf = 0x8005CE48;
        snprintf = 0x8009D454;

        strlen = 0x8009F84C;
        strncpy = 0x8009F750;

        /*  GameCube functions */
        OSReport = 0x8005A750;
        OSGetTime = 0x8007F6F8;

        JUTReportConsole = 0x800771B0;
        JUTReportConsole_f = 0x80077124;
        JUTReport = 0x80070198;

        /* Variables and data structures */
        common_data = 0x81266400;
}
