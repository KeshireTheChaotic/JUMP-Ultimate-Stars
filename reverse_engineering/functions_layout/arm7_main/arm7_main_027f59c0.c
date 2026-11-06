
undefined4 FUN_027f59c0(void)

{
  undefined4 uVar1;
  ushort local_8 [4];
  
  jus_SpiFlash_ReadStatus(local_8);
  if ((local_8[0] & 1) == 0) {
    if ((local_8[0] & 2) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

