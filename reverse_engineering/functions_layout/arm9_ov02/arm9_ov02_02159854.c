
bool FUN_02159854(int param_1,int param_2,short param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_3 * 0x4dc;
  iVar3 = param_2 + 0x1f0 + iVar1;
  uVar2 = *(byte *)(param_1 + 4) - 4 & 0xff;
  FUN_02023894(*(undefined4 *)(*(int *)(iVar3 + uVar2 * 4) + 4),
               (uint)*(byte *)(param_1 + 5) + *(int *)(param_2 + iVar1 + uVar2 * 4 + 0x4bc),0);
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + uVar2 * 4) + 4) + 0x68) + 0x6c))();
  bVar4 = (*(byte *)(param_1 + 6) & 1) != 0;
  if (bVar4) {
    *(code **)(param_2 + iVar1 + 0x1dc) = FUN_021598e0;
  }
  return bVar4;
}

