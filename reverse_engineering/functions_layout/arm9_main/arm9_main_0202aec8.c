
void FUN_0202aec8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x25);
  if ((uVar1 & 0x1f) >> 4 != 0) {
    uStack_10 = param_4;
    if ((uVar1 & 3) >> 1 == 0) {
      if ((uVar1 & 7) >> 2 == 0) {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 0x4c) + *(int *)(param_2 + 100);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0x68);
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
        local_24 = *(int *)(param_2 + 0x54);
        FUN_02018ac8(&local_24,param_1 + 0x4c);
        *(int *)(param_1 + 100) = local_24 + *(int *)(param_2 + 100);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
        local_28 = *(int *)(param_2 + 0x60);
        FUN_02018ac8(&local_28,param_1 + 0x50);
        *(int *)(param_1 + 0x68) = local_28 + *(int *)(param_2 + 0x68);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
      local_18 = *(int *)(param_2 + 0x5c);
      FUN_02018ac8(&local_18,param_1 + 0x50);
      local_14 = *(int *)(param_2 + 0x54);
      FUN_02018ac8(&local_14,param_1 + 0x4c);
      *(int *)(param_1 + 100) = local_14 + local_18 + *(int *)(param_2 + 100);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
      local_20 = *(int *)(param_2 + 0x60);
      FUN_02018ac8(&local_20,param_1 + 0x50);
      local_1c = *(int *)(param_2 + 0x58);
      FUN_02018ac8(&local_1c,param_1 + 0x4c);
      *(int *)(param_1 + 0x68) = local_1c + local_20 + *(int *)(param_2 + 0x68);
    }
  }
  return;
}

