
void FUN_027e7cc4(void)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = DAT_027f97f0;
  FUN_037fce24(DAT_027f97f0 + 0x71c);
  MIi_CpuClear16(0,iVar3 + 0x2f8,0x400);
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1 & 0xffff;
    uVar2 = (undefined2)(uVar5 + 1);
    *(undefined2 *)(iVar3 + uVar5 * 0x20 + 0x2f8) = uVar2;
    uVar5 = uVar1;
  } while (uVar1 < 0x1f);
  *(undefined2 *)(iVar3 + uVar1 * 0x20 + 0x2f8) = 0xffff;
  uVar5 = 0;
  *(undefined2 *)(iVar3 + 0x6f8) = 0;
  *(undefined2 *)(iVar3 + 0x6fa) = uVar2;
  do {
    iVar4 = iVar3 + uVar5 * 4;
    *(undefined2 *)(iVar4 + 0x70c) = 0xffff;
    *(undefined2 *)(iVar4 + 0x70e) = 0xffff;
    *(undefined2 *)(iVar4 + 0x6fc) = 0xffff;
    *(undefined2 *)(iVar4 + 0x6fe) = 0xffff;
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 4);
  FUN_037fcdb4(iVar3 + 0x71c);
  return;
}

