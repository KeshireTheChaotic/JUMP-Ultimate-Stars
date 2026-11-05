
void FUN_0215d3bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *(ushort *)(iVar3 + 0x1b6) + 1;
  *(short *)(iVar3 + 0x1b6) = (short)iVar2;
  if (*(ushort *)(iVar3 + 0x1b6) < 0x2c) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215d554,iVar2,param_4,param_4);
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(iVar3 + iVar2 * 4 + 0x5c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    piVar1 = *(int **)(*(int *)(iVar3 + iVar2 * 4 + 0x114) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  FUN_02073fa4(0xd,2,8);
  piVar1 = *(int **)(*(int *)(iVar3 + 0x48) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  piVar1 = *(int **)(*(int *)(iVar3 + 0x100) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  return;
}

