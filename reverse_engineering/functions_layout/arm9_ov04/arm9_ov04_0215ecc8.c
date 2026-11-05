
void FUN_0215ecc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_40 [6];
  undefined4 uStack_28;
  
  iVar2 = 0;
  uStack_28 = param_4;
  do {
    local_40[iVar2 + 2] = iVar2 * 0x2f + 5;
    iVar1 = FUN_0214f704();
    if (iVar2 == *(char *)(param_1 + iVar1 + 0x14)) {
      local_40[iVar2 + 2] = local_40[iVar2 + 2] + 0xc;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  for (iVar2 = 0; iVar2 < *(char *)(param_1 + 0x1c); iVar2 = iVar2 + 1) {
    iVar1 = (int)*(char *)(param_1 + iVar2 + 0x18);
    iVar4 = *(int *)(param_1 + iVar1 * 4 + 4);
    iVar3 = (int)*(char *)(param_1 + iVar1 + 0x14);
    FUN_02023894(*(undefined4 *)(iVar4 + 4),iVar1 + 7U | 0x820000,0);
    (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
    local_40[1] = 0xe8000;
    local_40[0] = (local_40[iVar3 + 2] + 6) * 0x1000;
    FUN_0214e1b8(iVar4,local_40 + 1,local_40);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    local_40[iVar3 + 2] = local_40[iVar3 + 2] + 0xc;
  }
  return;
}

