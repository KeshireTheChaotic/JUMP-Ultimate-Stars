
bool FUN_027f59f8(void)

{
  ushort local_8 [4];
  
  jus_SpiFlash_ReadStatus(local_8);
  return (local_8[0] & 1) == 0;
}

