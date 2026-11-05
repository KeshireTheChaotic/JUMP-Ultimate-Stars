
void FUN_0215a978(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  
  if (((*(byte *)(param_1 + 0x11d) & 2) != 0) &&
     (bVar1 = *(byte *)(param_1 + 0x11c), *(byte *)(param_1 + 0x11c) = bVar1 + 1, 0x78 < bVar1)) {
    FUN_0215c050();
  }
  if (*(char *)(param_1 + 0x18) == '\x17') {
    return;
  }
  iVar3 = FUN_0215aea0(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar3 != 0) {
    return;
  }
  if (*(short *)(param_1 + 0xce) == 0) {
    bVar7 = false;
  }
  else {
    if (param_2 == 0) {
      *(short *)(param_1 + 0xce) = *(short *)(param_1 + 0xce) + -1;
    }
    bVar1 = *(byte *)(param_1 + 0xd0);
    *(byte *)(param_1 + 0xd0) = bVar1 + 1;
    if ((bVar1 & 1) == 0) {
      FUN_0215f334(*(undefined4 *)(param_1 + 0x1a0),0);
    }
    else {
      FUN_0215f334(*(undefined4 *)(param_1 + 0x1a0),1);
    }
    if (*(short *)(param_1 + 0xce) == 0) {
      FUN_0215b4a8(*(undefined4 *)(param_1 + 0x1a8),0);
      FUN_0215f334(*(undefined4 *)(param_1 + 0x1a0),1);
    }
    else {
      FUN_0215b4a8(*(undefined4 *)(param_1 + 0x1a8),1);
    }
    FUN_0207cec8(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x10000000);
    bVar7 = true;
  }
  if (bVar7) {
    return;
  }
  if (*(char *)(DAT_02172960 + 200) == '\0') {
    return;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
  if ((*(uint *)(iVar3 + 0x40) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x18) == '\b') {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\x18') {
      FUN_0207ce7c(iVar3,0x10000000);
    }
    *(undefined2 *)(param_1 + 0x100) =
         *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x16c);
    if ((*(byte *)(param_1 + 0x11d) & 2) == 0) {
      bVar7 = false;
    }
    else {
      FUN_0206c650(**(undefined4 **)(param_1 + 0x1a0));
      if (*(char *)(param_1 + 0x11b) != -1) {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
        iVar3 = FUN_0206c7fc(*(undefined4 *)
                              (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 0xc)
                                       + 0x14) + *(char *)(param_1 + 0x11b) * 8),
                             *(int *)(iVar3 + 0xc) >> 8,*(int *)(iVar3 + 0x10) >> 8,1);
        uVar4 = FUN_0215b62c(*(undefined4 *)(param_1 + 0x1a8));
        piVar5 = *(int **)(*(int *)(iVar3 + 4) + 100);
        (**(code **)(*piVar5 + 0x5c))(piVar5,uVar4);
      }
      FUN_0215c050(param_1);
      FUN_0215f3c0(*(undefined4 *)(param_1 + 0x1a0),0);
      FUN_0207ce7c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x10000000);
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
      *(undefined2 *)(iVar3 + 0x24) = 0;
      *(undefined2 *)(iVar3 + 0x26) = 0;
      FUN_0215c070(*(undefined4 *)(param_1 + 0x1a8),1);
      FUN_02157494(param_1,0x14,FUN_0215c090,FUN_0215c23c,0x10);
      bVar7 = true;
    }
    if (bVar7) {
      bVar7 = true;
    }
    else {
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x40) & 0x10000) != 0) {
        FUN_0215ef48(param_1);
        FUN_0207342c(0x7a,0x2c);
      }
      FUN_0215b40c(param_1);
      *(ushort *)(param_1 + 0x106) =
           (ushort)*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x150) & 0xff;
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x134);
      iVar6 = FUN_02159a10(param_1);
      if ((iVar6 != 0) || (iVar6 = FUN_021598d0(param_1), iVar6 != 0)) {
        iVar3 = iVar3 >> 1;
      }
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x40) & 0x40) != 0) {
        FUN_02078660(*(undefined4 *)(param_1 + 0x1b4),1,1);
      }
      FUN_020781e4(*(undefined4 *)(param_1 + 0x1b4),
                   -*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x138));
      iVar6 = FUN_020783b8(*(undefined4 *)(param_1 + 0x1b4),iVar3);
      if ((iVar6 == 0) && ((*(byte *)(param_1 + 0x11d) & 1) == 0)) {
        FUN_0215c690(param_1);
      }
      else {
        if (*(char *)(param_1 + 0x18) == '\b') {
          *(char *)(param_1 + 0xd7) = *(char *)(param_1 + 0xd7) + '\x01';
        }
        else {
          *(undefined1 *)(param_1 + 0xd7) = 0;
          FUN_0215fccc(param_1 + 0x130);
          FUN_0215fce4(param_1 + 0x130,8);
        }
        FUN_0215fed8(param_1 + 0x130);
        FUN_0215fc78(param_1 + 0x130,8);
        *(ushort *)(param_1 + 0x112) = (ushort)(iVar3 >> 6) & 0xff;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
        uVar8 = iVar6 + 0x100;
        sVar2 = *(short *)(iVar6 + 0x148);
        if (sVar2 != 0) {
          uVar8 = (uint)*(ushort *)(iVar6 + 0x16c);
        }
        if (sVar2 == 0 || uVar8 == 8) {
          if ((*(uint *)(iVar6 + 0x40) & 0x20) == 0) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
        }
        else {
          bVar7 = 0 < sVar2;
        }
        FUN_02083950(*(int *)(param_1 + 0x1a8),bVar7);
        iVar6 = *(byte *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x171) + 0x14 +
                (int)(char)(&DAT_02171488)[*(char *)(param_1 + 0x18)];
        if (iVar6 < 0x10) {
          iVar6 = 0x10;
        }
        if (0x3c < iVar6) {
          iVar6 = 0x3c;
        }
        *(char *)(param_1 + 0x115) = (char)iVar6;
        FUN_0215b520(param_1);
        *(short *)(param_1 + 0x10e) =
             *(short *)(param_1 + 0x10e) + (short)((uint)(iVar3 << 0xc) >> 0x10);
        if (600 < *(short *)(param_1 + 0x10e)) {
          *(undefined2 *)(param_1 + 0x10e) = 600;
        }
        *(undefined1 *)(param_1 + 0x11e) =
             *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x174);
        *(bool *)(param_1 + 0x11f) =
             (*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x150) & 0x3000000) != 0;
        iVar3 = FUN_0215aeb8(*(undefined4 *)(param_1 + 0x1a8));
        if (iVar3 != 0) {
          FUN_0215aed0(*(undefined4 *)(param_1 + 0x1a4),0x1a);
        }
        iVar3 = FUN_0215af04(*(undefined4 *)(param_1 + 0x1a8));
        if ((iVar3 != 0) || (iVar3 = FUN_0215af1c(*(undefined4 *)(param_1 + 0x1a8)), iVar3 != 0)) {
          FUN_0215aed0(*(undefined4 *)(param_1 + 0x1a4),0x19);
        }
        FUN_02157494(param_1,8,FUN_0215af34,FUN_0215b174,0x10);
      }
      FUN_021585b8(param_1);
      FUN_0206c650(**(undefined4 **)(param_1 + 0x1a0));
      *(undefined2 *)(param_1 + 0x14) = 0;
      bVar7 = true;
    }
  }
  if (bVar7) {
    return;
  }
  if (*(short *)(param_1 + 0x10e) == 0) {
    return;
  }
  *(short *)(param_1 + 0x10e) = *(short *)(param_1 + 0x10e) + -2;
  if (*(short *)(param_1 + 0x10e) < 0) {
    *(undefined2 *)(param_1 + 0x10e) = 0;
  }
  return;
}

