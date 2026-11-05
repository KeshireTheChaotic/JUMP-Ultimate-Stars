
void FUN_0202b028(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  if ((*(byte *)(param_1 + 0x25) & 0x1f) >> 4 != 0) {
    local_34 = *(undefined4 *)(param_2 + 0x54);
    uStack_10 = param_4;
    if ((*(byte *)(param_1 + 0x25) & 3) >> 1 == 0) {
      FUN_02018ac8(&local_34,param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x54) = local_34;
      local_38 = *(int *)(param_2 + 0x54);
      FUN_02018ac8(&local_38,param_1 + 0x4c);
      *(int *)(param_1 + 100) = local_38 + *(int *)(param_2 + 100);
      local_3c = *(undefined4 *)(param_2 + 0x60);
      FUN_02018ac8(&local_3c,param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x60) = local_3c;
      local_40 = *(int *)(param_2 + 0x60);
      FUN_02018ac8(&local_40,param_1 + 0x50);
      *(int *)(param_1 + 0x68) = local_40 + *(int *)(param_2 + 0x68);
    }
    else {
      local_14 = local_34;
      FUN_02018ac8(&local_14,param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x54) = local_14;
      local_18 = *(undefined4 *)(param_2 + 0x5c);
      FUN_02018ac8(&local_18,param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x5c) = local_18;
      local_20 = *(int *)(param_2 + 0x5c);
      FUN_02018ac8(&local_20,param_1 + 0x50);
      local_1c = *(int *)(param_2 + 0x54);
      FUN_02018ac8(&local_1c,param_1 + 0x4c);
      *(int *)(param_1 + 100) = local_1c + local_20 + *(int *)(param_2 + 100);
      local_24 = *(undefined4 *)(param_2 + 0x58);
      FUN_02018ac8(&local_24,param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x58) = local_24;
      local_28 = *(undefined4 *)(param_2 + 0x60);
      FUN_02018ac8(&local_28,param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x60) = local_28;
      local_30 = *(int *)(param_2 + 0x60);
      FUN_02018ac8(&local_30,param_1 + 0x50);
      local_2c = *(int *)(param_2 + 0x58);
      FUN_02018ac8(&local_2c,param_1 + 0x4c);
      *(int *)(param_1 + 0x68) = local_2c + local_30 + *(int *)(param_2 + 0x68);
    }
  }
  return;
}

