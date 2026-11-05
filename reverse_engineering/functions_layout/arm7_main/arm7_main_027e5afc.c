
void FUN_027e5afc(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_288 [512];
  undefined1 auStack_88 [128];
  
  iVar2 = DAT_027f97f0;
  *(undefined4 *)(DAT_027f97f0 + 0xe8) = *(undefined4 *)(param_1 + 4);
  *(short *)(iVar2 + 0xec) = (short)*(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar2 + 0xf0) = *(undefined4 *)(param_1 + 0xc);
  *(short *)(iVar2 + 0xf4) = (short)*(undefined4 *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x14);
  *(ushort *)(iVar2 + 0xf6) = (ushort)((uVar1 & 1) != 0);
  *(ushort *)(iVar2 + 0xfa) = (ushort)((uVar1 & 2) != 0);
  *(ushort *)(iVar2 + 0xfc) = (ushort)((uVar1 & 4) != 0);
  *(ushort *)(iVar2 + 0xfe) = (ushort)((uVar1 & 8) != 0);
  FUN_027e04c4(auStack_88,iVar2 + 0xe8);
  iVar2 = FUN_027e2260(auStack_288,*(short *)(iVar2 + 0xec) + 0x10,auStack_88);
  puVar3 = (undefined2 *)FUN_03808074();
  *puVar3 = 0x18;
  puVar3[1] = (ushort)(*(short *)(iVar2 + 4) != 0);
  if (*(short *)(iVar2 + 4) != 0) {
    puVar3[2] = 0x245;
    puVar3[3] = *(undefined2 *)(iVar2 + 4);
  }
  FUN_038080d0();
  return;
}

