
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_027f06bc(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = _DAT_0380fff4;
  uVar1 = *(ushort *)(_DAT_0380fff4 + 0x362);
  FUN_027e93d0(param_1,0);
  FUN_027e93d0(param_1 + 1,uVar1 & 0xff);
  iVar5 = 2;
  for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    uVar3 = FUN_027e93b0(iVar2 + 0x364 + uVar4);
    FUN_027e93d0(param_1 + iVar5,uVar3);
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}

