
void FUN_02085c40(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="BattleMapObj.cpp" */
  iVar2 = *(int *)(*(int *)(param_1 + 8) + param_3 * 4);
  iVar1 = *(int *)(iVar2 + 0x30);
  if (iVar2 != 0) {
    FUN_0207a878(*(undefined4 *)(iVar2 + 0x14));
  }
  if (param_4 == 0) {
    FUN_02023894(*(undefined4 *)(*(int *)(iVar2 + 8) + 4),*(int *)(iVar1 + 0x30) + 1,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 8) + 4) + 0x68) + 0x6c))();
    *(undefined1 *)(*(short *)(iVar1 + 0x1a) * 0x18 + *(int *)(param_2 + 0x18) + 0x15) = 0;
    return;
  }
  FUN_02023894(*(undefined4 *)(*(int *)(iVar2 + 8) + 4),*(int *)(iVar1 + 0x30),0);
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 8) + 4) + 0x68) + 0x6c))();
  iVar2 = *(int *)(param_2 + 0x18) + 0x15;
  iVar1 = *(short *)(iVar1 + 0x1a) * 0x18;
  *(byte *)(iVar2 + iVar1) = *(byte *)(iVar2 + iVar1) | 4;
  return;
}

