
void FUN_021533b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 0;
  do {
    uVar3 = FUN_0215e4e8(param_2,param_3,(&DAT_0216d560)[iVar7 * 0x14],0,0,0x1f);
    *(undefined4 *)(param_1 + iVar7 * 4 + 0x188) = uVar3;
    FUN_021500cc(uVar3,param_4);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 6);
  uVar8 = 0;
  do {
    if ((*(uint *)(DAT_0214bd80 + ((int)uVar8 >> 5) * 4 + 0x18f8) & 1 << (uVar8 & 0x1f)) != 0 &&
        uVar8 != 0) {
      cVar1 = *(char *)(param_1 + 0x49e);
      iVar7 = FUN_0200d12c((int)cVar1,0xb);
      FUN_0200d12c((int)cVar1,0xb);
      *(char *)(extraout_r1 + iVar7 * 0xb + param_1 + 0x472) = (char)uVar8;
      iVar4 = FUN_0203b3f4();
      uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0xa01000,uVar8 - 1,0,0,0x1e);
      *(undefined4 *)(param_1 + *(char *)(param_1 + 0x49e) * 4 + 0x1a4) = uVar3;
      FUN_021500cc(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x49e) * 4 + 0x1a4),
                   *(undefined4 *)(iVar7 * 0x2c + param_1 + extraout_r1 * 4 + 0xd0));
      *(char *)(param_1 + 0x49e) = *(char *)(param_1 + 0x49e) + '\x01';
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x2b);
  iVar7 = FUN_0200d12c((int)*(char *)(param_1 + 0x49e),0xb);
  FUN_0214d4bc(*(undefined4 *)(param_1 + 0x188),iVar7 + 2);
  uVar3 = FUN_0215e7bc(param_2,&DAT_0216fa04,8,0x18,0x1f,0,0,0xd8,0);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  FUN_021500cc(uVar3,*(undefined4 *)(param_1 + 0x188));
  piVar5 = *(int **)(*(int *)(param_1 + 0x60) + 4);
  (**(code **)(*piVar5 + 0xd8))(piVar5,0);
  iVar7 = 0;
  do {
    iVar4 = FUN_0203b3f4();
    uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,iVar7 + 0x15,0,0,0x1e);
    *(undefined4 *)(param_1 + iVar7 * 4 + 0x250) = uVar3;
    iVar4 = FUN_0200d12c(iVar7,5);
    FUN_0200d12c(iVar7,5);
    FUN_021500cc(*(undefined4 *)(param_1 + iVar7 * 4 + 0x250),
                 *(undefined4 *)(iVar4 * 0x2c + param_1 + extraout_r1_00 * 4 + 0xd0));
    iVar7 = iVar7 + 1;
  } while (iVar7 < 10);
  uVar8 = 0;
  uVar3 = extraout_r1_01;
  do {
    if (((uint)*(byte *)(DAT_0214bd80 + 0x1910) & 1 << (uVar8 & 0xff)) != 0) {
      iVar6 = (int)*(char *)(param_1 + 0x4a7);
      iVar4 = iVar6 >> 0x1f;
      iVar7 = (int)(iVar6 + ((uint)(iVar6 >> 1) >> 0x1e)) >> 2;
      iVar4 = ((uint)(iVar6 * 0x40000000 + iVar4) >> 0x1e | iVar4 << 2) - iVar4;
      *(char *)(iVar4 + param_1 + iVar7 * 4 + 0x49f) = (char)uVar8;
      iVar6 = FUN_0203b3f4();
      uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar6 + 0x88),0x800000,uVar8 + 0x1f,0,0,0x1e);
      *(undefined4 *)(param_1 + *(char *)(param_1 + 0x4a7) * 4 + 0x278) = uVar3;
      FUN_021500cc(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x4a7) * 4 + 0x278),
                   *(undefined4 *)(iVar7 * 0x2c + param_1 + iVar4 * 4 + 0xd0));
      *(char *)(param_1 + 0x4a7) = *(char *)(param_1 + 0x4a7) + '\x01';
      uVar3 = extraout_r1_02;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 8);
  if (*(char *)(param_1 + 0x4a7) < '\x05') {
    uVar3 = 7;
  }
  if ('\x04' < *(char *)(param_1 + 0x4a7)) {
    uVar3 = 8;
  }
  FUN_0214d4bc(*(undefined4 *)(param_1 + 400),uVar3);
  iVar7 = param_1 + 0x4a8;
  iVar4 = 0;
  do {
    bVar2 = false;
    uVar8 = 0;
    do {
      if ((((uint)*(ushort *)(DAT_0214bd80 + iVar4 * 2 + 0x1900) & 1 << (uVar8 & 0xff)) != 0) &&
         (*(char *)(param_1 + 0x540) < '@')) {
        if (!bVar2) {
          iVar6 = FUN_0203b3f4();
          uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar6 + 0x88),0x800000,iVar4 + 0x1f,0,0,0x1e);
          *(undefined4 *)(param_1 + *(char *)(param_1 + 0x541) * 4 + 0x398) = uVar3;
          iVar6 = param_1 + *(char *)(param_1 + 0x541) * 4;
          FUN_021500cc(*(undefined4 *)(iVar6 + 0x398),*(undefined4 *)(iVar6 + 0xd0));
          *(undefined1 *)(iVar7 + 0x12) = *(undefined1 *)(param_1 + 0x540);
        }
        cVar1 = *(char *)(iVar7 + 0x10);
        iVar6 = FUN_0203b3f4();
        uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar6 + 0x88),0x810000,
                             (int)(char)(&DAT_0216d5d0)[iVar4] + uVar8,0,0,0x1e);
        *(undefined4 *)(param_1 + *(char *)(param_1 + 0x540) * 4 + 0x298) = uVar3;
        iVar6 = FUN_0200d12c((int)cVar1,10);
        FUN_0200d12c((int)cVar1,10);
        FUN_021500cc(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x540) * 4 + 0x298),
                     *(undefined4 *)((iVar6 + 1) * 0x2c + param_1 + extraout_r1_03 * 4 + 0xd0));
        bVar2 = true;
        *(char *)(param_1 + 0x540) = *(char *)(param_1 + 0x540) + '\x01';
        *(char *)(iVar7 + 0x11) = (char)iVar4;
        *(char *)(iVar7 + *(char *)(iVar7 + 0x10)) = (char)uVar8;
        *(char *)(iVar7 + 0x10) = *(char *)(iVar7 + 0x10) + '\x01';
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 0x10);
    if (bVar2) {
      iVar7 = iVar7 + 0x13;
      *(char *)(param_1 + 0x541) = *(char *)(param_1 + 0x541) + '\x01';
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if ('\x02' < *(char *)(param_1 + 0x541)) {
    iVar7 = FUN_0203b3f4();
    uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar7 + 0x88),0x800000,0x35,0xfffffffc,0xfffffff5,0x1d);
    *(undefined4 *)(param_1 + 0x3b8) = uVar3;
    iVar7 = FUN_0203b3f4();
    uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar7 + 0x88),0x800000,0x36,4,0xfffffff5,0x1d);
    *(undefined4 *)(param_1 + 0x3bc) = uVar3;
    FUN_021500cc(*(undefined4 *)(param_1 + 0x3b8),*(undefined4 *)(param_1 + 0x398));
    FUN_021500cc(*(undefined4 *)(param_1 + 0x3bc),
                 *(undefined4 *)(param_1 + (*(char *)(param_1 + 0x541) + -1) * 4 + 0x398));
  }
  iVar7 = 0;
  do {
    iVar4 = FUN_0203b3f4();
    uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,iVar7 + 0x12,0,0,0x1e);
    *(undefined4 *)(param_1 + iVar7 * 4 + 0x3c0) = uVar3;
    iVar4 = FUN_0200d12c(iVar7,3);
    FUN_0200d12c(iVar7,3);
    FUN_021500cc(*(undefined4 *)(param_1 + iVar7 * 4 + 0x3c0),
                 *(undefined4 *)(iVar4 * 0x2c + param_1 + extraout_r1_04 * 4 + 0xd0));
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  iVar7 = 0;
  do {
    iVar4 = FUN_0203b3f4();
    uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,iVar7 + 0xe,0,0,0x1e);
    iVar4 = iVar7 >> 0x1f;
    *(undefined4 *)(param_1 + iVar7 * 4 + 0x3cc) = uVar3;
    FUN_021500cc(uVar3,*(undefined4 *)
                        (((int)(iVar7 + ((uint)(iVar7 >> 1) >> 0x1e)) >> 2) * 0x2c + param_1 +
                         (((uint)(iVar7 * 0x40000000 + iVar4) >> 0x1e | iVar4 << 2) - iVar4) * 4 +
                        0xd0));
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  return;
}

