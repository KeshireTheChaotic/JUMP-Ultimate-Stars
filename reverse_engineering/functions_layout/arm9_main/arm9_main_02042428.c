
uint FUN_02042428(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + (DAT_020a100c ^ 1) * 4 + 0xc);
  uVar1 = *(uint *)(param_1 + (DAT_020a100c ^ 1) * 4 + 0xc);
  if (uVar1 < uVar2) {
    return 0xffffffff;
  }
  return (uint)(uVar1 != uVar2);
}

