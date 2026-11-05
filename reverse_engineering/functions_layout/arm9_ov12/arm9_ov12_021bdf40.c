
undefined4 FUN_021bdf40(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 extraout_r1;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_30 [2];
  ushort local_2e;
  undefined2 local_2c;
  undefined1 auStack_28 [4];
  int local_24;
  int local_20;
  byte local_1c;
  
  if (*(char *)(DAT_021d525c + 0x1524) == '\0') {
    return 0x15;
  }
  bVar3 = 0;
  do {
    iVar4 = DAT_021d525c;
    FUN_0200d12c(*(byte *)(DAT_021d525c + 0x1525) + 1,0x10);
    *(undefined1 *)(iVar4 + 0x1525) = extraout_r1;
    iVar4 = DAT_021d525c + (uint)*(byte *)(DAT_021d525c + 0x1525) * 0x5d4;
    if (*(char *)(iVar4 + 0x1d52) != '\0') {
      if (*(short *)(iVar4 + 0x1d4c) != 0) break;
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 0x10);
  if (bVar3 == 0x10) {
    return 0x15;
  }
  FUN_021bddcc();
  iVar4 = (uint)*(byte *)(DAT_021d525c + 0x1525) * 0x5d4;
  iVar4 = FUN_021bec98(auStack_28,DAT_021d525c + 0x1d2c + iVar4,
                       *(undefined2 *)(DAT_021d525c + iVar4 + 0x1d48),DAT_021d525c + 0x1788 + iVar4)
  ;
  if (iVar4 == 0) {
    return 0x15;
  }
  local_30[0] = 4;
  local_2e = (ushort)*(byte *)(DAT_021d525c + 0x1525);
  local_2c = *(undefined2 *)(DAT_021d525c + (uint)*(byte *)(DAT_021d525c + 0x1525) * 0x5d4 + 0x1d48)
  ;
  uVar1 = FUN_021c15a0(local_30);
  iVar4 = DAT_021d525c + (uint)*(byte *)(DAT_021d525c + 0x1525) * 0x5d4;
  uVar8 = (local_20 - *(int *)(iVar4 + (uint)local_1c * 4 + 0x1d2c)) +
          *(int *)(*(int *)(iVar4 + 0x1d58) + (uint)local_1c * 4);
  piVar7 = *(int **)(iVar4 + 0x1d54);
  iVar2 = FUN_021c10a8(piVar7,uVar8,uVar1,local_24);
  iVar4 = DAT_021d525c;
  if (iVar2 != 0) {
    uVar1 = FUN_021bf534(local_24 + 6,
                         *(undefined2 *)
                          (DAT_021d525c + (uint)*(byte *)(DAT_021d525c + 0x1525) * 0x5d4 + 0x1d4c));
    return uVar1;
  }
  iVar9 = DAT_021d525c + 0x7ce0;
  iVar2 = FUN_021c12a4(iVar9);
  if (iVar2 == 0) {
    if (*piVar7 == 0) {
      puVar5 = (uint *)(piVar7 + 0xc);
      puVar6 = (uint *)0x0;
      iVar2 = 0;
      do {
        if (puVar5[3] == 2) {
          if (puVar6 != (uint *)0x0) {
            if (*puVar6 <= *puVar5) goto LAB_021be070;
          }
          puVar6 = puVar5;
        }
LAB_021be070:
        puVar5 = puVar5 + 4;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      if (puVar6 == (uint *)0x0) {
        FUN_02055684();
      }
      *piVar7 = 2;
      puVar6[3] = 1;
      *puVar6 = uVar8 & 0xffffffe0;
      *(uint **)(iVar4 + 0x7cf0) = puVar6;
      *(int **)(iVar4 + 0x7cf4) = piVar7;
      FUN_021c1198(iVar9,0x21be101,0,4);
    }
    else {
      *piVar7 = *piVar7 + -1;
    }
  }
  return 0x15;
}

