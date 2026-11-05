
int * FUN_02022e30(int param_1,int param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  uint uStack_28;
  
                    /* JUS-TAG strings=["Collision"] */
  uStack_28 = param_4;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x14) + 0x14))
                            (*(int **)(param_1 + 0x14),param_1,param_2,param_3,param_4);
  if (piVar1 != (int *)0x0) {
    return piVar1;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x1c);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_1 + 0x5c);
      if (puVar6 != (undefined4 *)0x0) {
        if (((param_4 == DAT_020a0c54) &&
            (iVar2 = FUN_02004cec(param_2,s_Collision_0209d958,9), iVar2 == 0)) &&
           (*(char *)(param_2 + 9) == '\0')) {
          *param_3 = (int)(puVar6 + -0x12);
          piVar1 = (int *)(**(code **)(*(int *)puVar6[-0xd] + 0x54))();
          return piVar1;
        }
        if (((param_4 == DAT_020a0c58) &&
            (iVar2 = FUN_02004cec(param_2,&LAB_0209d964,8), iVar2 == 0)) &&
           (*(char *)(param_2 + 8) == '\0')) {
          *param_3 = (int)(puVar6 + -0x12);
          piVar1 = (int *)(**(code **)(*(int *)puVar6[-0xd] + 0x54))();
          return piVar1;
        }
        iVar2 = FUN_02004cec(param_2,s_Collision_0209d958,9);
        if ((iVar2 == 0) && (*(char *)(param_2 + 9) == '.')) {
          piVar8 = puVar6 + -0x12;
          uVar3 = FUN_020326b0(param_2 + 10);
          piVar1 = (int *)(**(code **)(*piVar8 + 0x48))(piVar8,param_2 + 10,auStack_30,uVar3);
          if (piVar1 != (int *)0x0) {
            *param_3 = (int)piVar8;
            return piVar1;
          }
        }
        iVar2 = FUN_02004cec(param_2,&LAB_0209d964,8);
        if ((iVar2 == 0) && (*(char *)(param_2 + 8) == '.')) {
          piVar8 = puVar6 + -0x12;
          uVar3 = FUN_020326b0(param_2 + 9);
          piVar1 = (int *)(**(code **)(*piVar8 + 0x48))(piVar8,param_2 + 9,auStack_34,uVar3);
          if (piVar1 != (int *)0x0) {
            *param_3 = (int)piVar8;
            return piVar1;
          }
        }
        iVar2 = 0;
        for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
          if (iVar2 < 10) {
            if (param_4 == (ushort)(&DAT_020a1750)[iVar2]) {
              uVar11 = FUN_02004cec(param_2,s_Collision_0209d958,9);
              iVar5 = (int)((ulonglong)uVar11 >> 0x20);
              if ((int)uVar11 == 0) {
                iVar4 = (int)*(char *)(param_2 + 9);
                bVar9 = iVar4 == 0x5b;
                if (bVar9) {
                  iVar5 = (int)*(char *)(param_2 + 10);
                  iVar4 = iVar2 + 0x30;
                }
                bVar10 = bVar9 && iVar5 == iVar4;
                if (bVar9 && iVar5 == iVar4) {
                  bVar10 = *(char *)(param_2 + 0xb) == ']';
                }
                bVar9 = false;
                if (bVar10) {
                  bVar9 = *(char *)(param_2 + 0xc) == '\0';
                }
                if (bVar9) {
                  *param_3 = (int)(puVar6 + -0x12);
                  piVar1 = (int *)(**(code **)(*(int *)puVar6[-0xd] + 0x54))();
                  return piVar1;
                }
              }
            }
            if (param_4 == (ushort)(&DAT_020a1764)[iVar2]) {
              uVar11 = FUN_02004cec(param_2,&LAB_0209d964,8);
              iVar5 = (int)((ulonglong)uVar11 >> 0x20);
              if ((int)uVar11 == 0) {
                iVar4 = (int)*(char *)(param_2 + 8);
                bVar9 = iVar4 == 0x5b;
                if (bVar9) {
                  iVar5 = (int)*(char *)(param_2 + 9);
                  iVar4 = iVar2 + 0x30;
                }
                bVar10 = bVar9 && iVar5 == iVar4;
                if (bVar9 && iVar5 == iVar4) {
                  bVar10 = *(char *)(param_2 + 10) == ']';
                }
                bVar9 = false;
                if (bVar10) {
                  bVar9 = *(char *)(param_2 + 0xb) == '\0';
                }
                if (bVar9) {
                  *param_3 = (int)(puVar6 + -0x12);
                  piVar1 = (int *)(**(code **)(*(int *)puVar6[-0xd] + 0x54))();
                  return piVar1;
                }
              }
            }
            uVar11 = FUN_02004cec(param_2,s_Collision_0209d958,9);
            iVar5 = (int)((ulonglong)uVar11 >> 0x20);
            if ((int)uVar11 == 0) {
              iVar4 = (int)*(char *)(param_2 + 9);
              bVar9 = iVar4 == 0x5b;
              if (bVar9) {
                iVar5 = (int)*(char *)(param_2 + 10);
                iVar4 = iVar2 + 0x30;
              }
              bVar10 = bVar9 && iVar5 == iVar4;
              if (bVar9 && iVar5 == iVar4) {
                bVar10 = *(char *)(param_2 + 0xb) == ']';
              }
              bVar9 = false;
              if (bVar10) {
                bVar9 = *(char *)(param_2 + 0xc) == '.';
              }
              if (bVar9) {
                piVar8 = puVar6 + -0x12;
                uVar3 = FUN_020326b0(param_2 + 0xd);
                piVar1 = (int *)(**(code **)(*piVar8 + 0x48))(piVar8,param_2 + 0xd,auStack_38,uVar3)
                ;
                if (piVar1 != (int *)0x0) {
                  *param_3 = (int)piVar8;
                  return piVar1;
                }
              }
            }
            uVar11 = FUN_02004cec(param_2,&LAB_0209d964,8);
            iVar5 = (int)((ulonglong)uVar11 >> 0x20);
            if ((int)uVar11 == 0) {
              iVar4 = (int)*(char *)(param_2 + 8);
              bVar9 = iVar4 == 0x5b;
              if (bVar9) {
                iVar5 = (int)*(char *)(param_2 + 9);
                iVar4 = iVar2 + 0x30;
              }
              bVar10 = bVar9 && iVar5 == iVar4;
              if (bVar9 && iVar5 == iVar4) {
                bVar10 = *(char *)(param_2 + 10) == ']';
              }
              bVar9 = false;
              if (bVar10) {
                bVar9 = *(char *)(param_2 + 0xb) == '.';
              }
              if (bVar9) {
                piVar8 = puVar6 + -0x12;
                uVar3 = FUN_020326b0(param_2 + 0xc);
                piVar1 = (int *)(**(code **)(*piVar8 + 0x48))(piVar8,param_2 + 0xc,auStack_3c,uVar3)
                ;
                if (piVar1 != (int *)0x0) {
                  *param_3 = (int)piVar8;
                  return piVar1;
                }
              }
            }
          }
          else {
            iVar5 = FUN_02004cec(param_2,s_Collision_0209d958,9);
            if (((iVar5 == 0) && (*(char *)(param_2 + 9) == '[')) &&
               (iVar5 = FUN_0200d12c(iVar2,10), (int)*(char *)(param_2 + 10) == iVar5 + 0x30)) {
              FUN_0200d12c(iVar2,10);
              iVar5 = extraout_r1 + 0x30;
              bVar9 = *(char *)(param_2 + 0xb) == iVar5;
              if (bVar9) {
                iVar5 = (int)*(char *)(param_2 + 0xc);
              }
              if (bVar9 && iVar5 == 0x5d) {
                if (*(char *)(param_2 + 0xd) == '\0') {
                  *param_3 = (int)(puVar6 + -0x12);
                  piVar1 = (int *)(**(code **)(*(int *)puVar6[-0xd] + 0x54))();
                  return piVar1;
                }
                if (*(char *)(param_2 + 0xd) == '.') {
                  piVar8 = puVar6 + -0x12;
                  uVar3 = FUN_020326b0(param_2 + 0xe);
                  piVar1 = (int *)(**(code **)(*piVar8 + 0x48))
                                            (piVar8,param_2 + 0xe,auStack_40,uVar3);
                  if (piVar1 != (int *)0x0) {
                    *param_3 = (int)piVar8;
                    return piVar1;
                  }
                }
              }
            }
            iVar5 = FUN_02004cec(param_2,&LAB_0209d964,8);
            if (((iVar5 == 0) && (*(char *)(param_2 + 8) == '[')) &&
               (iVar5 = FUN_0200d12c(iVar2,10), (int)*(char *)(param_2 + 9) == iVar5 + 0x30)) {
              FUN_0200d12c(iVar2,10);
              iVar5 = extraout_r1_00 + 0x30;
              bVar9 = *(char *)(param_2 + 10) == iVar5;
              if (bVar9) {
                iVar5 = (int)*(char *)(param_2 + 0xb);
              }
              if (bVar9 && iVar5 == 0x5d) {
                if (*(char *)(param_2 + 0xc) == '\0') {
                  *param_3 = (int)(puVar6 + -0x12);
                  piVar1 = (int *)(**(code **)(*(int *)puVar6[-0xd] + 0x54))();
                  return piVar1;
                }
                if (*(char *)(param_2 + 0xc) == '.') {
                  piVar8 = puVar6 + -0x12;
                  uVar3 = FUN_020326b0(param_2 + 0xd);
                  piVar1 = (int *)(**(code **)(*piVar8 + 0x48))
                                            (piVar8,param_2 + 0xd,auStack_44,uVar3);
                  if (piVar1 != (int *)0x0) {
                    *param_3 = (int)piVar8;
                    return piVar1;
                  }
                }
              }
            }
          }
          iVar2 = iVar2 + 1;
        }
      }
      return (int *)0x0;
    }
    puVar7 = puVar6 + -8;
    piVar1 = (int *)(**(code **)(*(int *)puVar6[-3] + 0x54))();
    if (piVar1 != (int *)0x0) {
      if (param_4 == *(ushort *)(piVar1 + 4)) {
        uVar3 = (**(code **)(*piVar1 + 0x80))();
        iVar2 = FUN_02004c2c(uVar3,param_2);
        if (iVar2 == 0) goto LAB_02022eec;
      }
      if (param_4 == *(ushort *)((int)piVar1 + 0x12)) {
        uVar3 = (**(code **)(*piVar1 + 0x84))();
        iVar2 = FUN_02004c2c(uVar3,param_2);
        if (iVar2 == 0) {
LAB_02022eec:
          *param_3 = (int)puVar7;
          return piVar1;
        }
      }
    }
    piVar1 = (int *)puVar6[-3];
    if ((piVar1 != (int *)0x0) &&
       (piVar1 = (int *)(**(code **)(*piVar1 + 0x14))(piVar1,puVar7,param_2,auStack_2c,param_4),
       piVar1 != (int *)0x0)) {
      *param_3 = (int)puVar7;
      return piVar1;
    }
    puVar6 = (undefined4 *)*puVar6;
  } while( true );
}

