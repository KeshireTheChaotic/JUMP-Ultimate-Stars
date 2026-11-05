
void FUN_021bf560(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  
  if (DAT_021d51c6 != *(char *)(DAT_021d51bc + 0x4b4)) {
    FUN_021bf720();
  }
  DAT_021d51e5 = *(undefined1 *)(DAT_021d51bc + 0x4b3);
  DAT_021d51e6 = DAT_021d51c6;
  DAT_021d51e0 = *(undefined4 *)(DAT_021d51bc + 0x4b8);
  DAT_021d51e4 = *(char *)(DAT_021d51bc + 0x4b5) << 2 | 2;
  cVar4 = DAT_021d51c9 + '\x01';
  DAT_021d51e7 = DAT_021d51c9;
  DAT_021d51ea = *(undefined1 *)(DAT_021d51bc + 0x358);
  DAT_021d51ec = *(undefined2 *)(DAT_021d51bc + 0x35a);
  DAT_021d51ee = *(undefined2 *)(DAT_021d51bc + 0x35c);
  DAT_021d51c9 = cVar4;
  if ((DAT_021d51b0 == 0) && (DAT_021d51b4 != (code *)0x0)) {
    (*DAT_021d51b4)(*(undefined4 *)(DAT_021d51bc + 0x4b8));
  }
  iVar7 = 0;
  puVar5 = &DAT_021d51e0;
  iVar6 = DAT_021d51bc;
  do {
    *(undefined1 *)(puVar5 + 0x1a) = *(undefined1 *)(iVar6 + 0x4a8);
    iVar6 = iVar6 + 1;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  MIi_CpuClear16(0,&DAT_021d51f0,0x58);
  uVar10 = 0;
  uVar1 = *(ushort *)(DAT_021d51bc + 0x4b0);
  uVar2 = *(ushort *)(DAT_021d51bc + 0x35a);
  uVar9 = 0;
  puVar8 = &DAT_021d51f0;
  iVar6 = 0;
  do {
    uVar3 = 2 << (uVar9 & 0xff);
    if (((uVar1 ^ uVar2) & uVar3) != 0) {
      MIi_CpuCopy16(DAT_021d51bc + 0x35e + iVar6,puVar8,0x16);
      *(ushort *)(DAT_021d51bc + 0x4b0) = *(ushort *)(DAT_021d51bc + 0x4b0) | (ushort)uVar3;
      puVar8 = puVar8 + 0x16;
      uVar10 = uVar10 + 1;
      if (uVar10 == 4) break;
    }
    iVar6 = iVar6 + 0x16;
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0xf);
  if (uVar10 < 4) {
    (&DAT_021d51f0)[uVar10 * 0x16] = (&DAT_021d51f0)[uVar10 * 0x16] & 0xf;
  }
  DAT_021d51e8 = 0;
  DAT_021d51e8 = FUN_021bf508(&DAT_021d51e8,0x68);
  if (*(short *)(DAT_021d51bc + 0x4b0) == *(short *)(DAT_021d51bc + 0x35a)) {
    DAT_021d51c4 = 1;
  }
  FUN_0205ac6c(0,&DAT_021d51e0,0x70,param_1,param_2,param_3 & 0xff | 3,param_1,param_2,param_3 | 3);
  if ((DAT_021d51b0 == 1) && (DAT_021d51b4 != (code *)0x0)) {
    (*DAT_021d51b4)(*(undefined4 *)(DAT_021d51bc + 0x4b8));
  }
  return;
}

