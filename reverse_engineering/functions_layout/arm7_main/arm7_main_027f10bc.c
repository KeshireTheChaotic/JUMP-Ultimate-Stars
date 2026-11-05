
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f10bc(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808084"] */
  iVar3 = _DAT_0380fff4;
  puVar10 = *(undefined2 **)(_DAT_0380fff4 + 0x4ac);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  uVar4 = FUN_027e9bd4();
  puVar10[4] = uVar4;
  puVar10[6] = 0x80;
  puVar10[7] = 0;
  FUN_027ea048(puVar10 + 8,&DAT_027f7cc4,iVar3 + 0x324,iVar3 + 0x324);
  puVar10[0x11] = 0;
  sVar1 = (short)puVar10 + 0x24;
  *(undefined4 *)(puVar10 + 0x12) = 0;
  *(undefined4 *)(puVar10 + 0x14) = 0;
  puVar10[0x16] = *(undefined2 *)(iVar3 + 0x3b2);
  puVar10[0x17] = *(undefined2 *)(iVar3 + 0x3c0);
  puVar7 = puVar10 + 0x18;
  if ((*(ushort *)(iVar3 + 0x33a) & 1) == 0) {
    *(short *)(iVar3 + 0x3d6) = (short)puVar7 - sVar1;
    FUN_027e93d0(puVar7);
    puVar7 = puVar10 + 0x19;
    FUN_027e93d0((int)puVar10 + 0x31,*(ushort *)(iVar3 + 0x362) & 0xff);
    for (uVar8 = 0; uVar8 < *(ushort *)(iVar3 + 0x362); uVar8 = uVar8 + 1) {
      uVar6 = FUN_027e93b0(iVar3 + 0x364 + uVar8);
      FUN_027e93d0(puVar7,uVar6);
      puVar7 = (undefined2 *)((int)puVar7 + 1);
    }
    FUN_027e93d0((int)puVar7 + (-1 - uVar8),uVar8 & 0xff);
  }
  else {
    *(undefined2 *)(iVar3 + 0x3d6) = 0;
  }
  iVar5 = FUN_027f0604(puVar7);
  iVar5 = (int)puVar7 + iVar5;
  FUN_027e93d0(iVar5,3);
  FUN_027e93d0(iVar5 + 1,1);
  FUN_027e93d0(iVar5 + 2,*(ushort *)(iVar3 + 0x3be) & 0xff);
  *(short *)(iVar3 + 0x3d8) = (short)(iVar5 + 3) - sVar1;
  _DAT_04808084 = *(short *)(iVar3 + 0x3d8) + 2;
  FUN_027e93d0(iVar5 + 3,5);
  FUN_027e93d0(iVar5 + 4,5);
  FUN_027e93d0(iVar5 + 5,0);
  FUN_027e93d0(iVar5 + 6,*(ushort *)(iVar3 + 0x3b8) & 0xff);
  FUN_027e93d0(iVar5 + 7,0);
  FUN_027e93d0(iVar5 + 8,0);
  FUN_027e93d0(iVar5 + 9,0);
  *(short *)(iVar3 + 0x3da) = (short)(iVar5 + 10) - sVar1;
  *(ushort *)(iVar3 + 0x3e6) = *(ushort *)(iVar3 + 0x3da) & 1;
  FUN_027e93d0(iVar5 + 10,0xdd);
  FUN_027e93d0(iVar5 + 0xb,*(short *)(iVar3 + 0x3e4) + 8U & 0xff);
  FUN_027e93d0(iVar5 + 0xc,0);
  FUN_027e93d0(iVar5 + 0xd,9);
  FUN_027e93d0(iVar5 + 0xe,0xbf);
  FUN_027e93d0(iVar5 + 0xf,0);
  if (*(short *)(iVar3 + 0x352) == 1) {
    FUN_027e93d0(iVar5 + 0x10,*(ushort *)(iVar3 + 0x33c) & 0xff);
    FUN_027e93d0(iVar5 + 0x11,(int)(uint)*(ushort *)(iVar3 + 0x33c) >> 8);
  }
  else {
    FUN_027e93d0(iVar5 + 0x10,0xff);
    FUN_027e93d0(iVar5 + 0x11,0xff);
  }
  uVar2 = _DAT_0380fff0;
  FUN_027e93d0(iVar5 + 0x12,_DAT_0380fff0 & 0xff);
  iVar9 = iVar5 + 0x14;
  FUN_027e93d0(iVar5 + 0x13,uVar2 >> 8);
  iVar5 = *(int *)(iVar3 + 0x3e0);
  for (uVar8 = 0; uVar8 < *(ushort *)(iVar3 + 0x3e4); uVar8 = uVar8 + 1) {
    uVar6 = FUN_027e93b0(iVar5);
    FUN_027e93d0(iVar9,uVar6);
    iVar9 = iVar9 + 1;
    iVar5 = iVar5 + 1;
  }
  if (*(short *)(iVar3 + 0x3e6) != 0) {
    iVar5 = *(int *)(iVar3 + 0x3e0) + (uint)*(ushort *)(iVar3 + 0x3e4);
    for (uVar8 = 0; uVar8 < *(ushort *)(iVar3 + 0x3e4); uVar8 = uVar8 + 1) {
      uVar6 = FUN_027e93b0(iVar5 + -1);
      FUN_027e93d0(iVar5,uVar6);
      iVar5 = iVar5 + -1;
    }
  }
  if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 4) != 0) {
    puVar7 = (undefined2 *)(iVar9 + 3U & 0xfffffffc);
    *puVar7 = 0xb6b8;
    puVar7[1] = 0x1d46;
  }
  *(undefined2 *)(iVar3 + 1000) = 0;
  puVar10[5] = ((short)iVar9 + 0x1c) - sVar1;
  return;
}

