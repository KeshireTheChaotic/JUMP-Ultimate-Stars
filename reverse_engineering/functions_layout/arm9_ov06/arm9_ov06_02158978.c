
void FUN_02158978(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 0x18 + param_1;
    FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 0x84) + 4),FUN_02159a5c);
    piVar1 = *(int **)(*(int *)(iVar3 + 0x84) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_020282f4(*(undefined4 *)(*(int *)(iVar3 + 0x84) + 4));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4),FUN_02159a5c);
  piVar1 = *(int **)(*(int *)(param_1 + 0xac) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4));
  return;
}

