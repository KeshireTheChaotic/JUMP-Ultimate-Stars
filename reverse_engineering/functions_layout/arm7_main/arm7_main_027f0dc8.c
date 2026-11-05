
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_027f0dc8(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = _DAT_0380fff4;
  iVar2 = FUN_037f8910(_DAT_0380fff4 + 0x188,100);
  if (iVar2 == 0) {
    FUN_027e904c(2);
    iVar4 = 0;
  }
  else {
    *(undefined2 *)(iVar2 + 0xc) = 0xffff;
    iVar4 = iVar2 + 0x10;
    FUN_027f07a4(iVar4,param_1);
    *(undefined2 *)(iVar2 + 0x3c) = *(undefined2 *)(iVar3 + 0x3c0);
    *(undefined2 *)(iVar2 + 0x3e) = *(undefined2 *)(iVar3 + 0x3b4);
    FUN_027ea0c8(iVar2 + 0x40,iVar3 + 0x3c6);
    iVar3 = FUN_027f06bc(iVar2 + 0x46);
    sVar1 = FUN_027f0604(iVar2 + 0x46 + iVar3);
    *(short *)(iVar2 + 0x16) = (short)iVar3 + sVar1 + 10;
    *(short *)(iVar2 + 0x22) = *(short *)(iVar2 + 0x16) + 0x1c;
    *(undefined2 *)(iVar2 + 0x24) = 0x20;
  }
  return iVar4;
}

