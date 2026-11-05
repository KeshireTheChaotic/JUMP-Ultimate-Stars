
void FUN_021626d8(undefined4 param_1)

{
  uint uVar1;
  uint local_18;
  undefined1 auStack_14 [8];
  
  FUN_02165b60(*(undefined4 *)(DAT_0216e7fc + 0x10),0,&local_18,auStack_14);
  uVar1 = local_18 - 8;
  local_18 = (uint)DAT_0216adb8;
  if ((int)local_18 < (int)uVar1) {
    local_18 = uVar1;
    FUN_02165bc4(*(undefined4 *)(DAT_0216e7fc + 0x10),0xffffffff,uVar1,DAT_0216adbe);
    return;
  }
  FUN_02165bc4(*(undefined4 *)(DAT_0216e7fc + 0x10),0xffffffff,local_18,DAT_0216adbe);
  FUN_021677b8(param_1,0x2162649);
  return;
}

