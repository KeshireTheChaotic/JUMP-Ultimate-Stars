
void FUN_0217d650(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  
  iVar1 = FUN_02178448();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_0217575c();
  if (iVar1 != 0) {
    return;
  }
  if (param_1 == 0) {
    iVar1 = FUN_02178448();
    if (*(int *)(iVar1 + 0x10) != 0) {
      iVar1 = FUN_02178448();
      FUN_0218dd5c(*(undefined4 *)(iVar1 + 0x10));
    }
    iVar1 = FUN_02178448();
    if (*(int *)(iVar1 + 4) == 0) {
      return;
    }
    iVar1 = FUN_02178448();
    FUN_0218aa20(**(undefined4 **)(iVar1 + 4));
    return;
  }
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x198) == 0) {
    return;
  }
  iVar1 = FUN_02178448();
  puVar2 = *(undefined1 **)(iVar1 + 0x198);
  uVar11 = CONCAT44(0x198,puVar2);
  if (puVar2 < &DAT_0000000e) {
    uVar11 = CONCAT44(0x198,(int)(short)(&switchD_0217d6c4::switchdataD_0217d6c6)[(int)puVar2]);
    switch(puVar2) {
    case (undefined1 *)0x1:
      uVar11 = FUN_02176640();
      if ((undefined1 *)uVar11 == &DAT_00000005) {
        lVar13 = OS_GetTick();
        iVar1 = FUN_02178448();
        lVar13 = lVar13 - *(longlong *)(iVar1 + 0x1f0);
        uVar9 = (uint)lVar13;
        uVar14 = FUN_0200d0c4(uVar9 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a,
                              0x82ea,0);
        iVar1 = (int)((ulonglong)uVar14 >> 0x20);
        uVar9 = (uint)uVar14;
        uVar11 = CONCAT44(iVar1,30000 - uVar9);
        if ((uint)(uVar9 < 0x7531) <= (uint)-iVar1) {
          iVar1 = FUN_02178448(30000 - uVar9,iVar1,30000,-(uint)(uVar9 >= 0x7531) - iVar1);
          if (*(byte *)(iVar1 + 0x1a5) < 5) {
            iVar1 = FUN_02178448();
            iVar6 = FUN_02178448();
            iVar3 = FUN_02178448();
            FUN_0217c024(0x40,*(undefined4 *)(iVar1 + 0xf4),*(undefined4 *)(iVar6 + 0x24),
                         *(undefined2 *)(iVar3 + 0xa4),0,0);
            iVar1 = FUN_0217af70();
            if (iVar1 != 0) {
              return;
            }
            iVar1 = FUN_02178448();
            *(char *)(iVar1 + 0x1a5) = *(char *)(iVar1 + 0x1a5) + '\x01';
            iVar1 = FUN_02178448();
            lVar13 = OS_GetTick();
            uVar11 = CONCAT44((int)((ulonglong)(lVar13 + -0xbfc4c6) >> 0x20),500);
            *(longlong *)(iVar1 + 0x1f0) = lVar13 + -0xbfc4c6;
          }
          else {
            iVar1 = FUN_02178448();
            uVar11 = FUN_0217a8a4(*(undefined4 *)(iVar1 + 0xf4));
            if ((int)uVar11 == 0) {
              return;
            }
          }
        }
      }
      break;
    case (undefined1 *)0x2:
    case (undefined1 *)0x3:
    case (undefined1 *)0x5:
      uVar14 = FUN_02178448();
      iVar1 = *(int *)((int)uVar14 + 0xe8);
      uVar11 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),iVar1);
      if (0 < iVar1) {
        iVar1 = FUN_02178448();
        if (*(int *)(iVar1 + 0x198) == 3) {
          iVar1 = FUN_02178448();
          uVar9 = (uint)*(byte *)(iVar1 + 0xd) * 3000 + 3000;
        }
        else {
          iVar1 = FUN_02178448();
          if (*(int *)(iVar1 + 0xe8) == 1) {
            uVar9 = 1000;
          }
          else {
            uVar9 = 3000;
          }
        }
        lVar13 = OS_GetTick();
        iVar1 = FUN_02178448();
        lVar13 = lVar13 - *(longlong *)(iVar1 + 0xec);
        uVar7 = (uint)lVar13;
        uVar14 = FUN_0200d0c4(uVar7 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar7 >> 0x1a,
                              0x82ea,0);
        iVar1 = (int)((ulonglong)uVar14 >> 0x20);
        uVar7 = (uint)uVar14;
        uVar11 = CONCAT44(iVar1,uVar9 - uVar7);
        if ((uint)(uVar7 <= uVar9) <= (uint)-iVar1) {
          iVar1 = FUN_02178448(uVar9 - uVar7,iVar1,-(uint)(uVar7 > uVar9) - iVar1);
          FUN_0217c498(*(undefined4 *)(iVar1 + 0x1fc));
          iVar1 = FUN_021790e4();
          if (iVar1 != 0) {
            return;
          }
          iVar1 = FUN_02178448();
          uVar11 = ZEXT48((undefined4 *)(iVar1 + 0xe8));
          *(undefined4 *)(iVar1 + 0xe8) = 0;
        }
      }
      break;
    case (undefined1 *)0x4:
      iVar6 = FUN_02178448();
      iVar1 = 0;
      if (*(int *)(iVar6 + 0x1c0) != 0) {
        lVar13 = OS_GetTick();
        iVar1 = FUN_02178448();
        iVar6 = FUN_02178448();
        lVar13 = lVar13 - *(longlong *)(iVar1 + 0x1c4);
        uVar9 = (uint)lVar13;
        uVar14 = FUN_0200d0c4(uVar9 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a,
                              0x82ea,0);
        iVar3 = (int)((ulonglong)uVar14 >> 0x20);
        uVar9 = (uint)uVar14;
        uVar7 = *(uint *)(iVar6 + 0x1c0);
        iVar1 = uVar7 - uVar9;
        if ((uint)(uVar9 <= uVar7) <= (uint)-iVar3) {
          iVar1 = FUN_02178448(iVar1,iVar3,-(uint)(uVar9 > uVar7) - iVar3);
          *(undefined4 *)(iVar1 + 0x1c0) = 0;
          iVar1 = FUN_02178448();
          if (*(char *)(iVar1 + 0x15) == '\x03') {
            iVar1 = FUN_02178448();
            *(char *)(iVar1 + 0x1a2) = *(char *)(iVar1 + 0x1a2) + '\x01';
            iVar1 = FUN_02178448();
            if (5 < *(byte *)(iVar1 + 0x1a2)) {
              FUN_0217d118(6,0xfffec5d2);
              return;
            }
            iVar1 = FUN_02178448();
            FUN_0217ae0c(*(undefined4 *)(iVar1 + 0xf4),0);
            iVar6 = FUN_0217af70();
            iVar1 = 0;
            if (iVar6 != 0) {
              return;
            }
          }
          else {
            iVar1 = FUN_0217ab10(0);
            if (iVar1 == 0) {
              return;
            }
          }
        }
      }
      iVar1 = FUN_02178448(iVar1);
      if (*(int *)(iVar1 + 0x1b4) == 0) {
        uVar11 = 0x1b400000000;
      }
      else {
        iVar1 = FUN_02178448();
        uVar10 = (uint)*(byte *)(iVar1 + 0xd) * 3000 + 3000;
        lVar13 = OS_GetTick();
        iVar1 = FUN_02178448();
        lVar13 = lVar13 - *(longlong *)(iVar1 + 0x1b8);
        uVar9 = (uint)lVar13;
        uVar14 = FUN_0200d0c4(uVar9 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a,
                              0x82ea,0);
        uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
        uVar9 = (uint)uVar14;
        iVar1 = uVar7 - (uVar10 > uVar9);
        uVar11 = CONCAT44(iVar1,uVar9 - uVar10);
        if (uVar7 != 0 || uVar7 < (uVar10 <= uVar9)) {
          iVar1 = FUN_02178448(uVar9 - uVar10,iVar1);
          FUN_0217ae0c(*(undefined4 *)(iVar1 + 0xf4),0);
          uVar11 = FUN_0217af70();
          if ((int)uVar11 != 0) {
            return;
          }
          uVar11 = uVar11 & 0xffffffff00000000;
        }
      }
      break;
    case (undefined1 *)0x7:
      iVar1 = FUN_02178448();
      if (*(int *)(iVar1 + 0x188) == 0 && *(int *)(iVar1 + 0x184) == 0) {
        iVar1 = FUN_02178448();
        uVar11 = CONCAT44(0x3c4,(uint)*(byte *)(iVar1 + 0x3c4));
        if (*(byte *)(iVar1 + 0x3c4) == 6) {
          lVar13 = OS_GetTick();
          iVar1 = FUN_02178448();
          lVar13 = lVar13 - *(longlong *)(iVar1 + 0x454);
          uVar9 = (uint)lVar13;
          uVar14 = FUN_0200d0c4(uVar9 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a
                                ,0x82ea,0);
          iVar1 = (int)((ulonglong)uVar14 >> 0x20);
          uVar9 = (uint)uVar14;
          uVar11 = CONCAT44(iVar1,6000 - uVar9);
          if ((uint)(uVar9 < 0x1771) <= (uint)-iVar1) {
            iVar1 = FUN_02178448(6000 - uVar9,iVar1,6000,-(uint)(uVar9 >= 0x1771) - iVar1);
            *(char *)(iVar1 + 0x3c5) = *(char *)(iVar1 + 0x3c5) + '\x01';
            iVar1 = FUN_02178448();
            if (*(byte *)(iVar1 + 0x3c5) < 6) {
              iVar1 = FUN_02178448();
              iVar6 = FUN_02178448();
              iVar3 = FUN_02178448();
              iVar4 = FUN_02178448();
              iVar5 = FUN_02178448();
              FUN_0217c024(6,*(undefined4 *)(iVar1 + 0x44c),*(undefined4 *)(iVar6 + 0x3c8),
                           *(undefined2 *)(iVar3 + 0x3c6),iVar4 + 0x3cc,
                           *(undefined4 *)(iVar5 + 0x450));
              uVar11 = FUN_0217af70();
              if ((int)uVar11 != 0) {
                return;
              }
              uVar11 = uVar11 & 0xffffffff00000000;
            }
            else {
              FUN_0217d1ac();
              iVar1 = FUN_02178448();
              uVar11 = FUN_0217a8a4(*(undefined4 *)(iVar1 + 0xf4));
              if ((int)uVar11 == 0) {
                return;
              }
            }
          }
        }
      }
      else {
        lVar13 = OS_GetTick();
        iVar1 = FUN_02178448();
        lVar13 = lVar13 - *(longlong *)(iVar1 + 0x184);
        uVar9 = (uint)lVar13;
        uVar14 = FUN_0200d0c4(uVar9 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a,
                              0x82ea,0);
        iVar1 = (int)((ulonglong)uVar14 >> 0x20);
        uVar9 = (uint)uVar14;
        uVar11 = CONCAT44(iVar1,25000 - uVar9);
        if ((uint)(uVar9 < 0x61a9) <= (uint)-iVar1) {
          iVar1 = FUN_02178448(25000 - uVar9,iVar1,25000,-(uint)(uVar9 >= 0x61a9) - iVar1);
          *(undefined4 *)(iVar1 + 0x184) = 0;
          *(undefined4 *)(iVar1 + 0x188) = 0;
          iVar1 = FUN_02178448();
          uVar11 = FUN_0217a8a4(*(undefined4 *)(iVar1 + 0xf4));
          if ((int)uVar11 == 0) {
            return;
          }
        }
      }
      break;
    case (undefined1 *)0xb:
      iVar1 = FUN_02178448();
      uVar11 = CONCAT44(0x3c4,(uint)*(byte *)(iVar1 + 0x3c4));
      if (*(byte *)(iVar1 + 0x3c4) == 2) {
        iVar1 = FUN_02178448();
        uVar9 = (uint)*(byte *)(iVar1 + 0x15);
        if (uVar9 == 0) {
          lVar13 = OS_GetTick();
          iVar1 = FUN_02178448();
          lVar13 = lVar13 - *(longlong *)(iVar1 + 0x454);
          uVar9 = (uint)lVar13;
          uVar14 = FUN_0200d0c4(uVar9 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a
                                ,0x82ea,0);
          iVar1 = (int)((ulonglong)uVar14 >> 0x20);
          uVar7 = (uint)uVar14;
          uVar8 = 6000;
          uVar9 = 6000 - uVar7;
          iVar6 = -(uint)(uVar7 >= 0x1771) - iVar1;
          if ((uint)-iVar1 < (uint)(uVar7 < 0x1771)) goto LAB_0217d9f8;
LAB_0217daa2:
          FUN_0217d1ac(uVar9,iVar1,uVar8,iVar6);
          iVar1 = FUN_02178448();
          iVar6 = FUN_02178448();
          uVar11 = FUN_0217a93c(*(undefined4 *)(iVar1 + (*(byte *)(iVar6 + 0xd) + 1) * 4 + 0xf4));
          if ((int)uVar11 == 0) {
            return;
          }
        }
        else {
LAB_0217d9f8:
          uVar11 = FUN_02178448(uVar9);
          if (*(char *)((int)uVar11 + 0x15) == '\0') {
            uVar11 = uVar11 & 0xffffffff00000000;
          }
          else {
            lVar13 = OS_GetTick();
            iVar1 = FUN_02178448();
            lVar13 = lVar13 - *(longlong *)(iVar1 + 0x454);
            uVar9 = (uint)lVar13;
            uVar14 = FUN_0200d0c4(uVar9 * 0x40,
                                  (int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a,0x82ea,0);
            iVar1 = (int)((ulonglong)uVar14 >> 0x20);
            uVar7 = (uint)uVar14;
            uVar8 = 19000;
            uVar9 = 19000 - uVar7;
            uVar11 = CONCAT44(iVar1,uVar9);
            iVar6 = -(uint)(uVar7 >= 0x4a39) - iVar1;
            if ((uint)(uVar7 < 0x4a39) <= (uint)-iVar1) goto LAB_0217daa2;
          }
        }
      }
      break;
    case (undefined1 *)0xd:
      iVar1 = FUN_02178448();
      uVar11 = CONCAT44(0x3c4,(undefined1 *)(uint)*(byte *)(iVar1 + 0x3c4));
      if ((undefined1 *)(uint)*(byte *)(iVar1 + 0x3c4) == &SupervisorCall) {
        lVar13 = OS_GetTick();
        iVar1 = FUN_02178448();
        lVar13 = lVar13 - *(longlong *)(iVar1 + 0x454);
        uVar9 = (uint)lVar13;
        uVar14 = FUN_0200d0c4(uVar9 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a,
                              0x82ea,0);
        iVar1 = (int)((ulonglong)uVar14 >> 0x20);
        uVar9 = (uint)uVar14;
        uVar11 = CONCAT44(iVar1,30000 - uVar9);
        if ((uint)(uVar9 < 0x7531) <= (uint)-iVar1) {
          iVar1 = FUN_02178448(30000 - uVar9,iVar1,30000,-(uint)(uVar9 >= 0x7531) - iVar1);
          *(char *)(iVar1 + 0x3c5) = *(char *)(iVar1 + 0x3c5) + '\x01';
          iVar1 = FUN_02178448();
          if (*(char *)(iVar1 + 0x3c5) == '\0') {
            iVar1 = FUN_02178448();
            iVar6 = FUN_02178448();
            iVar3 = FUN_02178448();
            iVar4 = FUN_02178448();
            iVar5 = FUN_02178448();
            FUN_0217c024(8,*(undefined4 *)(iVar1 + 0x44c),*(undefined4 *)(iVar6 + 0x3c8),
                         *(undefined2 *)(iVar3 + 0x3c6),iVar4 + 0x3cc,*(undefined4 *)(iVar5 + 0x450)
                        );
            uVar12 = FUN_0217af70();
            uVar11 = uVar12 & 0xffffffff00000000;
            if ((int)uVar12 != 0) {
              return;
            }
          }
          else {
            FUN_0217d1ac();
            iVar1 = FUN_02178448();
            if (*(char *)(iVar1 + 0x15) == '\x02') {
              iVar1 = FUN_02178448();
              iVar6 = FUN_02178448();
              uVar11 = FUN_0217a93c(*(undefined4 *)(iVar1 + (uint)*(byte *)(iVar6 + 0xd) * 4 + 0xf4)
                                   );
              if ((int)uVar11 == 0) {
                return;
              }
            }
            else {
              uVar11 = FUN_02179f60();
            }
          }
        }
      }
    }
  }
  iVar1 = FUN_02178448((int)uVar11,(int)(uVar11 >> 0x20));
  if (*(int *)(iVar1 + 0x198) != 0xb) {
    iVar1 = FUN_02178448();
    iVar1 = *(int *)(iVar1 + 0x198);
    if (iVar1 != 6) goto LAB_0217dccc;
  }
  iVar6 = FUN_02178448();
  iVar1 = 0;
  if (*(int *)(iVar6 + 0x180) != 0 || *(int *)(iVar6 + 0x17c) != 0) {
    lVar13 = OS_GetTick();
    iVar1 = FUN_02178448();
    lVar13 = lVar13 - *(longlong *)(iVar1 + 0x17c);
    uVar9 = (uint)lVar13;
    uVar14 = FUN_0200d0c4(uVar9 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a,
                          0x82ea,0);
    iVar6 = (int)((ulonglong)uVar14 >> 0x20);
    uVar9 = (uint)uVar14;
    iVar1 = 10000 - uVar9;
    if ((uint)(uVar9 < 0x2711) <= (uint)-iVar6) {
      iVar1 = FUN_02178448(iVar1,iVar6,10000,-(uint)(uVar9 >= 0x2711) - iVar6);
      iVar1 = FUN_021784b8(1,0,0,iVar1 + 0x18c);
    }
  }
LAB_0217dccc:
  iVar1 = FUN_02178448(iVar1);
  if (*(int *)(iVar1 + 0xe4) != 0) {
    iVar1 = FUN_02178448();
    FUN_0217fc38(*(undefined4 *)(iVar1 + 0xe4));
  }
  iVar1 = FUN_02178448();
  FUN_0217de28(*(undefined4 *)(iVar1 + 0x10));
  FUN_0218c764();
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_02178448();
    FUN_0218aa20(**(undefined4 **)(iVar1 + 4));
  }
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x198) == 0x12) {
    lVar13 = OS_GetTick();
    iVar1 = FUN_02178448();
    lVar13 = lVar13 - *(longlong *)(iVar1 + 0x1e8);
    uVar9 = (uint)lVar13;
    uVar14 = FUN_0200d0c4(uVar9 * 0x40,(int)((ulonglong)lVar13 >> 0x20) * 0x40 | uVar9 >> 0x1a,
                          0x82ea,0);
    iVar1 = (int)((ulonglong)uVar14 >> 0x20);
    uVar9 = (uint)uVar14;
    if (((uint)(uVar9 < 0xbb9) <= (uint)-iVar1) &&
       (iVar1 = FUN_02179ed4(3000 - uVar9,iVar1,3000,-(uint)(uVar9 >= 0xbb9) - iVar1), iVar1 != 0))
    {
      return;
    }
  }
  iVar1 = FUN_02179ab8();
  if ((iVar1 != 0) && (iVar1 = FUN_0217972c(), iVar1 != 0)) {
    FUN_021791a0();
    iVar1 = FUN_02178448();
    if ((*(char *)(iVar1 + 0x1a6) != '\0') &&
       (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 10)) {
      iVar1 = FUN_02178448();
      iVar6 = FUN_02178448();
      *(undefined1 *)(iVar1 + 0x16) = *(undefined1 *)(iVar6 + 0xd);
      FUN_0217cacc();
      iVar1 = FUN_02178448();
      *(undefined1 *)(iVar1 + 0x1a6) = 0;
      iVar1 = FUN_02178448();
      if (*(int *)(iVar1 + 0x474) != 0) {
        iVar1 = FUN_02178448();
        iVar6 = FUN_02178448();
        (**(code **)(iVar1 + 0x474))(*(undefined4 *)(iVar6 + 0x478));
      }
    }
  }
  return;
}

