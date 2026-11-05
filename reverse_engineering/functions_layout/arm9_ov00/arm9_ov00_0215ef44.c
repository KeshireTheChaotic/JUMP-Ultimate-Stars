
void FUN_0215ef44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x10),0x564d5049,0,param_4,param_4);
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x68))();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x1c),0x564d5049,0);
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x68))();
  if (iVar1 == 0) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),ALControllerImp::Create);
  *(undefined2 *)(iVar3 + 0x6c) = 0xb4;
  iVar1 = FUN_0215f4e4(iVar3,iVar3 + 0x24);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar3 + 0x68) = 1;
  }
  iVar1 = FUN_0215f4e4(iVar3,iVar3 + 0x40);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar3 + 0x68) = 1;
  }
  piVar2 = *(int **)(*(int *)(iVar3 + 0x20) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  return;
}

