
void FUN_027e7ec8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = DAT_027f97f0;
  iVar1 = DAT_027f97ec;
  uVar3 = OS_DisableInterrupts();
  bVar5 = *(int *)(iVar2 + 0xc) == 1;
  if (bVar5) {
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_027e6748();
    FUN_027e0238();
  }
  *(undefined2 *)(iVar2 + 0x182) = 0;
  *(undefined2 *)(iVar2 + 0x86) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined2 *)(iVar2 + 0xce) = 0;
  *(undefined2 *)(iVar2 + 0xc2) = 0;
  *(undefined2 *)(iVar2 + 0x58) = 1;
  *(undefined2 *)(iVar2 + 0x5a) = 1;
  *(undefined2 *)(iVar2 + 0x5c) = 6;
  *(undefined2 *)(iVar2 + 0x98) = 0;
  *(undefined2 *)(iVar2 + 0x92) = 0;
  *(undefined2 *)(iVar2 + 0x94) = 0;
  *(undefined2 *)(iVar2 + 0x9a) = 0;
  *(undefined2 *)(iVar2 + 0x9c) = 0;
  FUN_027e0100();
  *(undefined2 *)(iVar2 + 0x40) = 0x104;
  *(undefined2 *)(iVar2 + 0x42) = 0xf0;
  *(undefined2 *)(iVar2 + 0x44) = 1000;
  *(undefined2 *)(iVar2 + 0x46) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0x20b;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined2 *)(iVar2 + 0xc6) = 0;
  *(undefined2 *)(iVar2 + 0x1ee) = 1;
  OS_RestoreInterrupts(uVar3);
  if (bVar5) {
    FUN_027e6d04(0xffff);
  }
  iVar4 = 0;
  do {
    *(undefined4 *)(iVar1 + iVar4 * 0x10 + 0xd0) = 0x8000;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  MIi_CpuClear16(1,iVar2 + 0x1f8,0x100);
  FUN_027e08a0();
  FUN_037fceb0(iVar2 + 0x71c);
  FUN_027e675c();
  return;
}

