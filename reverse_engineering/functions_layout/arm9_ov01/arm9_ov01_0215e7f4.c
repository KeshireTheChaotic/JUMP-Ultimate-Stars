
void FUN_0215e7f4(int param_1)

{
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_0207342c(0x78,3);
  FUN_0215e530(&local_c,*(undefined4 *)(param_1 + 4));
  if (local_c == 0) {
    local_10 = *(int *)(param_1 + 0x84) << 0xc;
    FUN_0215b3f4(*(undefined4 *)(param_1 + 4),&local_10);
  }
  else {
    FUN_0215e530(&local_18,*(undefined4 *)(param_1 + 4));
    local_14 = local_18 + 0x18000;
    FUN_0215b3f4(*(undefined4 *)(param_1 + 4),&local_14);
    FUN_0215e530(&local_1c,*(undefined4 *)(param_1 + 4));
    if (0 < local_1c) {
      local_20 = 0;
      FUN_0215b3f4(*(undefined4 *)(param_1 + 4),&local_20);
    }
  }
  FUN_0215e4f4(param_1);
  return;
}

