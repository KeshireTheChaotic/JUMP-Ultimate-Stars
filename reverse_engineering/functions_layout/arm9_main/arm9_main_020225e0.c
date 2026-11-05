
int * FUN_020225e0(int param_1,int param_2,int *param_3,uint param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int extraout_r1;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined1 auStack_138 [4];
  undefined1 auStack_134 [4];
  undefined1 auStack_130 [4];
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [4];
  undefined1 local_124 [256];
  
                    /* JUS-TAG strings=["Collision"] */
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x14) + 0x1c))
                            (*(int **)(param_1 + 0x14),param_1,param_2,param_3,param_4);
  if (piVar2 == (int *)0x0) {
    for (puVar8 = *(undefined4 **)(param_1 + 0x1c); puVar8 != (undefined4 *)0x0;
        puVar8 = (undefined4 *)*puVar8) {
      puVar9 = puVar8 + -8;
      piVar2 = (int *)(**(code **)(*(int *)puVar8[-3] + 0x54))();
      if ((piVar2 != (int *)0x0) && (param_4 == *(ushort *)(piVar2 + 4))) {
        uVar4 = (**(code **)(*piVar2 + 0x80))();
        iVar3 = FUN_02004c2c(uVar4,param_2);
        if (iVar3 == 0) {
          *param_3 = (int)puVar9;
          return piVar2;
        }
      }
      piVar2 = (int *)puVar8[-3];
      if ((piVar2 != (int *)0x0) &&
         (piVar2 = (int *)(**(code **)(*piVar2 + 0x1c))(piVar2,puVar9,param_2,auStack_128,param_4),
         piVar2 != (int *)0x0)) {
        *param_3 = (int)puVar9;
        return piVar2;
      }
    }
    puVar8 = *(undefined4 **)(param_1 + 0x5c);
    if (puVar8 != (undefined4 *)0x0) {
      if (((param_4 == DAT_020a0c54) &&
          (iVar3 = FUN_02004cec(param_2,s_Collision_0209d958,9), iVar3 == 0)) &&
         (*(char *)(param_2 + 9) == '\0')) {
        *param_3 = (int)(puVar8 + -0x12);
        piVar2 = (int *)(**(code **)(*(int *)puVar8[-0xd] + 0x54))();
        return piVar2;
      }
      iVar3 = FUN_02004cec(param_2,s_Collision_0209d958,9);
      if ((iVar3 == 0) && (*(char *)(param_2 + 9) == '.')) {
        piVar10 = puVar8 + -0x12;
        uVar4 = FUN_020326b0(param_2 + 10);
        piVar2 = (int *)(**(code **)(*piVar10 + 0x48))(piVar10,param_2 + 10,auStack_12c,uVar4);
        if (piVar2 != (int *)0x0) {
          *param_3 = (int)piVar10;
          return piVar2;
        }
      }
      iVar3 = 0;
      for (; puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)*puVar8) {
        if (iVar3 < 10) {
          if (param_4 == (ushort)(&DAT_020a1750)[iVar3]) {
            uVar14 = FUN_02004cec(param_2,s_Collision_0209d958,9);
            iVar7 = (int)((ulonglong)uVar14 >> 0x20);
            if ((int)uVar14 == 0) {
              iVar5 = (int)*(char *)(param_2 + 9);
              bVar12 = iVar5 == 0x5b;
              if (bVar12) {
                iVar7 = (int)*(char *)(param_2 + 10);
                iVar5 = iVar3 + 0x30;
              }
              bVar13 = bVar12 && iVar7 == iVar5;
              if (bVar12 && iVar7 == iVar5) {
                bVar13 = *(char *)(param_2 + 0xb) == ']';
              }
              bVar12 = false;
              if (bVar13) {
                bVar12 = *(char *)(param_2 + 0xc) == '\0';
              }
              if (bVar12) {
                *param_3 = (int)(puVar8 + -0x12);
                piVar2 = (int *)(**(code **)(*(int *)puVar8[-0xd] + 0x54))();
                return piVar2;
              }
            }
          }
          uVar14 = FUN_02004cec(param_2,s_Collision_0209d958,9);
          iVar7 = (int)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 == 0) {
            iVar5 = (int)*(char *)(param_2 + 9);
            bVar12 = iVar5 == 0x5b;
            if (bVar12) {
              iVar7 = (int)*(char *)(param_2 + 10);
              iVar5 = iVar3 + 0x30;
            }
            bVar13 = bVar12 && iVar7 == iVar5;
            if (bVar12 && iVar7 == iVar5) {
              bVar13 = *(char *)(param_2 + 0xb) == ']';
            }
            bVar12 = false;
            if (bVar13) {
              bVar12 = *(char *)(param_2 + 0xc) == '.';
            }
            if (bVar12) {
              piVar10 = puVar8 + -0x12;
              uVar4 = FUN_020326b0(param_2 + 0xd);
              piVar2 = (int *)(**(code **)(*piVar10 + 0x48))
                                        (piVar10,param_2 + 0xd,auStack_130,uVar4);
              if (piVar2 != (int *)0x0) {
                *param_3 = (int)piVar10;
                return piVar2;
              }
            }
          }
        }
        else {
          iVar7 = FUN_02004cec(param_2,s_Collision_0209d958,9);
          if (((iVar7 == 0) && (*(char *)(param_2 + 9) == '[')) &&
             (iVar7 = FUN_0200d12c(iVar3,10), (int)*(char *)(param_2 + 10) == iVar7 + 0x30)) {
            FUN_0200d12c(iVar3,10);
            iVar7 = extraout_r1 + 0x30;
            bVar12 = *(char *)(param_2 + 0xb) == iVar7;
            if (bVar12) {
              iVar7 = (int)*(char *)(param_2 + 0xc);
            }
            if (bVar12 && iVar7 == 0x5d) {
              if (*(char *)(param_2 + 0xd) == '\0') {
                *param_3 = (int)(puVar8 + -0x12);
                piVar2 = (int *)(**(code **)(*(int *)puVar8[-0xd] + 0x54))();
                return piVar2;
              }
              if (*(char *)(param_2 + 0xd) == '.') {
                piVar10 = puVar8 + -0x12;
                uVar4 = FUN_020326b0(param_2 + 0xe);
                piVar2 = (int *)(**(code **)(*piVar10 + 0x48))
                                          (piVar10,param_2 + 0xe,auStack_134,uVar4);
                if (piVar2 != (int *)0x0) {
                  *param_3 = (int)piVar10;
                  return piVar2;
                }
              }
            }
          }
        }
        iVar3 = iVar3 + 1;
      }
    }
    uVar6 = FUN_02004b04(param_2);
    for (uVar11 = 0; uVar11 < uVar6; uVar11 = uVar11 + 1) {
      bVar1 = *(byte *)(param_2 + uVar11);
      if (((bVar1 < 0x81) || (0x9c < bVar1)) &&
         (((bVar1 < 0xe0 || (0xfc < bVar1)) && (*(char *)(param_2 + uVar11) == '.')))) {
        FUN_02051890(param_2,local_124,uVar11);
        local_124[uVar11] = 0;
        for (puVar8 = *(undefined4 **)(param_1 + 0x1c); puVar8 != (undefined4 *)0x0;
            puVar8 = (undefined4 *)*puVar8) {
          puVar9 = puVar8 + -8;
          uVar4 = FUN_02012200(puVar9);
          iVar3 = FUN_02004c2c(uVar4,local_124);
          if ((iVar3 == 0) && (piVar2 = (int *)puVar8[-3], piVar2 != (int *)0x0)) {
            uVar4 = FUN_020326b0(param_2 + uVar11 + 1);
            piVar2 = (int *)(**(code **)(*piVar2 + 0x1c))
                                      (piVar2,puVar9,param_2 + uVar11 + 1,auStack_138,uVar4);
            if (piVar2 != (int *)0x0) {
              *param_3 = (int)puVar9;
              return piVar2;
            }
          }
        }
      }
    }
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

