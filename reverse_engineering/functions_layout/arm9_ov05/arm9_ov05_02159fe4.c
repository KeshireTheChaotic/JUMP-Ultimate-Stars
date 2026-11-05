
void FUN_02159fe4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint extraout_r1;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint unaff_r11;
  undefined4 local_3c;
  undefined4 *local_38;
  int local_34 [4];
  
  iVar15 = *(int *)(param_1 + 4);
  uVar10 = *(undefined4 *)(iVar15 + 0x124);
  piVar12 = *(int **)(iVar15 + 0x10);
  local_34[3] = param_4;
  FUN_0200d12c(uVar10,5);
  uVar8 = extraout_r1 & 0xff;
  uVar2 = FUN_0200d12c(uVar10,5);
  uVar2 = uVar2 & 0xff;
  iVar13 = 0;
  if (param_2 != 1) {
    if (param_2 != 2) {
      if (param_2 != 4) {
        return;
      }
      func_0x021b7170(iVar15);
      if (*(char *)(*(int *)(piVar12[0x22] + 4) + 0xa8) != '\0') {
        return;
      }
      if (piVar12[3] == 0) {
        iVar13 = FUN_0215b660(piVar12);
        if (iVar13 == 0) {
          iVar13 = *(int *)(uVar2 * 0x14 + *piVar12 + uVar8 * 4 + 8);
          if (iVar13 == 0) {
            (*(code *)piVar12[0x82])(piVar12,piVar12[0x81],0,4,0);
            FUN_0207342c(0x78,1);
            return;
          }
          puVar14 = *(undefined2 **)(iVar13 + 0x34);
          FUN_0215ceec(piVar12);
          FUN_0215a6a8(piVar12,puVar14,
                       (int)(((*(byte *)(iVar13 + 0xe) & 0xf) - uVar8) * 0x1000000) >> 0x18,
                       (int)((((int)(*(byte *)(iVar13 + 0xe) & 0xf0) >> 4) - uVar2) * 0x1000000) >>
                       0x18);
          FUN_020770a8(*piVar12,uVar8,uVar2);
          FUN_0207907c(piVar12[1],*piVar12);
          FUN_0214cf50(piVar12[2],*piVar12,*puVar14,1,0x80);
          FUN_0215ce18(piVar12);
          FUN_0215a984(piVar12,param_1);
          FUN_0215aa08(piVar12,param_1,0x28,1);
          return;
        }
        local_3c = 0;
        iVar13 = FUN_020773ac(*piVar12,(int)*(char *)((int)piVar12 + 0x4db),uVar8,uVar2,&local_3c);
        if (iVar13 == 0) {
          FUN_0215b5d8(piVar12,param_1);
          FUN_0207342c(0x78,1);
          return;
        }
        FUN_020797e4(piVar12[1]);
        FUN_0215cd30(piVar12,0,0,(&DAT_0216fc38)[*(char *)((int)piVar12 + 0x4db)],1);
        (**(code **)(**(int **)(piVar12[0x56] + 4) + 0xd8))(*(int **)(piVar12[0x56] + 4),0);
        *(undefined1 *)((int)piVar12 + 0x4db) = 0xff;
        FUN_0215aa08(piVar12,param_1,0x2a,1);
        FUN_02159778(piVar12,0,1);
        FUN_0215aebc(piVar12,0);
        FUN_0215a938(piVar12,uVar8,uVar2,1);
        (*(code *)piVar12[0x82])(piVar12,piVar12[0x81],4,0,local_3c);
        return;
      }
      bVar1 = false;
      local_38 = (undefined4 *)0x0;
      if ((-1 < (int)(uVar8 + (int)*(char *)((int)piVar12 + 0x4d7))) &&
         (-1 < (int)(uVar2 + (int)(char)piVar12[0x136]))) {
        iVar3 = FUN_02076d00(piVar12[3]);
        iVar15 = 0;
        iVar13 = 0;
        iVar16 = 0;
        do {
          iVar17 = 0;
          do {
            if (*(char *)(iVar3 + iVar16 * 5 + iVar17) != '\0') {
              if (iVar13 <= iVar17) {
                iVar13 = iVar17;
              }
              if (iVar15 <= iVar16) {
                iVar15 = iVar16;
              }
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < 5);
          iVar16 = iVar16 + 1;
        } while (iVar16 < 4);
        uVar6 = uVar8 + (int)*(char *)((int)piVar12 + 0x4d7);
        if ((int)(iVar13 + uVar6) < 6) {
          uVar4 = uVar2 + (int)(char)piVar12[0x136];
          if ((int)(iVar15 + uVar4) < 5) {
            uVar8 = uVar6 & 0xff;
            uVar2 = uVar4 & 0xff;
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
      }
      if (bVar1) {
        iVar13 = 0;
        while ((iVar13 < 2 &&
               (unaff_r11 = FUN_02076dd8(*piVar12,(int)*(short *)piVar12[3],uVar8,uVar2,&local_38),
               (unaff_r11 & 0xf0000000) != 0))) {
          bVar1 = false;
          iVar15 = FUN_02076d00(piVar12[3]);
          iVar3 = 0;
          do {
            iVar16 = 0;
            do {
              if ((*(char *)(iVar15 + iVar3 * 5 + iVar16) != '\0') &&
                 (iVar17 = FUN_020770a8(*piVar12,uVar8 + iVar16 & 0xff,uVar2 + iVar3 & 0xff),
                 iVar17 != 0)) {
                bVar1 = true;
                for (iVar7 = 0; iVar7 < 6; iVar7 = iVar7 + 1) {
                  if (piVar12[iVar7 + 4] == 0) {
                    piVar12[iVar7 + 4] = iVar17;
                    FUN_0215b0b4(piVar12[iVar7 + 0x3f]);
                    break;
                  }
                }
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < 5);
            iVar3 = iVar3 + 1;
          } while (iVar3 < 4);
          if (!bVar1) {
            if ((unaff_r11 & 0x20000000) != 0) {
              FUN_0215c8f0(piVar12,0);
              bVar1 = false;
              goto LAB_0215a3e4;
            }
            if (iVar13 == 1) {
              bVar1 = false;
              goto LAB_0215a3e4;
            }
          }
          iVar13 = iVar13 + 1;
        }
        FUN_0215ceec(piVar12);
        FUN_0215a83c(piVar12);
        FUN_0207907c(piVar12[1],*piVar12);
        FUN_0215ce18(piVar12);
        FUN_0215cdcc(piVar12);
        FUN_0215aa08(piVar12,param_1,0x2a,1);
        (*(code *)piVar12[0x82])(piVar12,piVar12[0x81],4,0,local_38);
        iVar13 = FUN_020775a0(*piVar12,local_38);
        if (iVar13 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = local_38;
        }
        piVar12[0x62] = (int)puVar5;
        if ((unaff_r11 & 0x10) == 0) {
          if (piVar12[0x62] != 0) {
            FUN_0215b8f0(piVar12);
          }
        }
        else {
          func_0x021b65bc();
          puVar5 = local_38;
          FUN_020517fc(piVar12 + 0x6a,0,0x40);
          *(undefined1 *)(piVar12 + 0x134) = 0;
          *(undefined1 *)((int)piVar12 + 0x4d1) = 0;
          piVar11 = piVar12 + 0x6a;
          puVar9 = *(undefined4 **)(*piVar12 + 0x558);
          if (puVar9 != (undefined4 *)0x0) {
            for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)*puVar9) {
              iVar13 = FUN_02077178(*piVar12,puVar9,local_34);
              if (iVar13 != 0) {
                iVar13 = 0;
                if (puVar5 == puVar9) {
                  *piVar11 = (int)puVar9;
                  do {
                    iVar15 = iVar13 + 1;
                    piVar11[iVar13 + 1] = local_34[iVar13];
                    iVar13 = iVar15;
                  } while (iVar15 < 3);
                  piVar11 = piVar11 + 4;
                  *(char *)(piVar12 + 0x134) = (char)piVar12[0x134] + '\x01';
                }
                else {
                  do {
                    if (puVar5 == (undefined4 *)local_34[iVar13]) {
                      *piVar11 = (int)puVar9;
                      piVar11[iVar13 + 1] = local_34[iVar13];
                      piVar11 = piVar11 + 4;
                      *(char *)(piVar12 + 0x134) = (char)piVar12[0x134] + '\x01';
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < 3);
                }
              }
            }
          }
          FUN_0215bdd4(piVar12);
          FUN_0215a938(piVar12,(char)piVar12[0x138],*(undefined1 *)((int)piVar12 + 0x4e1),1);
        }
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
LAB_0215a3e4:
      if (bVar1) {
        return;
      }
      FUN_0207342c(0x78,2);
      return;
    }
    FUN_02159afc(piVar12,0);
    *(undefined1 *)((int)piVar12 + 0x4d6) = 0xff;
    iVar13 = 1;
  }
  uVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x128))();
  if ((uVar6 & 3) == 3) {
    iVar13 = 0;
  }
  iVar15 = FUN_0215b660(piVar12);
  if (iVar15 == 0) {
    FUN_0215a88c(piVar12,uVar8,uVar2,param_1,iVar13);
  }
  else {
    FUN_0215b67c(piVar12,param_1);
    if (iVar13 == 0) {
      FUN_0215a938(piVar12,uVar8,uVar2,0);
    }
  }
  return;
}

