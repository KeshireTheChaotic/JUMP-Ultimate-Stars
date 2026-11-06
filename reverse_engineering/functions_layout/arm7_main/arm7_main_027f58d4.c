
void FUN_027f58d4(void)

{
  uint local_10 [2];
  
  do {
    while( true ) {
      jus_SpiFlash_ReadStatus(local_10);
      if ((local_10[0] & 0x20) == 0) break;
      jus_SpiFlash_SoftwareReset();
    }
  } while ((local_10[0] & 1) != 0);
  return;
}

