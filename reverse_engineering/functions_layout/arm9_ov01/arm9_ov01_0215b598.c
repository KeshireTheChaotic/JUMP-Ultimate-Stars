
void FUN_0215b598(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_38;
  int local_34 [8];
  
  iVar4 = *(int *)(param_1 + 0x9c);
  iVar3 = *(int *)(param_1 + 0xa0);
  local_34[7] = param_4;
  iVar1 = FUN_0215716c();
  if (iVar1 == 0x32) {
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x54) + 4),0x881003,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x54) + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar4 + 4) + 0x148))(*(int **)(iVar4 + 4),8);
    local_34[6] = 0xfc000;
    FUN_0214e6c0(iVar4,local_34 + 6);
    if (((*(int **)(iVar3 + 4))[0x24] & 8U) == 8) {
      (**(code **)(**(int **)(iVar3 + 4) + 0x14c))();
      local_34[5] = 0x20000;
      FUN_0214e6c0(iVar3,local_34 + 5);
    }
  }
  else {
    uVar2 = FUN_0215716c(param_1);
    if (uVar2 < 2) {
      FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x54) + 4),0x881004,0);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x54) + 4) + 0x68) + 0x6c))();
      if (((*(int **)(iVar4 + 4))[0x24] & 8U) == 8) {
        (**(code **)(**(int **)(iVar4 + 4) + 0x14c))();
        local_34[4] = 0x20000;
        FUN_0214e6c0(iVar4,local_34 + 4);
      }
      (**(code **)(**(int **)(iVar3 + 4) + 0x148))(*(int **)(iVar3 + 4),8);
      local_34[3] = 0xfc000;
      FUN_0214e6c0(iVar3,local_34 + 3);
    }
    else {
      FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x54) + 4),0x881002,0);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x54) + 4) + 0x68) + 0x6c))();
      if (((*(int **)(iVar4 + 4))[0x24] & 8U) == 8) {
        (**(code **)(**(int **)(iVar4 + 4) + 0x14c))();
        local_34[2] = 0x20000;
        FUN_0214e6c0(iVar4,local_34 + 2);
      }
      if (((*(int **)(iVar3 + 4))[0x24] & 8U) == 8) {
        (**(code **)(**(int **)(iVar3 + 4) + 0x14c))();
        local_34[1] = 0x20000;
        FUN_0214e6c0(iVar3,local_34 + 1);
      }
    }
  }
  iVar1 = 6;
  iVar3 = 0;
  do {
    if ((*(uint *)(*(int *)(*(int *)(param_1 + iVar3 * 4 + 0x94) + 4) + 0x90) & 8) != 8) {
      local_34[0] = iVar1 << 0xc;
      FUN_0215b3f4(*(undefined4 *)(param_1 + iVar3 * 4 + 0x94),local_34);
      iVar1 = iVar1 + 0x13;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  func_0x021b58e4(*(undefined4 *)(*(int *)(param_1 + 0x68) + 4),iVar1 + 7);
  local_38 = (iVar1 + 7) / 2 << 0xc;
  FUN_0215b3f4(*(undefined4 *)(param_1 + 0x54),&local_38);
  return;
}

