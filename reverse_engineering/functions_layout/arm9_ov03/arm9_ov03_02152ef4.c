
void FUN_02152ef4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  short local_50 [20];
  undefined4 uStack_28;
  
  iVar12 = 0;
  uStack_28 = param_4;
  do {
    if (iVar12 < 3) {
      iVar6 = FUN_0203b414((&DAT_0215d510)[iVar12]);
    }
    else {
      iVar6 = FUN_0203b424();
    }
    if (((iVar12 != 2 && iVar12 != 5) && iVar12 != 0) && iVar12 != 3) {
      uVar7 = FUN_0214d3a8((&DAT_0215e17c)[iVar12],(&DAT_0215e194)[iVar12],
                           *(undefined4 *)(iVar6 + 0x88));
      *(undefined4 *)(param_1 + iVar12 * 4 + 0x20) = uVar7;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 6);
  iVar12 = 0;
  do {
    uVar7 = FUN_020101f4((&DAT_0215e168)[iVar12],0);
    iVar6 = iVar12 * 4;
    iVar12 = iVar12 + 1;
    *(undefined4 *)(param_1 + iVar6 + 0xc) = uVar7;
  } while (iVar12 < 5);
  iVar12 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
  iVar6 = *(int *)(*(int *)(iVar12 + 4) + 0x10);
  uVar3 = FUN_0214d8d8(*(undefined1 *)(param_1 + 2));
  *(undefined1 *)(iVar6 + 0x20) = uVar3;
  uVar7 = FUN_0214d774(*(undefined1 *)(param_1 + 2));
  func_0x021c56d0(uVar7,&DAT_0215ec20);
  iVar12 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
  iVar13 = *(int *)(*(int *)(iVar12 + 4) + 0x10);
  iVar12 = 0;
  do {
    *(char *)(iVar13 + iVar12 + 0x74) = (char)iVar12;
    sVar5 = FUN_0214d7f0(*(undefined1 *)(param_1 + 2));
    iVar10 = iVar12 + 1;
    local_50[iVar12] = sVar5;
    iVar12 = iVar10;
  } while (iVar10 < 0x14);
  iVar12 = 0;
  do {
    iVar10 = iVar12 + 1;
    while (iVar10 < 0x14) {
      iVar8 = iVar13 + iVar10;
      bVar1 = *(byte *)(iVar13 + iVar12 + 0x74);
      bVar2 = *(byte *)(iVar8 + 0x74);
      iVar10 = iVar10 + 1;
      if (local_50[bVar1] < local_50[bVar2]) {
        *(byte *)(iVar13 + iVar12 + 0x74) = bVar2;
        *(byte *)(iVar8 + 0x74) = bVar1;
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x14);
  iVar12 = 0;
  do {
    iVar8 = iVar13 + iVar12;
    iVar10 = iVar12 * 2;
    iVar12 = iVar12 + 1;
    *(short *)(iVar13 + iVar10 + 0x88) = local_50[*(byte *)(iVar8 + 0x74)];
  } while (iVar12 < 0x14);
  uVar11 = 0;
  iVar12 = 0;
  do {
    iVar8 = FUN_0214d7f0(*(undefined1 *)(param_1 + 2),*(undefined1 *)(iVar13 + iVar12 + 0x74));
    cVar4 = '\0';
    iVar10 = iVar12;
    while (iVar10 = iVar10 + 1, iVar10 < 0x14) {
      iVar9 = FUN_0214d7f0(*(undefined1 *)(param_1 + 2),*(undefined1 *)(iVar13 + iVar10 + 0x74));
      if (iVar8 == iVar9) {
        cVar4 = cVar4 + '\x01';
      }
    }
    *(char *)(iVar12 + (uint)*(byte *)(param_1 + 2) * 0x14 + iVar13 + 0x24) = (char)uVar11;
    if (cVar4 == '\0') {
      uVar11 = iVar12 + 1U & 0xff;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x14);
  iVar12 = 0;
  do {
    if (0x13 < iVar12) {
LAB_02153124:
      iVar12 = 0;
      do {
        iVar10 = iVar12;
        while (iVar10 = iVar10 + 1, iVar10 < 0x14) {
          if (*(short *)(iVar13 + iVar12 * 2 + 0x88) == *(short *)(iVar13 + iVar10 * 2 + 0x88)) {
            bVar1 = *(byte *)(iVar13 + iVar10 + 0x74);
            bVar2 = *(byte *)(iVar13 + iVar12 + 0x74);
            if ((bVar1 < bVar2) || (iVar10 == *(int *)(param_1 + 0x580))) {
              *(byte *)(iVar13 + iVar12 + 0x74) = bVar1;
              *(byte *)(iVar13 + iVar10 + 0x74) = bVar2;
              if (iVar10 == *(int *)(param_1 + 0x580)) {
                *(int *)(param_1 + 0x580) = iVar12;
              }
            }
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x14);
      (&DAT_020b4dae)[(uint)*(byte *)(param_1 + 2) * 0xca4] =
           *(undefined1 *)
            ((uint)*(byte *)(param_1 + 2) * 0x14 + iVar13 + *(int *)(param_1 + 0x580) + 0x24);
      FUN_02073114((uint)*(byte *)(param_1 + 2) * 0xca4 + 0x4af6,1);
      if (0x12 < *(byte *)(iVar6 + 0x20)) {
        if (3 < *(byte *)((uint)*(byte *)(param_1 + 2) * 0x14 + iVar6 + *(int *)(param_1 + 0x580) +
                         0x24)) {
          *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) | 0x28;
        }
        if ((*(char *)(iVar6 + 0x20) == '\x14') &&
           (*(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) | 8,
           *(char *)((uint)*(byte *)(param_1 + 2) * 0x14 + iVar6 + *(int *)(param_1 + 0x580) + 0x24)
           == '\0')) {
          *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) | 0x10;
        }
      }
      *(undefined1 *)(iVar6 + 0x21) =
           *(undefined1 *)
            ((uint)*(byte *)(param_1 + 2) * 0x14 + iVar6 + *(int *)(param_1 + 0x580) + 0x24);
      if ((*(uint *)(iVar6 + 0x18) & 8) == 0) {
        FUN_020734e0(0x35);
        FUN_0207361c(0x35,0);
      }
      else {
        FUN_020734e0(0x36);
        FUN_0207361c(0x36,0);
      }
      return;
    }
    iVar10 = FUN_0214d7d4(*(undefined1 *)(param_1 + 2),*(undefined1 *)(iVar13 + iVar12 + 0x74));
    if (iVar10 == 0) {
      *(int *)(param_1 + 0x580) = iVar12;
      goto LAB_02153124;
    }
    iVar12 = iVar12 + 1;
  } while( true );
}

