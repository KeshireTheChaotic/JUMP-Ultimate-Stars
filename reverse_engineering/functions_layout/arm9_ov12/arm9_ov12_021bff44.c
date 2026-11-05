
undefined4 FUN_021bff44(undefined2 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(DAT_021d525c + 0x1320) = 1;
  uVar1 = OS_DisableInterrupts();
  *(undefined2 *)(DAT_021d5258 + 0x32) = param_1;
  DAT_021d5254 = DAT_021d525c + 0x7d1fU & 0xffffffe0;
  uVar4 = *(undefined4 *)(DAT_021d525c + 0x14e4);
  MIi_CpuClear16(0,DAT_021d525c + 0x1340,0x69c0);
  FUN_021beb40(uVar4);
  *(uint *)(DAT_021d525c + 0x1318) = *(ushort *)(DAT_021d5258 + 0x500) - 6;
  FUN_021c1644(*(undefined2 *)(DAT_021d5258 + 0x502));
  FUN_021c162c(DAT_021d525c + 0x1538);
  iVar3 = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(DAT_021d525c + iVar2 + 0x14e8) = 0;
    *(undefined1 *)(DAT_021d525c + iVar3 + 0x1526) = 0xff;
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xf);
  *(undefined1 *)(DAT_021d525c + 0x1524) = 0;
  MIi_CpuClear16(0,DAT_021d525c + 0x1788,0x5d40);
  FUN_020517fc(DAT_021d525c + 0x1754,0,0x1e);
  *(undefined2 *)(DAT_021d5258 + 0x524) = 1;
  *(undefined4 *)(DAT_021d5258 + 0x51c) = 0x21be669;
  *(undefined4 *)(DAT_021d5258 + 0x508) = 0x21c0a4d;
  *(undefined2 *)(DAT_021d5258 + 0x34) = *(undefined2 *)(DAT_021d5258 + 0x500);
  *(ushort *)(DAT_021d5258 + 0x518) = *(short *)(DAT_021d5258 + 0x34) + 0x23U & 0xffe0;
  *(undefined2 *)(DAT_021d5258 + 0x36) = *(undefined2 *)(DAT_021d5258 + 0x502);
  *(ushort *)(DAT_021d5258 + 0x51a) =
       ((*(short *)(DAT_021d5258 + 0x36) + 0xe) * 0xf + 0x29U & 0xffe0) << 1;
  FUN_021bf97c();
  uVar4 = FUN_021c00e0();
  OS_RestoreInterrupts(uVar1);
  uVar1 = FUN_0205587c(0xf,1);
  *(undefined4 *)(DAT_021d525c + 0x74c8) = uVar1;
  return uVar4;
}

