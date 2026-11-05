
int FUN_0215cf04(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_020507a8(DAT_0216e790,0x1d);
  iVar2 = 0;
  do {
    if (iVar1 == param_1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 4);
  return -1;
}

