
int FUN_0202fe08(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  while( true ) {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
                        (*(int **)(param_1 + 0xc),param_2,param_3);
      return iVar3;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + uVar1 * 4);
    if ((param_3 == *(ushort *)(iVar3 + 0x10)) &&
       (iVar2 = FUN_02004c2c(param_2,*(undefined4 *)(iVar3 + 8)), iVar2 == 0)) break;
    if ((param_3 == *(ushort *)(iVar3 + 0x12)) &&
       (iVar2 = FUN_02004c2c(param_2,*(undefined4 *)(iVar3 + 0xc)), iVar2 == 0)) {
      return iVar3;
    }
  }
  return iVar3;
}

