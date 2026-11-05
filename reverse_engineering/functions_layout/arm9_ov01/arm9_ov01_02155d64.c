
void FUN_02155d64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,0,param_3,param_4,param_4);
  iVar2 = 0;
  do {
    iVar1 = *(int *)(iVar3 + iVar2 * 4 + 0x34);
    if (iVar1 != 0) {
      func_0x021b65d8(*(undefined4 *)(iVar1 + 4));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}

