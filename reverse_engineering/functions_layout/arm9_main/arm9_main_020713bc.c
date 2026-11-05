
void FUN_020713bc(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_1 >> 5) * 4;
  uVar2 = 1 << (param_1 & 0x1f);
  if ((uVar2 & *(uint *)(iVar1 + 0x20b0c20)) != 0) {
    *(uint *)(iVar1 + 0x20b0c20) = ~uVar2 & *(uint *)(iVar1 + 0x20b0c20);
    FUN_02073114(iVar1 + 0x968,4);
  }
  return;
}

