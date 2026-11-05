
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_037fb1f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_037f8910(_DAT_0380fff4 + 0x188,param_2 + 0x22);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + 0x10;
    FUN_027e94a4(iVar1 + 0x18,param_1,param_2 + 0xc);
    *(short *)(iVar1 + 0x16) = (short)param_2 + -0x18;
    *(ushort *)(iVar1 + 0x1e) = *(ushort *)(iVar1 + 0x1e) & 0xff | *(short *)(iVar1 + 0x22) << 8;
  }
  return iVar2;
}

