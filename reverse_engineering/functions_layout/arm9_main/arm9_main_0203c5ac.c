
void FUN_0203c5ac(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r5;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  int local_28;
  
  if (*(byte *)(param_1 + 0x958) < 2) {
    bVar13 = *(char *)(param_1 + 0x98c) != '\0';
    iVar6 = 0;
    if (bVar13) {
      iVar6 = *(int *)(param_1 + 0x8bc);
    }
    if (bVar13 && iVar6 != 0) {
      if ((DAT_020a0d78 & 1) == 0) {
        jus_Class_02094220::jus_Class_02094220(&DAT_020a13bc);
        FUN_0200f2b0(&DAT_020a13bc,jus_Class_02094220::~jus_Class_02094220,&DAT_020a1248);
        DAT_020a0d78 = DAT_020a0d78 | 1;
      }
      *(undefined2 *)(DAT_020a13c4 + 0x14) = 0;
      iVar6 = *(int *)(param_1 + 0x8ec);
      sVar4 = (short)(((int)(*(int *)(param_1 + 0x8e8) +
                            ((uint)(*(int *)(param_1 + 0x8e8) >> 6) >> 0x19)) >> 7) << 4);
      if (*(short *)(param_1 + 0x8ca) == 0x20) {
        sVar5 = (short)(((int)(iVar6 + ((uint)(iVar6 >> 4) >> 0x1b)) >> 5) << 2);
      }
      else {
        sVar5 = (short)(((int)(iVar6 + ((uint)(iVar6 >> 6) >> 0x19)) >> 7) << 4);
      }
      local_28 = CONCAT22(sVar5,sVar4);
      if (*(int *)(param_1 + 0x978) != local_28) {
        bVar13 = *(short *)(param_1 + 0x8ca) == 0x20;
        if (bVar13) {
          unaff_r5 = (int)sVar5;
        }
        iVar6 = (sVar4 + 0x30) * 0x10000;
        if (bVar13) {
          sVar5 = (short)unaff_r5 + 0x20;
        }
        else {
          unaff_r5 = (int)sVar5;
          sVar5 = sVar5 + 0x30;
        }
        sVar2 = *(short *)(param_1 + 0x97e);
        sVar3 = *(short *)(param_1 + 0x982);
        if (unaff_r5 < sVar2) {
          sVar2 = sVar2 - (short)unaff_r5;
          *(short *)(param_1 + 0x982) = sVar3 - sVar2;
          *(short *)(param_1 + 0x97e) = *(short *)(param_1 + 0x97e) - sVar2;
        }
        else if (sVar3 < sVar5) {
          *(short *)(param_1 + 0x97e) = sVar2 + (sVar5 - sVar3);
          *(short *)(param_1 + 0x982) = *(short *)(param_1 + 0x982) + (sVar5 - sVar3);
        }
        if (0x20 < *(ushort *)(param_1 + 0x8c8)) {
          sVar5 = *(short *)(param_1 + 0x97c);
          if (sVar4 < sVar5) {
            *(short *)(param_1 + 0x980) = *(short *)(param_1 + 0x980) - (sVar5 - sVar4);
            *(short *)(param_1 + 0x97c) = *(short *)(param_1 + 0x97c) - (sVar5 - sVar4);
          }
          else if ((int)*(short *)(param_1 + 0x980) < iVar6 >> 0x10) {
            sVar4 = (short)((uint)iVar6 >> 0x10) - *(short *)(param_1 + 0x980);
            *(short *)(param_1 + 0x97c) = sVar5 + sVar4;
            *(short *)(param_1 + 0x980) = *(short *)(param_1 + 0x980) + sVar4;
          }
        }
        iVar9 = *(int *)(param_1 + 0x97c);
        iVar6 = *(int *)(param_1 + 0x984);
        bVar13 = iVar9 == iVar6;
        if (bVar13) {
          iVar9 = *(int *)(param_1 + 0x980);
          iVar6 = *(int *)(param_1 + 0x988);
        }
        if (!bVar13 || iVar9 != iVar6) {
          FUN_0203c360(&DAT_020a13bc,param_1 + 0x97c);
          iVar6 = DAT_020a13c4;
          iVar9 = FUN_0201d5f4(DAT_020a13c4,param_1 + 0x984);
          if (iVar9 != 0) {
            FUN_0201d558(iVar6);
          }
          iVar6 = FUN_0203cf1c(&DAT_020a13bc);
          if (iVar6 == 0) {
            iVar6 = *(int *)(*(int *)(param_1 + 0x4b0) + 0xc);
            if ((DAT_020a0e38 & 1) == 0) {
              jus_Class_02094220::jus_Class_02094220(&DAT_020a13d4);
              FUN_0200f2b0(&DAT_020a13d4,jus_Class_02094220::~jus_Class_02094220,&DAT_020a13c8);
              DAT_020a0e38 = DAT_020a0e38 | 1;
            }
            for (; iVar6 != *(int *)(param_1 + 0x4b4); iVar6 = *(int *)(iVar6 + 0xc)) {
              FUN_0203cf2c(&DAT_020a13d4,&DAT_020a13bc);
              FUN_0203cf48(&DAT_020a13d4,iVar6 + 0x18);
              iVar9 = FUN_0203cf1c(&DAT_020a13d4);
              if (iVar9 == 0) {
                iVar9 = FUN_0203cf1c(iVar6 + 0x30);
                if (iVar9 != 0) {
                  *(int *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a8) + 1;
                }
                FUN_0201dfbc(*(undefined4 *)(iVar6 + 0x38),DAT_020a13dc);
              }
            }
          }
          FUN_02017004(param_1 + 0x984,param_1 + 0x97c);
        }
        *(int *)(param_1 + 0x978) = local_28;
      }
    }
    iVar6 = *(int *)(param_1 + 0x4a8);
    bVar13 = iVar6 == 0;
    if (bVar13) {
      iVar6 = *(int *)(param_1 + 0x4a4);
    }
    if (!bVar13 || iVar6 != 0) {
      if ((DAT_020a0c70 & 1) == 0) {
        jus_Class_02094220::jus_Class_02094220(&DAT_020a13ec);
        FUN_0200f2b0(&DAT_020a13ec,jus_Class_02094220::~jus_Class_02094220,&DAT_020a13e0);
        DAT_020a0c70 = DAT_020a0c70 | 1;
      }
      *(undefined2 *)(DAT_020a13f4 + 0x14) = 0;
      if ((DAT_020a0cf4 & 1) == 0) {
        jus_Class_02094220::jus_Class_02094220(&DAT_020a1404);
        FUN_0200f2b0(&DAT_020a1404,jus_Class_02094220::~jus_Class_02094220,&DAT_020a13f8);
        DAT_020a0cf4 = DAT_020a0cf4 | 1;
      }
      *(undefined2 *)(DAT_020a140c + 0x14) = 0;
      piVar12 = *(int **)(*(int *)(param_1 + 0x4b0) + 0xc);
      while( true ) {
        iVar6 = *(int *)(param_1 + 0x4a8);
        bVar13 = iVar6 == 0;
        if (bVar13) {
          iVar6 = *(int *)(param_1 + 0x4a4);
        }
        if (((bVar13 && iVar6 == 0) && (iVar6 = FUN_0203cf1c(&DAT_020a1404), iVar6 != 0)) ||
           (*(int **)(param_1 + 0x4b4) == piVar12)) break;
        iVar6 = FUN_0203cf1c(piVar12 + 9);
        if (iVar6 == 0) {
          if ((DAT_020a0cd8 & 1) == 0) {
            jus_Class_02094220::jus_Class_02094220(&DAT_020a1428);
            FUN_0200f2b0(&DAT_020a1428,jus_Class_02094220::~jus_Class_02094220,&DAT_020a141c);
            DAT_020a0cd8 = DAT_020a0cd8 | 1;
          }
          FUN_0203cf2c(&DAT_020a1428,piVar12 + 9);
          *(undefined2 *)(piVar12[0xb] + 0x14) = 0;
          FUN_0203cf64(&DAT_020a1428,piVar12 + 0xc);
          FUN_0201dfbc(DAT_020a140c,DAT_020a1430);
        }
        if ((char)piVar12[0xf] == '\0') {
          iVar6 = FUN_0203cf1c(piVar12 + 0xc);
          if ((iVar6 == 0) || (iVar6 = FUN_0203cf1c(&DAT_020a1404), iVar6 == 0)) {
            iVar6 = FUN_0203cf1c(&DAT_020a1404);
            if (iVar6 == 0) {
              iVar6 = FUN_0203cf1c(piVar12 + 0xc);
              if (iVar6 != 0) {
                *(int *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a8) + 1;
              }
              if ((DAT_020a0d14 & 1) == 0) {
                jus_Class_02094220::jus_Class_02094220(&DAT_020a1440);
                FUN_0200f2b0(&DAT_020a1440,jus_Class_02094220::~jus_Class_02094220,&DAT_020a1434);
                DAT_020a0d14 = DAT_020a0d14 | 1;
              }
              FUN_0203cf2c(&DAT_020a1440,&DAT_020a1404);
              FUN_0203cf48(&DAT_020a1440,piVar12 + 6);
              FUN_0201dfbc(piVar12[0xe],DAT_020a1448);
              FUN_0203cf64(&DAT_020a1404,&DAT_020a1440);
            }
            FUN_0203cf64(piVar12 + 0xc,&DAT_020a13ec);
            bVar1 = *(byte *)((int)piVar12 + 0x3e);
            if (bVar1 == 0) {
              FUN_0201e07c(piVar12[0xe],param_1 + 0x984);
            }
            else if (((bVar1 & 1) == 0) || ((bVar1 & 3) >> 1 != 0)) {
              if (((bVar1 & 1) == 0) && ((*(byte *)((int)piVar12 + 0x3e) & 3) >> 1 != 0)) {
                FUN_0201dc68(auStack_40,(int)*(short *)(param_1 + 0x984),0xffff8001,
                             (int)*(short *)(param_1 + 0x988),0x7fff);
                FUN_0201e07c(piVar12[0xe],auStack_40);
              }
            }
            else {
              FUN_0201dc68(auStack_38,0xffff8001,(int)*(short *)(param_1 + 0x986),0x7fff,
                           (int)*(short *)(param_1 + 0x98a));
              FUN_0201e07c(piVar12[0xe],auStack_38);
            }
            if (((char)piVar12[0xf] == '\0') && (iVar6 = FUN_0203cf1c(piVar12 + 0xc), iVar6 == 0)) {
              uVar7 = FUN_0201d4c4(piVar12[0xe]);
              FUN_02016ff0(&local_30,uVar7);
              uVar8 = ~(*(uint *)(param_1 + 0x8d4) - 1);
              uVar10 = (int)local_2c - 1U & uVar8;
              uVar8 = (int)local_30 & uVar8;
              if (uVar8 == uVar10) {
                (*(code *)piVar12[5])(piVar12[4],piVar12 + 0xc);
              }
              else if (*(uint *)(param_1 + 0x8d4) < uVar10 - uVar8) {
                FUN_0203cf2c(&DAT_020a2460 + DAT_020a0dc8 * 0xc,piVar12 + 0xc);
                FUN_0203cf2c(&DAT_020a2460 + (DAT_020a0dc8 + 1) * 0xc,piVar12 + 0xc);
                FUN_0201dc68(auStack_48,(int)local_2c - 1U & ~(*(int *)(param_1 + 0x8d4) - 1U),
                             (int)local_2e,(int)local_2c,(int)local_2a);
                FUN_0201e07c(*(undefined4 *)(&DAT_020a2468 + DAT_020a0dc8 * 0xc),auStack_48);
                uVar8 = (int)local_2c - 1U & ~(*(int *)(param_1 + 0x8d4) - 1U);
                FUN_0201dc68(auStack_50,uVar8 - *(int *)(param_1 + 0x8d4),(int)local_2e,uVar8,
                             (int)local_2a);
                FUN_0201e07c(*(undefined4 *)(&DAT_020a2474 + DAT_020a0dc8 * 0xc),auStack_50);
                FUN_0201dc68(auStack_58,(int)local_30,(int)local_2e,
                             ((int)local_2c - 1U & ~(*(int *)(param_1 + 0x8d4) - 1U)) -
                             *(int *)(param_1 + 0x8d4),(int)local_2a);
                FUN_0201e07c(piVar12[0xe],auStack_58);
                (*(code *)piVar12[5])(piVar12[4],piVar12 + 0xc);
                (*(code *)piVar12[5])(piVar12[4],&DAT_020a2460 + (DAT_020a0dc8 + 1) * 0xc);
                (*(code *)piVar12[5])(piVar12[4],&DAT_020a2460 + DAT_020a0dc8 * 0xc);
                DAT_020a0dc8 = DAT_020a0dc8 + 2;
              }
              else {
                FUN_0203cf2c(&DAT_020a2460 + DAT_020a0dc8 * 0xc,piVar12 + 0xc);
                FUN_0201dc68(auStack_60,(int)local_2c - 1U & ~(*(int *)(param_1 + 0x8d4) - 1U),
                             (int)local_2e,(int)local_2c,(int)local_2a);
                FUN_0201e07c(*(undefined4 *)(&DAT_020a2468 + DAT_020a0dc8 * 0xc),auStack_60);
                FUN_0201dc68(auStack_68,(int)local_30,(int)local_2e,
                             (int)local_2c - 1U & ~(*(int *)(param_1 + 0x8d4) - 1U),(int)local_2a);
                FUN_0201e07c(piVar12[0xe],auStack_68);
                (*(code *)piVar12[5])(piVar12[4],piVar12 + 0xc);
                (*(code *)piVar12[5])(piVar12[4],&DAT_020a2460 + DAT_020a0dc8 * 0xc);
                DAT_020a0dc8 = DAT_020a0dc8 + 1;
              }
            }
            iVar6 = *(int *)(param_1 + 0x4a8) + -1;
            bVar13 = iVar6 == 0;
            *(int *)(param_1 + 0x4a8) = iVar6;
            if (bVar13) {
              iVar6 = *(int *)(param_1 + 0x4a4);
            }
            if (!bVar13 || iVar6 != 0) {
              FUN_0201dfbc(DAT_020a13f4,piVar12[8]);
            }
            *(undefined2 *)(piVar12[0xe] + 0x14) = 0;
            if ((char)piVar12[0xf] == '\0') goto LAB_0203cea4;
            piVar11 = (int *)piVar12[3];
            FUN_0201cdb4(param_1 + 0x4ac,piVar12);
            if (piVar12 != (int *)0x0) {
              (**(code **)(*piVar12 + 4))();
            }
            *(int *)(param_1 + 0x8bc) = *(int *)(param_1 + 0x8bc) + -1;
            piVar12 = piVar11;
          }
          else {
            iVar6 = FUN_0203cf1c(piVar12 + 6);
            if (iVar6 == 0) {
              FUN_0201dfbc(DAT_020a13f4,piVar12[8]);
            }
LAB_0203cea4:
            piVar12 = (int *)piVar12[3];
          }
        }
        else {
          *(int *)(param_1 + 0x4a4) = *(int *)(param_1 + 0x4a4) + -1;
          FUN_0201dfbc(DAT_020a140c,piVar12[8]);
          piVar11 = (int *)piVar12[3];
          FUN_0201cdb4(param_1 + 0x4ac,piVar12);
          if (piVar12 != (int *)0x0) {
            (**(code **)(*piVar12 + 4))();
          }
          *(int *)(param_1 + 0x8bc) = *(int *)(param_1 + 0x8bc) + -1;
          piVar12 = piVar11;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x4a8) = 0;
  }
  return;
}

