
void FUN_020717d4(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (param_1 >> 5) * 4;
  uVar1 = 1 << (param_1 & 0x1f);
  if ((*(uint *)(iVar2 + 0x20b0d34) & uVar1) == 0) {
    *(uint *)(iVar2 + 0x20b0d34) = uVar1 | *(uint *)(iVar2 + 0x20b0d34);
    DAT_020b02ac = 1;
    FUN_02073114(iVar2 + 0xa7c,4);
  }
  return;
}

