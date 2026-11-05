
void FUN_02159b08(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  if (puVar3[2] == -1) {
    iVar2 = 0;
  }
  else if (puVar3[2] == -2) {
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
  }
  uVar1 = (&DAT_0215e73d)[*(int *)(*(int *)(param_1 + 4) + 0x124) + iVar2 * 3];
  iVar2 = FUN_0214fb7c(*(undefined4 *)(puVar3 + 4));
  *(undefined1 *)(*(int *)(*(int *)(iVar2 + 4) + 0x10) + 0x1f) = uVar1;
  *puVar3 = 0x21;
  puVar3[1] = 0;
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02073ebc(3,1);
  FUN_02028384(*(undefined4 *)(*(int *)(puVar3 + 4) + 4),FUN_02159828);
  return;
}

