
undefined4 FUN_0214e3f8(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      if ((bVar1 < 0x20) || (0x7f < bVar1)) {
        return 0xffffffff;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}

