
int FUN_02181290(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  do {
    iVar3 = iVar3 + -1;
    iVar1 = FUN_02001a88(*(undefined4 *)(param_1 + 0x4b0),param_2,param_3,0);
    if ((0 < iVar1) || (iVar3 < 0)) break;
    FUN_02180fe8(param_1);
    iVar2 = FUN_021810b4(param_1,0,0,2,0);
    if (iVar2 != 0) {
      FUN_0218154c(param_1);
      return iVar2;
    }
  } while (-1 < iVar3);
  if (iVar1 < 1) {
    return 3;
  }
  return 0;
}

