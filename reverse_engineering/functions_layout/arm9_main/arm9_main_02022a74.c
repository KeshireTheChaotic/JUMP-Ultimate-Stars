
int * FUN_02022a74(int param_1,int param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x14) + 0x24))
                            (*(int **)(param_1 + 0x14),param_1,param_2,param_3,param_4);
  if (piVar1 == (int *)0x0) {
    for (puVar6 = *(undefined4 **)(param_1 + 0x1c); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)*puVar6) {
      puVar8 = puVar6 + -8;
      piVar1 = (int *)(**(code **)(*(int *)puVar6[-3] + 0x54))();
      if ((piVar1 != (int *)0x0) && (param_4 == *(ushort *)((int)piVar1 + 0x12))) {
        uVar3 = (**(code **)(*piVar1 + 0x84))();
        iVar2 = FUN_02004c2c(uVar3,param_2);
        if (iVar2 == 0) {
          *param_3 = (int)puVar8;
          return piVar1;
        }
      }
      piVar1 = (int *)puVar6[-3];
      if ((piVar1 != (int *)0x0) &&
         (piVar1 = (int *)(**(code **)(*piVar1 + 0x24))(piVar1,puVar8,param_2,auStack_28,param_4),
         piVar1 != (int *)0x0)) {
        *param_3 = (int)puVar8;
        return piVar1;
      }
    }
    puVar6 = *(undefined4 **)(param_1 + 0x5c);
    if (puVar6 != (undefined4 *)0x0) {
      if (((param_4 == DAT_020a0c58) && (iVar2 = FUN_02004cec(param_2,&LAB_0209d964,8), iVar2 == 0))
         && (*(char *)(param_2 + 8) == '\0')) {
        *param_3 = (int)(puVar6 + -0x12);
        piVar1 = (int *)(**(code **)(*(int *)puVar6[-0xd] + 0x54))();
        return piVar1;
      }
      iVar2 = FUN_02004cec(param_2,&LAB_0209d964,8);
      if ((iVar2 == 0) && (*(char *)(param_2 + 8) == '.')) {
        piVar7 = puVar6 + -0x12;
        uVar3 = FUN_020326b0(param_2 + 9);
        piVar1 = (int *)(**(code **)(*piVar7 + 0x48))(piVar7,param_2 + 9,auStack_2c,uVar3);
        if (piVar1 != (int *)0x0) {
          *param_3 = (int)piVar7;
          return piVar1;
        }
      }
      iVar2 = 0;
      for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
        if (iVar2 < 10) {
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
              piVar7 = puVar6 + -0x12;
              uVar3 = FUN_020326b0(param_2 + 0xc);
              piVar1 = (int *)(**(code **)(*piVar7 + 0x48))(piVar7,param_2 + 0xc,auStack_30,uVar3);
              if (piVar1 != (int *)0x0) {
                *param_3 = (int)piVar7;
                return piVar1;
              }
            }
          }
        }
        else {
          iVar5 = FUN_02004cec(param_2,&LAB_0209d964,8);
          if (((iVar5 == 0) && (*(char *)(param_2 + 8) == '[')) &&
             (iVar5 = FUN_0200d12c(iVar2,10), (int)*(char *)(param_2 + 9) == iVar5 + 0x30)) {
            FUN_0200d12c(iVar2,10);
            iVar5 = extraout_r1 + 0x30;
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
                piVar7 = puVar6 + -0x12;
                uVar3 = FUN_020326b0(param_2 + 0xd);
                piVar1 = (int *)(**(code **)(*piVar7 + 0x48))(piVar7,param_2 + 0xd,auStack_34,uVar3)
                ;
                if (piVar1 != (int *)0x0) {
                  *param_3 = (int)piVar7;
                  return piVar1;
                }
              }
            }
          }
        }
        iVar2 = iVar2 + 1;
      }
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

