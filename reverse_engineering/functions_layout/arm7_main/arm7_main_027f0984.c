
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_027f0984(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = _DAT_0380fff4;
  iVar2 = FUN_037f8910(_DAT_0380fff4 + 0x188,*(ushort *)(_DAT_0380fff4 + 0x3e4) + 0x78);
  if (iVar2 == 0) {
    FUN_027e904c(2);
    iVar6 = 0;
  }
  else {
    *(undefined2 *)(iVar2 + 0xc) = 0xffff;
    iVar6 = iVar2 + 0x10;
    FUN_027f07a4(iVar6,param_1);
    *(undefined2 *)(iVar2 + 0x44) = *(undefined2 *)(iVar3 + 0x3b2);
    *(undefined2 *)(iVar2 + 0x46) = *(undefined2 *)(iVar3 + 0x3c0);
    iVar3 = FUN_027f06bc(iVar2 + 0x48);
    iVar4 = FUN_027f0604(iVar2 + 0x48 + iVar3);
    iVar5 = FUN_027f05bc(iVar2 + 0x48 + iVar3 + iVar4);
    iVar5 = iVar3 + iVar4 + iVar5;
    sVar1 = FUN_027f0498(iVar2 + 0x48 + iVar5);
    *(short *)(iVar2 + 0x16) = (short)iVar5 + sVar1 + 0xc;
    *(short *)(iVar2 + 0x22) = *(short *)(iVar2 + 0x16) + 0x1c;
    *(undefined2 *)(iVar2 + 0x24) = 0x50;
  }
  return iVar6;
}

