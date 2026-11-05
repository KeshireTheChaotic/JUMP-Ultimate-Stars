
undefined4 FUN_02179e70(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x204) = param_1;
  iVar1 = FUN_02178448();
  puVar2 = (undefined4 *)FUN_021764b4(param_1,*(byte *)(iVar1 + 0xd) + 1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = FUN_02178448();
    FUN_0217cdfc(param_1,*(byte *)(iVar1 + 0xd) + 1);
    return 0;
  }
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x1a0) = 2;
  FUN_0218a8a8(*puVar2);
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x1a0) = 0;
  return 1;
}

