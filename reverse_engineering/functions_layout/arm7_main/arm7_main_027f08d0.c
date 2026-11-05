
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_027f08d0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar1 = FUN_037f8910(_DAT_0380fff4 + 0x188,param_2 + 0x13a);
  if (iVar1 == 0) {
    FUN_027e904c(2);
    iVar2 = 0;
  }
  else {
    *(undefined2 *)(iVar1 + 0xc) = 0xffff;
    iVar2 = iVar1 + 0x10;
    FUN_027f07a4(iVar2,param_1);
    sVar3 = 0;
    if (param_2 != 0) {
      FUN_027e93d0(iVar1 + 0x42,0x10);
      FUN_027e93d0(iVar1 + 0x43,param_2 & 0xff);
      sVar3 = (short)param_2 + 2;
    }
    *(short *)(iVar1 + 0x16) = sVar3 + 6;
    *(short *)(iVar1 + 0x22) = *(short *)(iVar1 + 0x16) + 0x1c;
    *(undefined2 *)(iVar1 + 0x24) = 0xb0;
  }
  return iVar2;
}

