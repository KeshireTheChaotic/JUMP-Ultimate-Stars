
void FUN_02158b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  FUN_02158ed0(param_1,*(char *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x173) * -0x1000000 >>
                       0x18 & 0xffff,param_3,param_4,param_4);
  FUN_02158ed0(param_1,(int)*(char *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x172));
  iVar6 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
  if (((*(uint *)(iVar6 + 0x158) & 0x200) != 0) || ((*(uint *)(iVar6 + 0x160) & 0x200) != 0)) {
    FUN_0215fc78(param_1 + 0x130,9);
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
  if ((*(uint *)(iVar6 + 0x40) & 0x800) != 0) {
    iVar3 = *(int *)(iVar6 + 0xe8);
    iVar7 = *(int *)(iVar6 + 0x130);
    iVar6 = -iVar3;
    iVar4 = -iVar7;
    FUN_020783cc(*(undefined4 *)(param_1 + 0x1b4),iVar6);
    FUN_020781e4(*(undefined4 *)(param_1 + 0x1b4),iVar4);
    if (iVar3 != 0 && -1 < iVar6) {
      FUN_02159b8c(param_1,0x220001);
      FUN_0207342c(0x7a,7);
    }
    if (iVar7 == 0 || iVar4 < 0) {
      if (iVar4 < 0) {
        FUN_02159b8c(param_1,0x220005);
        FUN_0207342c(0x7a,9);
      }
    }
    else {
      FUN_02159b8c(param_1,0x220003);
      FUN_0207342c(0x7a,9);
    }
    iVar6 = *(int *)(param_1 + 0x1a4);
    if ((iVar6 != 0) && (*(short *)(iVar6 + 0x68) != -1)) {
      *(short *)(iVar6 + 0x68) = *(short *)(iVar6 + 0x68) + 1;
    }
  }
  if (*(char *)(param_1 + 0x18) != '\b') {
    puVar8 = (undefined4 *)(param_1 + 0x7c);
    iVar6 = 0;
    do {
      if (*(short *)((int)puVar8 + 0xe) != 0) {
        *(short *)((int)puVar8 + 0xe) = *(short *)((int)puVar8 + 0xe) + -1;
        uVar2 = *(ushort *)puVar8[1];
        bVar9 = (uVar2 & 0x20) != 0;
        if (bVar9) {
          uVar2 = *(ushort *)((int)puVar8 + 0xe);
        }
        if ((bVar9 && uVar2 != 0) && ((uVar2 & 1) != 0)) {
          if ((*(uint *)(param_1 + 0x128) & 0x100) == 0) {
            iVar4 = FUN_021613c4(param_1 + 0x1c,0xf,2);
            if (iVar4 != 0) {
              *(short *)((int)puVar8 + 0xe) = *(short *)((int)puVar8 + 0xe) + -1;
            }
          }
          else {
            *(short *)((int)puVar8 + 0xe) = *(short *)((int)puVar8 + 0xe) + -1;
          }
        }
        (*(code *)*puVar8)(param_1,puVar8);
        if (*(short *)((int)puVar8 + 0xe) == 0) {
          *puVar8 = FUN_02159258;
          FUN_0215911c(param_1,iVar6);
        }
        if (*(char *)(DAT_02172960 + 0x16d) == '\0') {
          FUN_021590fc(param_1,0,0xc);
        }
        if (((iVar6 == 1) && (iVar4 = *(int *)(param_1 + 0x1a4), iVar4 != 0)) &&
           (*(short *)(iVar4 + 0x36) != -1)) {
          *(short *)(iVar4 + 0x36) = *(short *)(iVar4 + 0x36) + 1;
        }
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 6;
    } while (iVar6 < 2);
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0xbc) + (uint)*(ushort *)(param_1 + 0xbe) & 0xffff;
  if ((*(uint *)(param_1 + 0x128) & 0x4000) != 0) {
    iVar6 = FUN_020784e4(*(undefined4 *)(param_1 + 0x1b4),0x19);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 0xf8) = 0;
    }
    else {
      if (*(char *)(param_1 + 0xf8) == '\0') {
        *(undefined1 *)(param_1 + 0xf8) = 1;
        FUN_0215f6e4(param_1,0x230017);
        FUN_0207342c(0x7a,0x55);
      }
      uVar5 = FUN_0200d12c(uVar5 * 0x78,100);
      uVar5 = uVar5 & 0xffff;
    }
  }
  *(short *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x184) = (short)uVar5;
  *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x186) = 0x100;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x1b4) + 0x5cd);
  if (*(byte *)(param_1 + 0xdf) < bVar1) {
    FUN_0215f6e4(param_1,0x220008,1);
    FUN_0207342c(0x7a,10);
  }
  *(byte *)(param_1 + 0xdf) = bVar1;
  FUN_021607c0(*(undefined4 *)(param_1 + 0x1a4),bVar1);
  FUN_0215fc78(param_1 + 0x130,0xb);
  *(short *)(param_1 + 0x142) = *(short *)(param_1 + 0x142) + 1;
  if (0x7fff < *(ushort *)(param_1 + 0x142)) {
    *(undefined2 *)(param_1 + 0x142) = 0x7fff;
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    *(char *)(param_1 + 0xe0) = *(char *)(param_1 + 0xe0) + -1;
  }
  return;
}

