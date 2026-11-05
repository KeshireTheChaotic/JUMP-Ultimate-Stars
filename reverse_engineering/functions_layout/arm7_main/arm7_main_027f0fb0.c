
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f0fb0(void)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = _DAT_0380fff4;
  iVar4 = *(int *)(_DAT_0380fff4 + 0x4ac) + 0x24 + (uint)*(ushort *)(_DAT_0380fff4 + 0x3da);
  uVar3 = (uint)*(ushort *)(_DAT_0380fff4 + 0x3e4);
  if (uVar3 != 0) {
    if ((*(ushort *)(_DAT_0380fff4 + 0x3e6) & 1) == 0) {
      FUN_027e9474(iVar4 + 10,*(undefined4 *)(_DAT_0380fff4 + 0x3e0),uVar3 + 1);
    }
    else {
      FUN_027e9474(iVar4 + 9,*(undefined4 *)(_DAT_0380fff4 + 0x3e0),uVar3 + 2);
      FUN_027e93d0(iVar4 + 9,(int)(uint)_DAT_0380fff0 >> 8);
    }
  }
  *(short *)(*(int *)(_DAT_0380fff4 + 0x4ac) + 10) =
       *(short *)(iVar1 + 0x3da) + 0x26 + *(short *)(iVar1 + 0x3e4);
  FUN_027e93d0(iVar4 + 1,*(short *)(iVar1 + 0x3e4) + 8U & 0xff);
  if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 4) != 0) {
    puVar2 = (undefined2 *)(iVar4 + 0xd + (uint)*(ushort *)(iVar1 + 0x3e4) & 0xfffffffc);
    *puVar2 = 0xb6b8;
    puVar2[1] = 0x1d46;
  }
  *(undefined2 *)(iVar1 + 1000) = 0;
  return;
}

