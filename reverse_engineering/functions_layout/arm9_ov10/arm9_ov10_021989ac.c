
uint FUN_021989ac(int param_1)

{
  int extraout_r1;
  int extraout_r1_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = *(uint *)(DAT_021aa094 + 0x2264);
  iVar1 = param_1;
  do {
    FUN_0200d12c(iVar1,0xd);
    if ((uVar3 & 1 << (extraout_r1 + 1U & 0xff)) != 0) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xd);
  FUN_0200d12c(param_1 + iVar2,0xd);
  return extraout_r1_00 + 1U & 0xffff;
}

