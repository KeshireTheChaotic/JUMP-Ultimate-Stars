
int FUN_020084cc(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  char cVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_b4;
  undefined4 local_88;
  undefined4 local_5c;
  undefined4 local_44;
  int local_40;
  int local_3c [4];
  undefined8 local_2c;
  
  uVar9 = param_2 & 0x7fffffff;
  if (uVar9 < 0x3fe921fc) {
    *(undefined4 *)param_3 = param_1;
    *(uint *)((int)param_3 + 4) = param_2;
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((int)param_3 + 0xc) = 0;
    return 0;
  }
  if (uVar9 < 0x4002d97c) {
    if ((int)param_2 < 1) {
      uVar13 = FUN_0200b3a0(0x54400000,0x3ff921fb,param_1,param_2);
      uVar1 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if (uVar9 == 0x3ff921fb) {
        uVar13 = FUN_0200b3a0((int)uVar13,uVar1,0x1a600000,0x3dd0b461);
        uVar14 = FUN_0200b3a0(0x2e037073,0x3ba3198a);
        *param_3 = uVar14;
        uVar13 = FUN_0200bc6c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),*(undefined4 *)param_3,
                              *(undefined4 *)((int)param_3 + 4));
        uVar13 = FUN_0200b3a0(0x2e037073,0x3ba3198a,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      }
      else {
        uVar14 = FUN_0200b3a0(0x1a626331,0x3dd0b461);
        *param_3 = uVar14;
        uVar13 = FUN_0200bc6c((int)uVar13,uVar1,*(undefined4 *)param_3,
                              *(undefined4 *)((int)param_3 + 4));
        uVar13 = FUN_0200b3a0(0x1a626331,0x3dd0b461,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      }
      param_3[1] = uVar13;
      return -1;
    }
    uVar13 = FUN_0200bc6c(param_1,param_2,0x54400000,0x3ff921fb);
    uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar1 = (undefined4)uVar13;
    if (uVar9 == 0x3ff921fb) {
      uVar13 = FUN_0200bc6c(uVar1,uVar3,0x1a600000,0x3dd0b461);
      uVar1 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar14 = FUN_0200bc6c((int)uVar13,uVar1,0x2e037073,0x3ba3198a);
      *param_3 = uVar14;
      uVar13 = FUN_0200bc6c((int)uVar13,uVar1,*(undefined4 *)param_3,
                            *(undefined4 *)((int)param_3 + 4));
      uVar13 = FUN_0200bc6c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0x2e037073,0x3ba3198a);
    }
    else {
      uVar13 = FUN_0200bc6c(uVar1,uVar3,0x1a626331,0x3dd0b461);
      *param_3 = uVar13;
      uVar13 = FUN_0200bc6c(uVar1,uVar3,*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4));
      uVar13 = FUN_0200bc6c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0x1a626331,0x3dd0b461);
    }
    param_3[1] = uVar13;
    return 1;
  }
  iVar2 = (int)uVar9 >> 0x14;
  if (0x413921fb < uVar9) {
    if (0x7fefffff < uVar9) {
      uVar13 = FUN_0200bc6c(param_1,param_2,param_1,param_2);
      param_3[1] = uVar13;
      *(undefined4 *)param_3 = *(undefined4 *)(param_3 + 1);
      *(int *)((int)param_3 + 4) = (int)((ulonglong)uVar13 >> 0x20);
      return 0;
    }
    iVar11 = 0;
    local_40 = uVar9 + (iVar2 + -0x416) * -0x100000;
    piVar10 = local_3c;
    local_44 = param_1;
    do {
      FUN_0200b778(local_44,local_40);
      uVar13 = FUN_0200b850();
      *(undefined8 *)piVar10 = uVar13;
      uVar13 = FUN_0200bc6c(local_44,local_40,*piVar10);
      local_2c = FUN_0200b8cc(0,0x41700000,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      local_40 = (int)((ulonglong)local_2c >> 0x20);
      local_44 = (undefined4)local_2c;
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 2;
    } while (iVar11 < 2);
    iVar11 = 3;
    cVar12 = '\0';
    FUN_0200c390(0,0);
    if (cVar12 != '\0') {
      piVar10 = local_3c + 6;
      do {
        iVar11 = iVar11 + -1;
        cVar12 = iVar11 == 0;
        FUN_0200c390(0,0,piVar10[-4],piVar10[-3]);
        piVar10 = piVar10 + -2;
      } while (cVar12 != '\0');
    }
    iVar2 = FUN_02008b30(local_3c,param_3,iVar2 + -0x416,iVar11,2,&DAT_0208da08);
    if ((int)param_2 < 0) {
      uVar13 = FUN_0200bc6c(0,0,*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4));
      *param_3 = uVar13;
      uVar13 = FUN_0200bc6c(0,0,*(undefined4 *)(param_3 + 1),*(undefined4 *)((int)param_3 + 0xc));
      param_3[1] = uVar13;
      iVar2 = -iVar2;
    }
    return iVar2;
  }
  uVar13 = FUN_02009910(param_1,param_2);
  uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar14 = FUN_0200b8cc(0x6dc9c883,0x3fe45f30,(int)uVar13,uVar3);
  FUN_0200b3a0(0,0x3fe00000,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  iVar11 = FUN_0200b778();
  uVar14 = FUN_0200b850();
  uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar1 = (undefined4)uVar14;
  uVar14 = FUN_0200b8cc(0x54400000,0x3ff921fb,uVar1,uVar4);
  uVar13 = FUN_0200bc6c((int)uVar13,uVar3,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar3 = (undefined4)uVar13;
  uVar14 = FUN_0200b8cc(0x1a626331,0x3dd0b461,uVar1,uVar4);
  uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
  if ((iVar11 < 0x20) && (uVar9 != *(uint *)(&DAT_0208d988 + (iVar11 + -1) * 4))) {
    uVar15 = FUN_0200bc6c(uVar3,uVar5,(int)uVar14,uVar6);
    *param_3 = uVar15;
  }
  else {
    uVar15 = FUN_0200bc6c(uVar3,uVar5,(int)uVar14,uVar6);
    *param_3 = uVar15;
    if (0x10 < (int)(iVar2 - ((uint)((longlong)uVar15 >> 0x34) & 0x7ff))) {
      uVar14 = FUN_0200b8cc(0x1a600000,0x3dd0b461,uVar1,uVar4);
      uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar13 = FUN_0200bc6c(uVar3,uVar5,(int)uVar14,uVar7);
      uVar8 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar6 = (undefined4)uVar13;
      uVar15 = FUN_0200b8cc(0x2e037073,0x3ba3198a,uVar1,uVar4);
      uVar16 = FUN_0200bc6c(uVar3,uVar5,uVar6,uVar8);
      uVar14 = FUN_0200bc6c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar14,uVar7);
      uVar14 = FUN_0200bc6c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                            (int)((ulonglong)uVar14 >> 0x20));
      uVar15 = FUN_0200bc6c(uVar6,uVar8,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      *param_3 = uVar15;
      if (0x31 < (int)(iVar2 - ((uint)((longlong)uVar15 >> 0x34) & 0x7ff))) {
        uVar14 = FUN_0200b8cc(0x2e000000,0x3ba3198a,uVar1,uVar4);
        uVar3 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar13 = FUN_0200bc6c(uVar6,uVar8,(int)uVar14,uVar3);
        uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uVar15 = FUN_0200b8cc(0x252049c1,0x397b839a,uVar1,uVar4);
        uVar16 = FUN_0200bc6c(uVar6,uVar8,(int)uVar13,uVar5);
        uVar14 = FUN_0200bc6c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar14,uVar3);
        uVar14 = FUN_0200bc6c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                              (int)((ulonglong)uVar14 >> 0x20));
        uVar15 = FUN_0200bc6c((int)uVar13,uVar5,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
        *param_3 = uVar15;
      }
    }
  }
  local_b4 = (undefined4)((ulonglong)uVar14 >> 0x20);
  local_88 = (undefined4)uVar14;
  local_5c = (undefined4)uVar13;
  uVar13 = FUN_0200bc6c(local_5c,(int)((ulonglong)uVar13 >> 0x20),*(undefined4 *)param_3,
                        *(undefined4 *)((int)param_3 + 4));
  uVar13 = FUN_0200bc6c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),local_88,local_b4);
  param_3[1] = uVar13;
  if ((int)param_2 < 0) {
    uVar13 = FUN_0200bc6c(0,0,*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4));
    *param_3 = uVar13;
    uVar13 = FUN_0200bc6c(0,0,*(undefined4 *)(param_3 + 1),*(undefined4 *)((int)param_3 + 0xc));
    param_3[1] = uVar13;
    return -iVar11;
  }
  return iVar11;
}

