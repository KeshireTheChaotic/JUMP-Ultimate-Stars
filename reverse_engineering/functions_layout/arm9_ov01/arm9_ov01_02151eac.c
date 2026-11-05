
void FUN_02151eac(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(int **)(param_1 + 4))[4];
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if ((1 < uVar1) && ((*(uint *)(iVar4 + 0x150) & 8) != 0)) {
    iVar2 = FUN_021519b4(param_1,1);
    iVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x134) + 4) + 0x194))();
    iVar3 = FUN_02152748(*(undefined4 *)(iVar4 + 0x140),
                         *(undefined1 *)(*(int *)(iVar4 + 0x14c) + iVar3));
    FUN_02023894(*(undefined4 *)(iVar2 + 4),iVar3 + 0xa01000,0);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    *(uint *)(iVar4 + 0x150) = *(uint *)(iVar4 + 0x150) & 0xfffffff7;
  }
  return;
}

