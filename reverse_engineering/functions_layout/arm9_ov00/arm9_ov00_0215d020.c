
void FUN_0215d020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0xac),0x564d5049,0,param_4,param_4);
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x68))();
  if (iVar1 == 0) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215d2e4);
  iVar1 = 0;
  do {
    piVar2 = *(int **)(*(int *)(iVar3 + iVar1 * 4 + 0xb8) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    piVar2 = *(int **)(*(int *)(iVar3 + iVar1 * 4 + 0x170) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  FUN_0214f5a8(iVar3 + 200);
  FUN_0214f5a8(iVar3 + 0x180);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x24) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x34) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x2c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x3c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x44) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(iVar3 + 0xa0) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x158) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  piVar2 = *(int **)(*(int *)(iVar3 + 0xfc) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  (*DAT_020a0e18)();
  FUN_02043264(1);
  *(undefined2 *)(iVar3 + 0x1b6) = 0;
  return;
}

