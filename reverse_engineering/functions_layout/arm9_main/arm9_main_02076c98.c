
int FUN_02076c98(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if ((int)param_2 < 0) {
    return 0;
  }
  if (param_2 < *(uint *)(DAT_0214bd80 + 0x18ec)) {
    iVar1 = param_2 * 0xc + *(int *)(DAT_0214bd80 + 0x30);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

