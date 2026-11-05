
bool FUN_03803a84(void)

{
  int iVar1;
  
  FUN_03803b34(0,0x32);
  iVar1 = *DAT_03809c80;
  if (iVar1 == 4) {
    *DAT_03809c80 = 6;
  }
  return iVar1 != 4;
}

