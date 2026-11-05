
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ebcec(void)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = _DAT_0380fff4;
  iVar4 = *(int *)(_DAT_0380fff4 + 0x31c);
  puVar3 = (undefined2 *)(_DAT_0380fff4 + 0x52c);
  uVar1 = *(ushort *)(_DAT_0380fff4 + 0x322);
  for (uVar5 = 1; uVar5 < uVar1; uVar5 = uVar5 + 1) {
    MIi_CpuClear16(0,uVar5 * 0x1c + iVar4,0x1a);
  }
  *puVar3 = 1;
  *(undefined2 *)(iVar2 + 0x52e) = 0;
  *(undefined2 *)(iVar2 + 0x530) = 1;
  *(undefined2 *)(iVar2 + 0x532) = 0xfffe;
  *(undefined2 *)(iVar2 + 0x538) = 0;
  *(undefined2 *)(iVar2 + 0x534) = 0;
  *(undefined2 *)(iVar2 + 0x53a) = 1;
  return;
}

