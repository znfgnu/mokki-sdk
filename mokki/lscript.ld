/* memory layout for an STM32F103RB */
MEMORY
{
	SRAM (xrw)  : ORIGIN = 0x00000000, LENGTH = 20K
}
 
/* output sections */
SECTIONS
{
	/* program code into FLASH */
  .text :
  {
		/* . = ALIGN(2); */
    *(.text)            /* Program code */
  } >SRAM
  
  .data :
  {
    *(.data)            
  } >SRAM

}   
