
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_027f0a54(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_037f8910(_DAT_0380fff4 + 0x188,0x5a);
  if (iVar2 == 0) {
    FUN_027e904c(2);
    iVar4 = 0;
  }
  else {
    *(undefined2 *)(iVar2 + 0xc) = 0xffff;
    iVar4 = iVar2 + 0x10;
    FUN_027f07a4(iVar4,param_1);
    iVar3 = FUN_027f06bc(iVar2 + 0x3c);
    sVar1 = FUN_027f0604(iVar2 + 0x3c + iVar3);
    sVar1 = (short)iVar3 + sVar1;
    *(short *)(iVar2 + 0x16) = sVar1;
    *(short *)(iVar2 + 0x22) = sVar1 + 0x1c;
    *(undefined2 *)(iVar2 + 0x24) = 0x40;
  }
  return iVar4;
}

