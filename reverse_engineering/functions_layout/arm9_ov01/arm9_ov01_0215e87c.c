
void FUN_0215e87c(int param_1)

{
  int iVar1;
  int local_20;
  undefined1 auStack_1c [4];
  int local_18;
  int local_14 [2];
  undefined1 auStack_c [4];
  
  FUN_0207342c(0x78,3);
  FUN_0215e530(auStack_c,*(undefined4 *)(param_1 + 4));
  iVar1 = FUN_0215e868(*(undefined4 *)(param_1 + 0x84),auStack_c);
  if (iVar1 == 0) {
    FUN_0215e530(&local_18,*(undefined4 *)(param_1 + 4));
    local_14[0] = local_18 + -0x18000;
    FUN_0215b3f4(*(undefined4 *)(param_1 + 4),local_14);
    FUN_0215e530(auStack_1c,*(undefined4 *)(param_1 + 4));
    iVar1 = FUN_0215e76c(auStack_1c,*(undefined4 *)(param_1 + 0x84));
    if (iVar1 != 0) {
      local_20 = *(int *)(param_1 + 0x84) << 0xc;
      FUN_0215b3f4(*(undefined4 *)(param_1 + 4),&local_20);
    }
  }
  else {
    local_14[1] = 0;
    FUN_0215b3f4(*(undefined4 *)(param_1 + 4),local_14 + 1);
  }
  FUN_0215e4f4(param_1);
  return;
}

