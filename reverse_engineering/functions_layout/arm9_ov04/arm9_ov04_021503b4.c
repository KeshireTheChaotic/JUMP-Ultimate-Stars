
void FUN_021503b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_28;
  
  bVar1 = false;
  local_28 = param_4;
  FUN_02150a2c(param_1,*(undefined4 *)(param_1 + 0x28));
  iVar2 = (int)*(char *)(param_1 + 0x18);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar3 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(iVar3 + iVar2 * 8);
    if (!bVar1) {
      iVar3 = (int)*(char *)(*(int *)(param_1 + 0x10) + iVar2);
    }
    if ((bVar1 || iVar3 != 0) || (iVar2 == 0)) {
      FUN_02150360(param_1,iVar5,-(int)*(short *)(param_1 + 0x1e) / 2);
      FUN_02023894(*(undefined4 *)(iVar5 + 4),
                   *(uint *)(param_1 + 0x38) |
                   *(int *)(param_1 + 0x3c) + (int)*(char *)(*(int *)(param_1 + 0x10) + iVar2),0);
      (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
      local_28 = 0x1000;
      FUN_021504cc(iVar5,&local_28);
      bVar1 = true;
    }
    else {
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
    }
    piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 8) + iVar2 * 8 + 4) + 4);
    (**(code **)(*piVar4 + 0xd8))(piVar4,0);
  }
  return;
}

