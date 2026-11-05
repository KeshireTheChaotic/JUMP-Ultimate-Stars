
void FUN_02159fe4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(byte *)(iVar1 + 9) < *(byte *)(iVar1 + 8)) {
    *(undefined1 *)(iVar1 + 0xc) = 1;
    FUN_02159f24(iVar1);
    *(undefined1 *)(iVar1 + 0xc) = 0;
    return;
  }
  DAT_020a10a8 = 0;
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

