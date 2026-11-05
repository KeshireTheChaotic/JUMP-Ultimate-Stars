
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME BattleAI_Deck::BattleAIDeck_Create [source-string] __FILE__="BattleAI_Deck.cpp"
   __FUNCTION__="BattleAIDeck_Create" lines=[148, 177, 199] passed to 3 source-location call(s) */

int BattleAI_Deck::BattleAIDeck_Create
              (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  short *psVar15;
  byte bVar16;
  short sVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  short sVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 auStack_128 [256];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iVar6 = thunk_FUN_0201a228(0x40,s_BattleAI_Deck_cpp_02181820,s_BattleAIDeck_Create_021817e8,0x94);
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    *(undefined4 *)(iVar6 + 0x20) = 0;
  }
  FUN_020517fc(iVar6,0,0x40);
  iVar7 = FUN_02020d90();
  (**(code **)(**(int **)(iVar7 + 4) + 0x94))(*(int **)(iVar7 + 4),0x80000);
  local_12c = 0x91000;
  FUN_02172e14(iVar7,&local_12c);
  FUN_02028384(*(undefined4 *)(iVar7 + 4),FUN_0217569c);
  (**(code **)(**(int **)(iVar7 + 4) + 0x24))(*(int **)(iVar7 + 4),iVar6);
  FUN_02174de4(iVar7,param_1);
  *(int *)(iVar6 + 0x10) = iVar7;
  iVar7 = *(int *)(_DAT_02172960 + param_2 * 4 + 0x118);
  *(int *)(iVar6 + 0xc) = iVar7;
  *(undefined1 *)(iVar6 + 0x38) = *(undefined1 *)(iVar7 + 0x5e0);
  bVar14 = *(byte *)(*(int *)(iVar6 + 0xc) + 0x5e1);
  *(byte *)(iVar6 + 0x39) = bVar14;
  uVar8 = thunk_FUN_0201a228(((uint)*(byte *)(iVar6 + 0x38) + (uint)bVar14) * 0xcc,
                             s_BattleAI_Deck_cpp_02181820,s_BattleAIDeck_Create_021817e8,0xb1);
  *(undefined4 *)(iVar6 + 8) = uVar8;
  FUN_020517fc(uVar8,0,((uint)*(byte *)(iVar6 + 0x38) + (uint)*(byte *)(iVar6 + 0x39)) * 0xcc);
  puVar20 = *(undefined4 **)(iVar6 + 8);
  puVar19 = *(undefined4 **)(*(int *)(iVar6 + 0xc) + 0x558);
  do {
    if (puVar19 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0x5c8);
      *(undefined1 *)(iVar6 + 0x36) = *(undefined1 *)(*(int *)(iVar6 + 0xc) + 0x5cd);
      *(undefined1 *)(iVar6 + 0x37) = *(undefined1 *)(*(int *)(iVar6 + 0xc) + 0x5cc);
      return iVar6;
    }
    bVar14 = *(byte *)(puVar19 + 0x10);
    if (bVar14 < 2) {
      iVar7 = thunk_FUN_0201a228(0xc,s_BattleAI_Deck_cpp_02181820,s_BattleAIDeck_Create_021817e8);
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 8) = 0;
      }
      FUN_020517fc(iVar7,0,0xc);
      *(undefined4 **)(iVar7 + 8) = puVar20;
      if (bVar14 == 0) {
        FUN_02037b98(iVar6 + 0x14,iVar7);
      }
      else {
        FUN_02037b98(iVar6 + 0x1c,iVar7);
        puVar20[0x2a] = puVar20[0x2a] | 0x200;
      }
      iVar7 = FUN_02020d90();
      (**(code **)(**(int **)(iVar7 + 4) + 0x94))(*(int **)(iVar7 + 4),0x80000);
      local_130 = 0x92000;
      FUN_02172e14(iVar7,&local_130);
      FUN_02028384(*(undefined4 *)(iVar7 + 4),FUN_02175ad0);
      (**(code **)(**(int **)(iVar7 + 4) + 0x24))(*(int **)(iVar7 + 4),puVar20);
      FUN_02174de4(iVar7,*(undefined4 *)(iVar6 + 0x10));
      FUN_020282f4(*(undefined4 *)(iVar7 + 4));
      puVar20[0xc] = iVar7;
      uVar8 = *(undefined4 *)(iVar6 + 0xc);
      *puVar20 = puVar19;
      *(byte *)((int)puVar20 + 0xc2) =
           (*(char *)((int)puVar19 + 0x43) + (*(byte *)((int)puVar19 + 0xe) & 0xf)) * '0' + '\x18';
      *(char *)((int)puVar20 + 0xc3) =
           (*(char *)(puVar19 + 0x11) + (char)((int)(*(byte *)((int)puVar19 + 0xe) & 0xf0) >> 4)) *
           '0' + '\x18';
      puVar20[0x19] = (int)*(short *)(puVar19 + 6);
      puVar20[0x18] = (int)*(short *)((int)puVar19 + 0x16);
      uVar4 = FUN_0200d12c(*(byte *)((int)puVar20 + 0xc2) - 0x18);
      FUN_0200d12c(*(byte *)((int)puVar20 + 0xc3) - 0x18,0x30);
      puVar9 = (undefined *)FUN_02076ce0(uVar8,uVar4);
      puVar20[1] = puVar9;
      if (bVar14 == 0) {
        puVar9 = &DAT_020924b0;
      }
      if (bVar14 != 0) {
        puVar9 = &DAT_02092700;
      }
      uVar8 = *(undefined4 *)(puVar9 + (uint)*(byte *)(puVar19[0xd] + 7) * 8);
      thunk_FUN_0207400c(auStack_128,DAT_021817d4);
      thunk_FUN_020741c4(auStack_128,uVar8);
      thunk_FUN_020741c4(auStack_128,DAT_021817d0);
      iVar7 = FUN_02033bb8(auStack_128);
      if (iVar7 == 0) {
        puVar20[3] = 0;
        puVar20[0xf] = 0;
      }
      else {
        piVar10 = (int *)FUN_02033410(auStack_128,0,0);
        if (piVar10[7] == 0) {
          (**(code **)(*piVar10 + 0x10))();
        }
        iVar7 = piVar10[7];
        piVar10 = *(int **)(iVar7 + 4);
        uVar8 = (**(code **)(*piVar10 + 0x2c))(piVar10,0);
        puVar20[3] = uVar8;
        puVar20[0xf] = iVar7;
      }
      if (bVar14 == 0) {
        iVar22 = 0;
        iVar7 = (*(byte *)(puVar20[1] + 8) - 3) * 2;
        puVar20[0x1d] =
             puVar20[0x1d] | ~(1 << (iVar7 + 0xeU & 0xff) | 1 << (iVar7 + 0xdU & 0xff)) & 0x7fe000U;
        do {
          uVar11 = FUN_02078514(*puVar20,iVar22);
          iVar7 = 0;
          do {
            if ((-1 < (char)(&DAT_0218114a)[iVar7]) &&
               ((uVar11 & 1 << (uint)(byte)(&DAT_02181158)[iVar7]) != 0)) {
              *(ushort *)((int)puVar20 + iVar22 * 2 + 0xac) =
                   *(ushort *)((int)puVar20 + iVar22 * 2 + 0xac) |
                   (ushort)(1 << (uint)(byte)(&DAT_02181158)[iVar7]);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0xe);
          uVar5 = FUN_0207853c(*puVar20,iVar22);
          iVar7 = iVar22 * 2;
          iVar22 = iVar22 + 1;
          *(undefined2 *)((int)puVar20 + iVar7 + 0xb4) = uVar5;
        } while (iVar22 < 4);
        iVar7 = 0;
        iVar22 = iVar7;
        do {
          while (iVar7 = iVar7 + 1, iVar7 < 4) {
            uVar3 = *(ushort *)((int)puVar20 + iVar22 * 2 + 0xb4);
            if (uVar3 < *(ushort *)((int)puVar20 + iVar7 * 2 + 0xb4)) {
              uVar5 = *(undefined2 *)((int)puVar20 + iVar22 * 2 + 0xac);
              *(undefined2 *)((int)puVar20 + iVar22 * 2 + 0xac) =
                   *(undefined2 *)((int)puVar20 + iVar7 * 2 + 0xac);
              *(undefined2 *)((int)puVar20 + iVar22 * 2 + 0xb4) =
                   *(undefined2 *)((int)puVar20 + iVar7 * 2 + 0xb4);
              *(undefined2 *)((int)puVar20 + iVar22 * 2 + 0xac) = uVar5;
              *(ushort *)((int)puVar20 + iVar22 * 2 + 0xb4) = uVar3;
            }
          }
          iVar7 = iVar22 + 1;
          iVar22 = iVar7;
        } while (iVar7 < 4);
        iVar7 = (int)*(char *)((int)puVar19 + 0x11) >> 0x1f;
        uVar8 = BattleAI_Move::BattleAIMove_Create
                          (puVar20[0xc],*(undefined1 *)(puVar19[0xd] + 7),
                           *(undefined4 *)(_DAT_02172960 + 0x160),(int)*(char *)(puVar19 + 4),
                           (int)((((uint)(*(char *)((int)puVar19 + 0x11) * 0x20000000 + iVar7) >>
                                   0x1d | iVar7 << 3) - iVar7) * 0x1000000) >> 0x18);
        puVar20[2] = uVar8;
        if (puVar20[3] != 0) {
          uVar11 = 1;
          do {
            if ((puVar20[0x1d] & 1 << (uVar11 & 0xff)) == 0) {
              uVar8 = FUN_021733b4((int)(char)uVar11);
              iVar7 = FUN_02174f58(puVar20[3],uVar8);
              if (iVar7 != 0) {
                psVar15 = (short *)(iVar7 + 0x9c);
                for (bVar16 = 0; bVar16 < *(byte *)(iVar7 + 0xc); bVar16 = bVar16 + 1) {
                  iVar22 = (int)*psVar15 + (int)psVar15[2];
                  if (iVar22 < 0xa0) {
                    if ((iVar22 < 0x50) || (0x9f < iVar22)) {
                      puVar20[0x21] = puVar20[0x21] | 1 << (uVar11 & 0xff);
                    }
                    else {
                      puVar20[0x22] = puVar20[0x22] | 1 << (uVar11 & 0xff);
                    }
                  }
                  else {
                    puVar20[0x23] = puVar20[0x23] | 1 << (uVar11 & 0xff);
                  }
                  iVar22 = (int)psVar15[1] - (int)psVar15[3];
                  if (iVar22 < 0xa0) {
                    if ((iVar22 < 0x50) || (0x9f < iVar22)) {
                      puVar20[0x24] = puVar20[0x24] | 1 << (uVar11 & 0xff);
                    }
                    else {
                      puVar20[0x25] = puVar20[0x25] | 1 << (uVar11 & 0xff);
                    }
                  }
                  else {
                    puVar20[0x26] = puVar20[0x26] | 1 << (uVar11 & 0xff);
                  }
                  iVar22 = (int)psVar15[1] + (int)psVar15[3];
                  if (iVar22 < 0xa0) {
                    if ((iVar22 < 0x50) || (0x9f < iVar22)) {
                      puVar20[0x27] = puVar20[0x27] | 1 << (uVar11 & 0xff);
                    }
                    else {
                      puVar20[0x28] = puVar20[0x28] | 1 << (uVar11 & 0xff);
                    }
                  }
                  else {
                    puVar20[0x29] = puVar20[0x29] | 1 << (uVar11 & 0xff);
                  }
                  psVar15 = psVar15 + 0x10;
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < 0x18);
        }
        if (puVar20[3] != 0) {
          uVar11 = 0xffffffff;
          sVar21 = 0x7fff;
          uVar23 = 1;
          do {
            if ((uVar23 != 9 && uVar23 != 10) && ((puVar20[0x1d] & 1 << (uVar23 & 0xff)) == 0)) {
              uVar8 = FUN_021733b4((int)(char)uVar23);
              iVar7 = FUN_02174f58(puVar20[3],uVar8);
              if (iVar7 != 0) {
                psVar15 = (short *)(iVar7 + 0x9c);
                sVar17 = 0x7fff;
                for (bVar16 = 0; bVar16 < *(byte *)(iVar7 + 0xc); bVar16 = bVar16 + 1) {
                  if ((0x4f < (int)*psVar15 + (int)psVar15[2]) && (psVar15[10] < sVar17)) {
                    sVar17 = psVar15[10];
                  }
                  psVar15 = psVar15 + 0x10;
                }
                if (sVar17 < sVar21) {
                  uVar11 = uVar23;
                  sVar21 = sVar17;
                }
              }
            }
            uVar23 = uVar23 + 1;
          } while ((int)uVar23 < 0xd);
          *(char *)((int)puVar20 + 0xc5) = (char)uVar11;
        }
        if ((*(byte *)((int)puVar19 + 0xf) & 0x10) != 0) {
          puVar20[0x1a] = puVar20[0x1a] | 0x17;
        }
      }
      iVar7 = 0;
      if (puVar20[3] != 0) {
        if (bVar14 == 0) {
          sVar21 = 4;
        }
        else {
          sVar21 = 5;
        }
        iVar22 = 0;
        do {
          if (bVar14 == 0) {
            if ((char)(&DAT_02181134)[iVar22] < '\0') break;
            if ((puVar20[0x1d] & 1 << (uint)(byte)(&DAT_02181134)[iVar22]) == 0) {
              iVar12 = (int)(char)(&DAT_0218113f)[iVar22];
              goto LAB_02174a5c;
            }
          }
          else {
            if (*(char *)(puVar20[1] + 8) == '\x01') {
              iVar12 = 0;
            }
            else {
              iVar12 = 1;
            }
LAB_02174a5c:
            iVar12 = puVar20[3] + *(int *)(puVar20[3] + iVar12 * 4 + 8);
            puVar20[iVar7 * 4 + 0x12] = 0;
            puVar20[iVar7 * 4 + 0x11] = 0;
            puVar20[iVar7 * 4 + 0x10] = 0;
            iVar24 = 0;
            while (iVar24 < (int)(uint)*(byte *)(iVar12 + 0xc)) {
              iVar13 = iVar12 + iVar24 * 0x20;
              iVar24 = iVar24 + 1;
              puVar20[iVar7 * 4 + 0x11] = puVar20[iVar7 * 4 + 0x11] + *(int *)(iVar13 + 0xa8);
              puVar20[iVar7 * 4 + 0x12] = puVar20[iVar7 * 4 + 0x12] + *(int *)(iVar13 + 0xac);
              uVar11 = (uint)*(char *)(iVar13 + 0xb6);
              if ((int)uVar11 < 0) {
                uVar11 = -uVar11;
              }
              puVar20[iVar7 * 4 + 0x10] = puVar20[iVar7 * 4 + 0x10] | 1 << (uVar11 & 0xff);
            }
            uVar11 = 0;
            *(short *)((int)puVar20 + iVar7 * 0x10 + 0x4e) =
                 (short)puVar20[iVar7 * 4 + 0x12] + (short)puVar20[iVar7 * 4 + 0x11] * 2;
            *(undefined2 *)(puVar20 + iVar7 * 4 + 0x13) =
                 *(undefined2 *)((int)puVar20 + iVar7 * 0x10 + 0x4e);
            do {
              if ((puVar20[iVar7 * 4 + 0x10] & 1 << (uVar11 & 0xff)) != 0) {
                *(short *)(puVar20 + iVar7 * 4 + 0x13) =
                     *(short *)(puVar20 + iVar7 * 4 + 0x13) +
                     sVar21 * (char)(&DAT_02181166)[uVar11 * 2];
                *(short *)((int)puVar20 + iVar7 * 0x10 + 0x4e) =
                     *(short *)((int)puVar20 + iVar7 * 0x10 + 0x4e) +
                     sVar21 * (char)(&DAT_02181167)[uVar11 * 2];
              }
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < 0x2a);
            if (bVar14 != 0) break;
            iVar7 = iVar7 + 1;
          }
          iVar22 = iVar22 + 1;
        } while( true );
      }
      uVar11 = 0;
      puVar20[0x1a] = 0;
      if (puVar20[3] != 0) {
        uVar23 = 1;
        do {
          if ((puVar20[0x1d] & 1 << (uVar23 & 0xff)) == 0) {
            uVar8 = FUN_021733b4((int)(char)uVar23);
            iVar7 = FUN_02174f58(puVar20[3],uVar8);
            if (iVar7 != 0) {
              if ((puVar20[0x2a] & 0x200) == 0) {
                if (uVar23 == 0xb) {
                  uVar11 = 0;
                }
                else if (0xc < (int)uVar23) {
                  uVar11 = 1;
                }
                if (*(short *)(iVar7 + 0x90) != 0) {
                  puVar20[0x1a] = puVar20[0x1a] | 1 << *(sbyte *)(uVar11 + 0x2181124);
                }
                if (*(short *)(iVar7 + 0x92) != 0) {
                  puVar20[0x1a] = puVar20[0x1a] | 1 << (uint)*(byte *)(uVar11 + 0x2181118);
                }
              }
              else {
                uVar11 = uVar23 + 1 & 0xff;
              }
              cVar2 = *(char *)(iVar7 + 0x85);
              bVar25 = cVar2 == '\0';
              if (bVar25) {
                cVar2 = *(char *)(iVar7 + 0x86);
              }
              bVar26 = bVar25 && cVar2 == '\0';
              if (bVar25 && cVar2 == '\0') {
                bVar26 = *(char *)(iVar7 + 0x87) == '\0';
              }
              if (!bVar26) {
                puVar20[0x1a] = puVar20[0x1a] | 1 << *(sbyte *)(uVar11 + 0x2181124);
              }
              if ('\0' < *(char *)(iVar7 + 0x8f)) {
                puVar20[0x1a] = puVar20[0x1a] | 1 << *(sbyte *)(uVar11 + 0x2181128);
              }
              for (uVar18 = 0; (char)(&DAT_021811bc)[uVar18] != -1; uVar18 = uVar18 + 1 & 0xff) {
                if (*(int *)(iVar7 + 0x7c) == (int)(char)(&DAT_021811bc)[uVar18]) {
                  puVar20[0x1a] = puVar20[0x1a] | 1 << *(sbyte *)(uVar11 + 0x2181128);
                  break;
                }
              }
              iVar22 = iVar7 + 0x9c;
              for (bVar14 = 0; bVar14 < *(byte *)(iVar7 + 0xc); bVar14 = bVar14 + 1) {
                if (*(char *)(iVar22 + 0x1b) != '\0') {
                  puVar20[0x1a] = puVar20[0x1a] | 1 << (uint)*(byte *)(uVar11 + 0x2181120);
                }
                if (*(int *)(iVar22 + 0xc) < 0) {
                  puVar20[0x1a] = puVar20[0x1a] | 1 << *(sbyte *)(uVar11 + 0x2181124);
                }
                if (*(char *)(iVar22 + 0x1a) == '\x06') {
                  puVar20[0x1a] = puVar20[0x1a] | 1 << (uint)*(byte *)(uVar11 + 0x218111c);
                }
                iVar22 = iVar22 + 0x20;
              }
            }
          }
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < 0x18);
      }
      puVar1 = puVar20 + 0x1a;
      puVar20 = puVar20 + 0x33;
      *(uint *)(iVar6 + 0x28) = *(uint *)(iVar6 + 0x28) | *puVar1;
    }
    puVar19 = (undefined4 *)*puVar19;
  } while( true );
}

