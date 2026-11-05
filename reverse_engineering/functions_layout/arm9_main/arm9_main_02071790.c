
void FUN_02071790(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (param_1 >> 5) * 4;
  uVar1 = 1 << (param_1 & 0x1f);
  if ((*(uint *)(iVar2 + 0x20b0d2c) & uVar1) == 0) {
    *(uint *)(iVar2 + 0x20b0d2c) = uVar1 | *(uint *)(iVar2 + 0x20b0d2c);
    DAT_020b02ac = 1;
    FUN_02073114(iVar2 + 0xa74,4);
  }
  return;
}

