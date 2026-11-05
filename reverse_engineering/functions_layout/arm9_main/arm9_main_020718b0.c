
void FUN_020718b0(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 * 0xc + 0x20b0d48;
  iVar2 = (param_1 >> 5) * 4;
  uVar1 = 1 << (param_1 & 0x1f);
  if ((*(uint *)(iVar3 + iVar2) & uVar1) == 0) {
    *(uint *)(iVar3 + iVar2) = uVar1 | *(uint *)(iVar3 + iVar2);
    DAT_020b02ac = 1;
    FUN_02073114((param_1 >> 5) * 0xc + 0xa90);
  }
  return;
}

