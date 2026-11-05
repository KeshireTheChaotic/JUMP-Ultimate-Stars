
undefined4 FUN_02173920(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  while( true ) {
    if (*(int *)(iVar2 + 0x1a34) == 0) {
      return 0;
    }
    iVar1 = FUN_02004c2c(param_2);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 8;
    iVar3 = iVar3 + 1;
    if (0x1f < iVar3) {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + iVar3 * 8 + 0x1a38);
}

