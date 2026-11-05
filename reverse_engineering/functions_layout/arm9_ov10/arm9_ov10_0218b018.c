
undefined4 FUN_0218b018(int param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = *(undefined4 *)(param_1 + 0x58);
  local_18 = (uint)param_2;
  local_1c = param_3;
  local_14 = FUN_02001ed8();
  iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 0x60));
  FUN_020012a4(*(undefined4 *)(param_1 + 0x60),&local_20);
  iVar2 = FUN_0200131c(*(undefined4 *)(param_1 + 0x60));
  if (iVar1 + 1 == iVar2) {
    return 1;
  }
  return 0;
}

