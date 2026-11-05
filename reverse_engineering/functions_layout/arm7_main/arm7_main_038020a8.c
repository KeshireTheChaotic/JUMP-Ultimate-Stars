
void FUN_038020a8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 * 0x24;
  (&DAT_03808fe8)[param_1] = (&DAT_03808fe8)[param_1] & 0xfb | (byte)((param_2 & 1) << 2);
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_03801770(&DAT_03808fe8 + param_1,iVar2);
      if (iVar1 != 0) {
        FUN_03801898(iVar1,&DAT_03808fe8 + param_1,0x7f);
        FUN_0380185c(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
  }
  return;
}

