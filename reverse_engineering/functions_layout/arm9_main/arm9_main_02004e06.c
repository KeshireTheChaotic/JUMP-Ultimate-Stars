
undefined8
FUN_02004e06(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int *param_6,undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10,
            uint param_11,int param_12,int param_13,byte *param_14,int param_15,int param_16,
            int param_17,int param_18,int param_19,int param_20,uint param_21)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  char *pcVar7;
  undefined1 *puVar8;
  uint uVar9;
  int unaff_r4;
  code *unaff_r5;
  uint uVar10;
  int iVar11;
  undefined4 unaff_r6;
  uint unaff_r7;
  int iVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  undefined8 uVar17;
  int iStack00000054;
  int iStack0000005c;
  undefined1 in_stack_00000068;
  undefined1 in_stack_0000006c;
  undefined1 uStack00000070;
  undefined1 uStack00000071;
  undefined1 uStack00000072;
  undefined1 uStack00000073;
  undefined1 in_stack_00000074;
  undefined1 uStack00000075;
  undefined1 uStack00000076;
  undefined1 uStack00000077;
  undefined1 in_stack_00000078;
  char cStack00000079;
  undefined4 uStack0000007c;
  undefined1 uStack00000080;
  undefined1 uStack00000081;
  undefined1 uStack00000082;
  undefined1 uStack00000083;
  byte bStack00000084;
  undefined1 uStack00000085;
  undefined1 uStack0000008e;
  undefined1 uStack000000ae;
  char cStack000000af;
  undefined2 uStack000000ba;
  undefined4 uStack000000bc;
  int *in_stack_000000f8;
  
  if ((int)unaff_r7 < 0x101) {
    if ((int)unaff_r7 < 0x100) {
      if ((int)unaff_r7 < 0x21) {
        if ((int)unaff_r7 < 0x20) {
          if ((int)unaff_r7 < 9) {
            switch(unaff_r7) {
            case 1:
              if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
                uVar3 = 0;
              }
              else {
                uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 0x100;
              }
              if (uVar3 == 0) {
                if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
                  uVar6 = param_2;
                }
                else {
                  uVar6 = (uint)(byte)(&DAT_0208d4a0)[param_2];
                }
                if ((int)uVar6 < 0x4a) {
                  if ((int)uVar6 < 0x49) {
                    if (((int)uVar6 < 0x2e) && (0x2a < (int)uVar6)) {
                      if (uVar6 != 0x2b) {
                        if (uVar6 != 0x2d) goto LAB_02004f1e;
                        param_19 = 1;
                      }
                      unaff_r4 = unaff_r4 + 1;
                      param_2 = (*unaff_r5)(unaff_r6,0,0);
                    }
                    else {
LAB_02004f1e:
                      unaff_r7 = 2;
                    }
                  }
                  else {
                    unaff_r4 = unaff_r4 + 1;
                    param_2 = (*unaff_r5)(unaff_r6,0,0);
                    unaff_r7 = 0x4000;
                  }
                }
                else {
                  if (uVar6 != 0x4e) goto LAB_02004f1e;
                  unaff_r4 = unaff_r4 + 1;
                  param_2 = (*unaff_r5)(unaff_r6,0,0);
                  unaff_r7 = 0x2000;
                }
              }
              else {
                param_2 = (*unaff_r5)(unaff_r6,0,0);
                param_20 = param_20 + 1;
              }
              break;
            case 2:
              if (param_2 == 0x2e) {
                unaff_r7 = 0x10;
                unaff_r4 = unaff_r4 + 1;
                param_2 = (*unaff_r5)(unaff_r6,0,0);
              }
              else {
                if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 8;
                }
                if (uVar3 == 0) {
                  unaff_r7 = 0x1000;
                }
                else if (param_2 == 0x30) {
                  unaff_r4 = unaff_r4 + 1;
                  param_2 = (*unaff_r5)(unaff_r6,0,0);
                  uVar6 = param_2;
                  if ((-1 < (int)param_2) && ((int)param_2 < 0x80)) {
                    uVar6 = (uint)(byte)(&DAT_0208d4a0)[param_2];
                  }
                  if (uVar6 == 0x58) {
                    unaff_r7 = 0x8000;
                    param_21 = 1;
                  }
                  else {
                    unaff_r7 = 4;
                  }
                }
                else {
                  unaff_r7 = 8;
                }
              }
              break;
            case 4:
              if (param_2 == 0x30) {
                unaff_r4 = unaff_r4 + 1;
                param_2 = (*unaff_r5)(unaff_r6,0,0);
              }
              else {
                unaff_r7 = 8;
              }
              break;
            case 8:
              if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
                uVar3 = 0;
              }
              else {
                uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 8;
              }
              if (uVar3 == 0) {
                if (param_2 == 0x2e) {
                  unaff_r7 = 0x20;
                  unaff_r4 = unaff_r4 + 1;
                  param_2 = (*unaff_r5)(unaff_r6,0,0);
                }
                else {
                  unaff_r7 = 0x40;
                }
              }
              else {
                uVar6 = uStack000000bc & 0xff;
                if (uVar6 < 0x14) {
                  uStack000000bc._0_1_ = (byte)uStack000000bc + 1;
                  *(char *)((int)&uStack000000bc + uVar6 + 1) = (char)param_2;
                }
                else {
                  param_16 = param_16 + 1;
                }
                unaff_r4 = unaff_r4 + 1;
                param_2 = (*unaff_r5)(unaff_r6,0,0);
              }
            }
          }
          else if (unaff_r7 == 0x10) {
            if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 8;
            }
            if (uVar3 == 0) {
              unaff_r7 = 0x1000;
            }
            else {
              unaff_r7 = 0x20;
            }
          }
        }
        else {
          if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 8;
          }
          if (uVar3 == 0) {
            unaff_r7 = 0x40;
          }
          else {
            uVar6 = uStack000000bc & 0xff;
            if (uVar6 < 0x14) {
              if ((param_2 != 0x30) || (uVar6 != 0)) {
                uStack000000bc._0_1_ = (byte)uStack000000bc + 1;
                *(char *)((int)&uStack000000bc + uVar6 + 1) = (char)param_2;
              }
              param_16 = param_16 + -1;
            }
            unaff_r4 = unaff_r4 + 1;
            param_2 = (*unaff_r5)(unaff_r6,0,0);
          }
        }
      }
      else if ((int)unaff_r7 < 0x41) {
        if (unaff_r7 == 0x40) {
          if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
            uVar6 = param_2;
          }
          else {
            uVar6 = (uint)(byte)(&DAT_0208d4a0)[param_2];
          }
          if (uVar6 == 0x45) {
            unaff_r7 = 0x80;
            unaff_r4 = unaff_r4 + 1;
            param_2 = (*unaff_r5)(unaff_r6,0,0);
          }
          else {
            unaff_r7 = 0x800;
          }
        }
      }
      else if (unaff_r7 == 0x80) {
        if (param_2 == 0x2b) {
          unaff_r4 = unaff_r4 + 1;
          param_2 = (*unaff_r5)(unaff_r6,0,0);
        }
        else if (param_2 == 0x2d) {
          unaff_r4 = unaff_r4 + 1;
          param_2 = (*unaff_r5)(unaff_r6,0,0);
          param_18 = 1;
        }
        unaff_r7 = 0x100;
      }
    }
    else {
      if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 8;
      }
      if (uVar3 == 0) {
        unaff_r7 = 0x1000;
      }
      else if (param_2 == 0x30) {
        unaff_r7 = 0x200;
        unaff_r4 = unaff_r4 + 1;
        param_2 = (*unaff_r5)(unaff_r6,0,0);
      }
      else {
        unaff_r7 = 0x400;
      }
    }
  }
  else if ((int)unaff_r7 < 0x2001) {
    if ((int)unaff_r7 < 0x2000) {
      if ((int)unaff_r7 < 0x201) {
        if (unaff_r7 == 0x200) {
          if (param_2 == 0x30) {
            unaff_r4 = unaff_r4 + 1;
            param_2 = (*unaff_r5)(unaff_r6,0,0);
          }
          else {
            unaff_r7 = 0x400;
          }
        }
      }
      else if (unaff_r7 == 0x400) {
        if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 8;
        }
        if (uVar3 == 0) {
          unaff_r7 = 0x800;
        }
        else {
          param_17 = (param_2 - 0x30) + param_17 * 10;
          if (0x7fff < param_17) {
            *in_stack_000000f8 = 1;
          }
          unaff_r4 = unaff_r4 + 1;
          param_2 = (*unaff_r5)(unaff_r6,0,0);
        }
      }
    }
    else {
      param_10 = 1;
      iVar12 = 0;
      in_stack_00000078 = in_stack_00000068;
      uStack0000007c._0_1_ = in_stack_0000006c;
      puVar4 = &uStack0000008e;
      iVar11 = 0x20;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      param_8 = &cStack00000079;
      while (param_10 < 4) {
        if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
          uVar6 = param_2;
        }
        else {
          uVar6 = (uint)(byte)(&DAT_0208d4a0)[param_2];
        }
        if ((int)*param_8 != uVar6) break;
        param_8 = param_8 + 1;
        param_10 = param_10 + 1;
        unaff_r4 = unaff_r4 + 1;
        param_2 = (*unaff_r5)(unaff_r6,0,0);
      }
      if (param_10 - 3U < 2) {
        if (param_10 != 4) {
LAB_020050a2:
          (&uStack0000008e)[iVar12] = 0;
          if (param_19 == 0) {
            uVar17 = FUN_02002008();
          }
          else {
            uVar17 = FUN_02002008();
            uVar17 = FUN_0200bc6c(0,0,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          }
          *param_6 = param_15 + iVar12 + param_20 + param_10;
          return uVar17;
        }
        for (; iVar12 < 0x20; iVar12 = iVar12 + 1) {
          if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 8;
          }
          if (uVar3 == 0) {
            if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 1;
            }
            if ((uVar3 == 0) && (param_2 != 0x2e)) break;
          }
          (&uStack0000008e)[iVar12] = (char)param_2;
          unaff_r4 = unaff_r4 + 1;
          param_2 = (*unaff_r5)(unaff_r6,0,0);
        }
        if (param_2 == 0x29) {
          iVar12 = iVar12 + 1;
          goto LAB_020050a2;
        }
        unaff_r7 = 0x1000;
      }
      else {
        unaff_r7 = 0x1000;
      }
    }
  }
  else if ((int)unaff_r7 < 0x4001) {
    if (unaff_r7 == 0x4000) {
      iVar11 = 1;
      puVar4 = &uStack00000085;
      puVar8 = &uStack000000ae;
      iStack0000005c = 9;
      do {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar8 = uVar1;
        puVar8 = puVar8 + 1;
        iStack0000005c = iStack0000005c + -1;
      } while (iStack0000005c != 0);
      param_7 = &cStack000000af;
      for (; iVar11 < 8; iVar11 = iVar11 + 1) {
        if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
          uVar6 = param_2;
        }
        else {
          uVar6 = (uint)(byte)(&DAT_0208d4a0)[param_2];
        }
        if ((int)*param_7 != uVar6) break;
        param_7 = param_7 + 1;
        unaff_r4 = unaff_r4 + 1;
        param_2 = (*unaff_r5)(unaff_r6,0,0);
      }
      if ((iVar11 == 3) || (iVar11 == 8)) {
        if (param_19 == 0) {
          uVar17 = FUN_0200c85c(DAT_02093134);
        }
        else {
          FUN_0200cc64(0,DAT_02093134);
          uVar17 = FUN_0200c85c();
        }
        *param_6 = param_15 + param_20 + iVar11;
        return uVar17;
      }
      unaff_r7 = 0x1000;
    }
  }
  else if (unaff_r7 == 0x8000) {
    if ((int)param_21 < 0x21) {
      if ((int)param_21 < 0x20) {
        if ((int)param_21 < 9) {
          if (-1 < (int)param_21) {
            uVar6 = param_9 >> 0x1f;
            switch(param_21) {
            case 1:
              uStack0000007c._1_1_ = 0;
              uStack0000007c._2_1_ = 0;
              uStack0000007c._3_1_ = 0;
              uStack00000080 = 0;
              uStack00000081 = 0;
              uStack00000082 = 0;
              uStack00000083 = 0;
              bStack00000084 = 0;
              param_21 = 2;
              param_11 = 0;
              unaff_r4 = unaff_r4 + 1;
              param_2 = (*unaff_r5)(unaff_r6,0,0);
              break;
            case 2:
              if (param_2 == 0x30) {
                unaff_r4 = unaff_r4 + 1;
                param_2 = (*unaff_r5)(unaff_r6,0,0);
              }
              else {
                param_21 = 4;
              }
              break;
            case 4:
              if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
                uVar3 = 0;
              }
              else {
                uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 0x400;
              }
              if (uVar3 == 0) {
                if (param_2 == 0x2e) {
                  param_21 = 8;
                  unaff_r4 = unaff_r4 + 1;
                  param_2 = (*unaff_r5)(unaff_r6,0,0);
                }
                else {
                  param_21 = 0x10;
                }
              }
              else if (param_11 < 0xe) {
                param_11 = param_11 + 1;
                if ((-1 < (int)param_2) && ((int)param_2 < 0x80)) {
                  param_2 = (uint)(byte)(&DAT_0208d4a0)[param_2];
                }
                if ((int)param_2 < 0x41) {
                  param_2 = param_2 - 0x30;
                }
                else {
                  param_2 = param_2 - 0x37;
                }
                if ((param_9 * -0x80000000 + uVar6 >> 0x1f | uVar6 << 1) == uVar6) {
                  bVar2 = (byte)((param_2 & 0xf) << 4);
                }
                else {
                  bVar2 = (byte)param_2;
                }
                unaff_r4 = unaff_r4 + 1;
                *(byte *)((int)param_14 + param_9 / 2) =
                     *(byte *)((int)param_14 + param_9 / 2) | bVar2;
                param_2 = (*unaff_r5)(unaff_r6,0,0);
              }
              else {
                unaff_r4 = unaff_r4 + 1;
                param_2 = (*unaff_r5)(unaff_r6,0,0);
              }
              break;
            case 8:
              if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
                uVar3 = 0;
              }
              else {
                uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 0x400;
              }
              if (uVar3 == 0) {
                param_21 = 0x10;
              }
              else if (param_11 < 0xe) {
                if ((-1 < (int)param_2) && ((int)param_2 < 0x80)) {
                  param_2 = (uint)(byte)(&DAT_0208d4a0)[param_2];
                }
                if ((int)param_2 < 0x41) {
                  param_2 = param_2 - 0x30;
                }
                else {
                  param_2 = param_2 - 0x37;
                }
                if ((param_9 * -0x80000000 + uVar6 >> 0x1f | uVar6 << 1) == uVar6) {
                  bVar2 = (byte)((param_2 & 0xf) << 4);
                }
                else {
                  bVar2 = (byte)param_2;
                }
                unaff_r4 = unaff_r4 + 1;
                *(byte *)((int)param_14 + param_9 / 2) =
                     *(byte *)((int)param_14 + param_9 / 2) | bVar2;
                param_2 = (*unaff_r5)(unaff_r6,0,0);
              }
              else {
                unaff_r4 = unaff_r4 + 1;
                param_2 = (*unaff_r5)(unaff_r6,0,0);
              }
            }
          }
        }
        else if (param_21 == 0x10) {
          if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
            uVar6 = param_2;
          }
          else {
            uVar6 = (uint)(byte)(&DAT_0208d4a0)[param_2];
          }
          if (uVar6 == 0x50) {
            param_21 = 0x20;
            unaff_r4 = unaff_r4 + 1;
            param_2 = (*unaff_r5)(unaff_r6,0,0);
          }
          else {
            unaff_r7 = 0x800;
          }
        }
      }
      else {
        if (param_2 == 0x2d) {
          param_12 = 1;
        }
        else if (param_2 != 0x2b) {
          (*unaff_r5)(unaff_r6,param_2,1);
          unaff_r4 = unaff_r4 + -1;
        }
        param_21 = 0x40;
        unaff_r4 = unaff_r4 + 1;
        param_2 = (*unaff_r5)(unaff_r6,0,0);
      }
    }
    else if ((int)param_21 < 0x81) {
      if ((int)param_21 < 0x80) {
        if (param_21 == 0x40) {
          if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 8;
          }
          if (uVar3 == 0) {
            unaff_r7 = 0x1000;
          }
          else if (param_2 == 0x30) {
            param_21 = 0x80;
            unaff_r4 = unaff_r4 + 1;
            param_2 = (*unaff_r5)(unaff_r6,0,0);
          }
          else {
            param_21 = 0x100;
          }
        }
      }
      else if (param_2 == 0x30) {
        unaff_r4 = unaff_r4 + 1;
        param_2 = (*unaff_r5)(unaff_r6,0,0);
      }
      else {
        param_21 = 0x100;
      }
    }
    else if (param_21 == 0x100) {
      if (((int)param_2 < 0) || (0x7f < (int)param_2)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(ushort *)(&DAT_0208d520 + param_2 * 2) & 8;
      }
      if (uVar3 == 0) {
        unaff_r7 = 0x800;
      }
      else {
        param_13 = (param_2 - 0x30) + param_13 * 10;
        if (0x7fff < param_17) {
          *in_stack_000000f8 = 1;
        }
        unaff_r4 = unaff_r4 + 1;
        param_2 = (*unaff_r5)(unaff_r6,0,0);
      }
    }
  }
  if (((unaff_r4 <= param_5) && (param_2 != 0xffffffff)) && ((unaff_r7 & 0x1800) == 0)) {
    FUN_02004e06();
    param_2 = extraout_r1;
  }
  if (unaff_r7 == 0x8000) {
    if ((unaff_r4 + -1 < 3) || ((param_21 & 0x18e) == 0)) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
  }
  else if ((unaff_r7 & 0xe2c) == 0) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  if (bVar14) {
    param_20 = 0;
  }
  else {
    param_20 = unaff_r4 + -1 + param_20;
  }
  *param_6 = param_20;
  (*unaff_r5)(unaff_r6,param_2,1);
  if (param_21 != 0) {
    if (param_12 != 0) {
      param_13 = -param_13;
    }
    param_13 = param_13 + param_11 * 4;
    for (uVar6 = 0; (uVar6 < 4 && ((0x80 >> (uVar6 & 0xff) & (uint)uStack0000007c._1_1_) == 0));
        uVar6 = uVar6 + 1) {
      param_13 = param_13 + -1;
    }
    uVar6 = uVar6 + 1;
    if (uVar6 != 0) {
      param_14 = &bStack00000084;
      uVar9 = 0;
      if ((byte *)((int)&uStack0000007c + 1) <= param_14) {
        do {
          bVar2 = *param_14;
          *param_14 = bVar2 << (uVar6 & 0xff) | (byte)uVar9;
          uVar9 = (int)(uint)bVar2 >> (8 - uVar6 & 0xff) & 0xff;
          param_14 = param_14 + -1;
        } while ((byte *)((int)&uStack0000007c + 1) <= param_14);
      }
    }
    uVar6 = 0;
    uStack00000070 = 0;
    uStack00000071 = 0;
    uStack00000072 = 0;
    uStack00000073 = 0;
    in_stack_00000074 = 0;
    uStack00000075 = 0;
    uStack00000076 = 0;
    uStack00000077 = 0;
    uVar9 = 0xc;
    iStack00000054 = 0;
    iVar11 = 1;
    do {
      uVar10 = (uint)*(byte *)((int)&uStack0000007c + iStack00000054 + 1);
      if (0x34 < uVar6 + 8) {
        uVar10 = 0xff << (0x34 - uVar6 & 0xff) & uVar10;
      }
      uVar13 = uVar9 & 7;
      uVar6 = uVar6 + 8;
      uVar9 = uVar9 + 8;
      (&uStack00000070)[iVar11] = (&uStack00000070)[iVar11] | (byte)((int)uVar10 >> uVar13);
      (&uStack00000071)[iVar11] = (byte)(uVar10 << (8 - uVar13 & 0xff)) | (&uStack00000071)[iVar11];
      iStack00000054 = iStack00000054 + 1;
      iVar11 = iVar11 + 1;
    } while (uVar6 < 0x34);
    uVar6 = param_13 + 0x3fe;
    if ((uVar6 & 0xfffff800) != 0) {
      *in_stack_000000f8 = 1;
      return 0;
    }
    uStack00000070 = (byte)((uVar6 & 0x7ff) >> 4);
    uStack00000071 = (byte)((uVar6 & 0x7ff) << 4) | uStack00000071;
    if (param_19 != 0) {
      uStack00000070 = uStack00000070 | 0x80;
    }
    iVar11 = 0;
    do {
      iVar12 = -iVar11;
      uVar1 = (&uStack00000070)[iVar11];
      (&uStack00000070)[iVar11] = (&uStack00000077)[iVar12];
      iVar11 = iVar11 + 1;
      (&uStack00000077)[iVar12] = uVar1;
    } while (iVar11 < 4);
    return CONCAT17(uStack00000077,
                    CONCAT16(uStack00000076,
                             CONCAT15(uStack00000075,
                                      CONCAT14(in_stack_00000074,
                                               CONCAT13(uStack00000073,
                                                        CONCAT12(uStack00000072,
                                                                 CONCAT11(uStack00000071,
                                                                          uStack00000070)))))));
  }
  if (param_18 != 0) {
    param_17 = -param_17;
  }
  pcVar7 = (char *)((int)&uStack000000bc + (byte)uStack000000bc + 1);
  uVar6 = (uint)(byte)uStack000000bc;
  while ((uVar6 != 0 && (pcVar7 = pcVar7 + -1, *pcVar7 == '0'))) {
    param_16 = param_16 + 1;
    uVar6 = uVar6 - 1;
  }
  uStack000000bc._0_1_ = (byte)uVar6;
  if ((uVar6 & 0xff) == 0) {
    uStack000000bc._0_1_ = (byte)uStack000000bc + '\x01';
    uStack000000bc._1_1_ = 0x30;
  }
  param_17 = param_17 + param_16;
  if ((param_17 < -0x8000) || (0x7fff < param_17)) {
    *in_stack_000000f8 = 1;
  }
  if (*in_stack_000000f8 != 0) {
    if (param_18 != 0) {
      return 0;
    }
    if (param_19 == 0) {
      return CONCAT44(DAT_02093140,DAT_0209313c);
    }
    uVar17 = FUN_0200bc6c(0,0,DAT_0209313c,DAT_02093140);
    return uVar17;
  }
  uStack000000ba = (undefined2)param_17;
  uVar17 = FUN_0200a604();
  iVar11 = (int)((ulonglong)uVar17 >> 0x20);
  uVar5 = (undefined4)uVar17;
  cVar16 = iVar11 == 0;
  FUN_0200c3f0(0,0,uVar5);
  if (cVar16 == '\0') {
    cVar16 = '\0';
    FUN_0200c330(uVar5,iVar11,0,0x100000);
    if (cVar16 == '\0') {
      *in_stack_000000f8 = 1;
      goto LAB_02005762;
    }
  }
  bVar15 = false;
  bVar14 = false;
  FUN_0200c26c(uVar5,iVar11,0xffffffff,0x7fefffff);
  if (bVar15 && !bVar14) {
    *in_stack_000000f8 = 1;
    uVar17 = CONCAT44(DAT_02093140,DAT_0209313c);
  }
LAB_02005762:
  if ((param_19 != 0) && ((unaff_r7 & 0xe2c) != 0)) {
    uVar17 = FUN_0200bc6c(0,0,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
  }
  return uVar17;
}

