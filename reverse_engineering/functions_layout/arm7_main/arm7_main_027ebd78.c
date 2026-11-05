
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ebd78(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(_DAT_0380fff4 + 0x31c);
  uVar1 = *(ushort *)(_DAT_0380fff4 + 0x322);
  MIi_CpuClear16(0,iVar3,(uint)uVar1 * 0x1c);
  MIi_CpuClear16(0,_DAT_0380fff4 + 0x52c,0x10);
  *(undefined2 *)(iVar3 + 0x1a) = 0xffff;
  for (uVar2 = 1; uVar2 < uVar1; uVar2 = uVar2 + 1) {
    *(undefined2 *)(uVar2 * 0x1c + iVar3 + 0x1a) = 0xffff;
  }
  FUN_027ebc18(0,&DAT_027f7cc4);
  FUN_027ec560(0,0x40);
  return;
}

