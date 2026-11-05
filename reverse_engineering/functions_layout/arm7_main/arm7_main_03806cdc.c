
void FUN_03806cdc(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((param_1 & 1) != 0) {
      (&DAT_03808138)[iVar1] = param_2;
    }
    param_1 = param_1 >> 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x19);
  return;
}

