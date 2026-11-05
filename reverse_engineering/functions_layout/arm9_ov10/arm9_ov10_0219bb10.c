
undefined4 FUN_0219bb10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0219a7f4();
  puVar1 = &DAT_0214ccf8;
  iVar2 = DAT_0214ccf8[9];
  if (iVar2 == 0) {
    puVar1 = (undefined4 *)DAT_0214ccf8[0xc];
  }
  if (iVar2 == 0 && puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  if (iVar2 == 0) {
    FUN_021a1e14(DAT_0214ccf8 + 0x22,0);
    iVar2 = FUN_0217e670();
    if (iVar2 != 0) {
      FUN_0217e6b0();
    }
  }
  ALObjectImp::PostSyncMessage();
  (*(code *)*DAT_0214ccf8)(0x12,DAT_0214ccf8[1],DAT_0214ccf8[0xb]);
  *(undefined1 *)((int)DAT_0214ccf8 + 0x5f) = 0;
  FUN_0219a438();
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0219bc98);
  return 1;
}

