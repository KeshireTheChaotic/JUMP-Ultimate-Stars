
void FUN_027e4400(int param_1)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  ushort uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined1 auStack_268 [6];
  undefined1 auStack_262 [6];
  undefined1 auStack_25c [512];
  undefined1 auStack_5c [10];
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined1 auStack_48 [48];
  
  psVar2 = DAT_027f97f0;
  iVar3 = DAT_027f97ec;
  if (*DAT_027f97f0 == 2) {
    FUN_037fe788(*(undefined4 *)(param_1 + 4),DAT_027f97ec + 0x10,0xc0);
    if ((*(ushort *)(iVar3 + 0x4c) < 0x10) || ((*(byte *)(iVar3 + 0x5b) & 1) != 0)) {
      uVar1 = 1 << (*(ushort *)(iVar3 + 0x46) & 0xff);
      if (((uVar1 & (ushort)psVar2[0xfa]) == 0) || (((int)uVar1 >> 1 & 0x1fffU) == 0)) {
        puVar6 = (undefined2 *)FUN_03808074();
        *puVar6 = 0xc;
        puVar6[1] = 6;
        puVar6[4] = 6;
        FUN_038080d0();
      }
      else {
        puVar6 = (undefined2 *)FUN_03808074();
        *puVar6 = 0xc;
        puVar6[1] = 0;
        puVar6[4] = 6;
        FUN_038080d0();
        if (psVar2[0xf6] == 1) {
          if ((*(ushort *)(iVar3 + 0x3e) & 1) == 0) {
            psVar2[0xf6] = 2;
          }
          else {
            psVar2[0xf6] = 1;
          }
        }
        else if ((*(ushort *)(iVar3 + 0x3e) & 2) == 0) {
          psVar2[0xf6] = 1;
        }
        else {
          psVar2[0xf6] = 2;
        }
        if ((*(ushort *)(iVar3 + 0x3c) & 0x20) == 0) {
          psVar2[0xf7] = 0;
        }
        else {
          psVar2[0xf7] = 1;
        }
        if ((*(ushort *)(iVar3 + 0x3c) & 0x10) == 0) {
          psVar2[0xcc] = 0;
          psVar2[0xcd] = 0;
        }
        else {
          psVar2[0xcc] = 1;
          psVar2[0xcd] = 0;
        }
        if (*(short *)(iVar3 + 0x4c) == 0) {
          psVar2[0x73] = 3;
        }
        else {
          psVar2[0x73] = 2;
        }
        iVar7 = FUN_027e0378(0xc,auStack_25c);
        if (iVar7 != 0) {
          iVar7 = FUN_027e2350(auStack_25c,0);
          if (*(short *)(iVar7 + 4) == 0) {
            if (*(ushort *)(iVar3 + 0x4c) < 0x10) {
              if (*(short *)(iVar3 + 0x42) == 0) {
                uVar5 = 1;
              }
              else {
                sVar4 = FUN_038078c0(10000);
                uVar5 = sVar4 + 1;
              }
              if (0xff < uVar5) {
                uVar5 = 0xff;
              }
              iVar7 = FUN_027e25bc(auStack_25c,uVar5);
              if (*(short *)(iVar7 + 4) != 0) {
                FUN_027e43c4(0x20b,*(short *)(iVar7 + 4),0);
                return;
              }
            }
            iVar7 = FUN_027e21d4(auStack_25c);
            if (*(short *)(iVar7 + 4) == 0) {
              *psVar2 = 3;
              bVar10 = *(int *)(param_1 + 0x20) != 0;
              iVar7 = FUN_027e2d1c(auStack_25c,bVar10,0,1);
              if (*(short *)(iVar7 + 4) == 0) {
                psVar2[99] = (ushort)bVar10;
                FUN_037fe788(iVar3 + 0x10,auStack_5c,0x40);
                if (psVar2[0x73] == 2) {
                  local_52 = 0x20;
                  local_50 = (undefined2)*(undefined4 *)(iVar3 + 0x54);
                  local_4e = (undefined2)((uint)*(undefined4 *)(iVar3 + 0x54) >> 0x10);
                  local_4c = *(undefined2 *)(iVar3 + 0x58);
                  local_4a = 0;
                  FUN_037fe788(param_1 + 8,auStack_48,0x18);
                }
                iVar7 = FUN_027e2bdc(auStack_25c,2000,auStack_5c);
                if ((*(short *)(iVar7 + 4) == 0) && (*(short *)(iVar7 + 6) == 0)) {
                  FUN_037fe788(iVar7 + 8,psVar2 + 0xc5,6);
                  FUN_037fe788(psVar2 + 0xc5,auStack_268,6);
                  iVar7 = FUN_027e2b58(auStack_25c,auStack_268,*(undefined2 *)(param_1 + 0x26),2000)
                  ;
                  sVar4 = *(short *)(iVar7 + 4);
                  if ((sVar4 == 0xc) && (*(short *)(iVar7 + 6) == 0x13)) {
                    puVar6 = (undefined2 *)FUN_03808074();
                    *puVar6 = 0xc;
                    puVar6[1] = 0xc;
                    puVar6[4] = 6;
                    FUN_038080d0();
                  }
                  else if ((sVar4 == 0) && (*(short *)(iVar7 + 6) == 0)) {
                    FUN_037fe788(psVar2 + 0xc5,auStack_262,6);
                    iVar7 = FUN_027e2a54(auStack_25c,auStack_262,1,2000);
                    uVar8 = OS_DisableInterrupts();
                    if ((*(short *)(iVar7 + 4) == 0xc) && (*(short *)(iVar7 + 6) == 0x13)) {
                      OS_RestoreInterrupts();
                      puVar6 = (undefined2 *)FUN_03808074();
                      *puVar6 = 0xc;
                      puVar6[1] = 0xc;
                      puVar6[4] = 6;
                      FUN_038080d0();
                    }
                    else if ((*(short *)(iVar7 + 4) == 0) && (*(short *)(iVar7 + 6) == 0)) {
                      psVar2[0xc4] = *(short *)(iVar7 + 8);
                      psVar2[0x5d] = *(short *)(iVar3 + 0x58);
                      MIi_CpuClear16(1,psVar2 + 0xfc,0x10);
                      iVar7 = (int)(*(ushort *)(iVar3 + 0x12) & 0xff) >> 2;
                      if ((*(ushort *)(iVar3 + 0x12) & 2) == 0) {
                        iVar7 = iVar7 + 0x19;
                      }
                      sVar4 = FUN_027e0298(iVar7);
                      psVar2[0x5e] = sVar4;
                      FUN_027e02fc(iVar7);
                      uVar9 = OS_DisableInterrupts();
                      psVar2[0xc1] = 1;
                      psVar2[0x43] = 1;
                      if (*(int *)(psVar2 + 0x3de) != 0 || *(int *)(psVar2 + 0x3dc) != 0) {
                        uVar11 = OS_GetTick();
                        *(uint *)(psVar2 + 0x39c) = (uint)uVar11 | 1;
                        *(int *)(psVar2 + 0x39e) = (int)((ulonglong)uVar11 >> 0x20);
                      }
                      *psVar2 = 8;
                      if ((*(byte *)(iVar3 + 0x5b) & 4) == 0) {
                        sVar4 = 0;
                      }
                      else {
                        sVar4 = 0x2a;
                      }
                      FUN_027e00b0(*(short *)(iVar3 + 0x5c) + sVar4);
                      if ((*(byte *)(iVar3 + 0x5b) & 4) == 0) {
                        sVar4 = 0;
                      }
                      else {
                        sVar4 = 6;
                      }
                      FUN_027e0060(*(short *)(iVar3 + 0x5e) + sVar4);
                      OS_RestoreInterrupts(uVar9);
                      psVar2[0x61] = 1;
                      puVar6 = (undefined2 *)FUN_03808074();
                      *puVar6 = 0xc;
                      puVar6[1] = 0;
                      puVar6[4] = 7;
                      puVar6[5] = psVar2[0xc4];
                      FUN_037fe788(psVar2 + 0xc5,puVar6 + 8,6);
                      puVar6[0xb] = psVar2[0x18];
                      puVar6[0xc] = psVar2[0x19];
                      FUN_038080d0(puVar6);
                      OS_RestoreInterrupts(uVar8);
                    }
                    else {
                      OS_RestoreInterrupts(uVar8);
                      FUN_027e43c4(6,*(undefined2 *)(iVar7 + 4),*(undefined2 *)(iVar7 + 6));
                    }
                  }
                  else {
                    FUN_027e43c4(4,sVar4,*(undefined2 *)(iVar7 + 6));
                  }
                }
                else {
                  FUN_027e43c4(3,*(short *)(iVar7 + 4),*(undefined2 *)(iVar7 + 6));
                }
              }
              else {
                FUN_027e43c4(1,*(short *)(iVar7 + 4),0);
              }
            }
            else {
              FUN_027e43c4(0x303,*(short *)(iVar7 + 4),0);
            }
          }
          else {
            FUN_027e43c4(0x216,*(short *)(iVar7 + 4),0);
          }
        }
      }
    }
    else {
      puVar6 = (undefined2 *)FUN_03808074();
      *puVar6 = 0xc;
      puVar6[1] = 0xb;
      puVar6[4] = 6;
      FUN_038080d0();
    }
  }
  else {
    puVar6 = (undefined2 *)FUN_03808074();
    *puVar6 = 0xc;
    puVar6[1] = 3;
    puVar6[4] = 6;
    FUN_038080d0();
  }
  return;
}

