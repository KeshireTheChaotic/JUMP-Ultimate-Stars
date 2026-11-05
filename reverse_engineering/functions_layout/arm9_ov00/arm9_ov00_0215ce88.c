
void FUN_0215ce88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x50),0x564d5049,0,param_4,param_4);
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x68))();
  if (iVar1 == 0) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215d20c);
  iVar1 = 0;
  do {
    piVar2 = *(int **)(*(int *)(iVar3 + iVar1 * 4 + 0x5c) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    piVar2 = *(int **)(*(int *)(iVar3 + iVar1 * 4 + 0x114) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  FUN_0214f5a8(iVar3 + 0x6c);
  FUN_0214f5a8(iVar3 + 0x124);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x24) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x34) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x2c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x3c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x44) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  piVar2 = *(int **)(*(int *)(iVar3 + 0xa0) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x158) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(iVar3 + 0xfc) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  (*DAT_020a0e18)();
  FUN_02043264(0);
  FUN_02073fa4(0xd,2,8);
  return;
}

