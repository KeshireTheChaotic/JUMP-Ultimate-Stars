
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e8c90(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = _DAT_0380fff4;
  uVar3 = 0;
  *(undefined2 *)(_DAT_0380fff4 + 0x10) = 0;
  *(undefined2 *)(iVar1 + 0x12) = 0;
  do {
    iVar2 = iVar1 + uVar3 * 2;
    *(undefined2 *)(iVar2 + 8) = 0xffff;
    *(undefined2 *)(iVar1 + uVar3 * 2) = *(undefined2 *)(iVar2 + 8);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  uVar3 = 0;
  do {
    iVar2 = iVar1 + uVar3 * 8;
    *(undefined2 *)(iVar2 + 0xbc) = 0xffff;
    *(undefined2 *)(iVar2 + 0xbe) = 0;
    *(undefined4 *)(iVar2 + 0xc0) = (&DAT_027f7c60)[uVar3];
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x18);
  FUN_037f85f8(3,0xc);
  return;
}

