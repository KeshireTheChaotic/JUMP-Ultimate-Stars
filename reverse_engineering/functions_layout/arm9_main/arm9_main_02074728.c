
void FUN_02074728(int *param_1,int param_2,int param_3,undefined4 param_4,byte param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined1 auStack_44 [32];
  
                    /* JUS-TAG strings=["c.aar","chr/"] */
  uVar12 = *(uint *)(&DAT_020924b4 + param_3 * 8);
  cVar1 = (&DAT_0209249c)[param_2];
  uVar13 = uVar12 & 0xffff00;
  param_1[0x22] = uVar13;
  *(char *)(param_1 + 0x23) = (char)param_2;
  *(char *)((int)param_1 + 0x8d) = (char)param_3;
  iVar2 = FUN_02074c48((int)cVar1 + uVar13);
  if (iVar2 == 0) {
    thunk_FUN_0207400c(auStack_44,&DAT_0209f1e8);
    uVar6 = *(undefined4 *)(&DAT_020924b0 + param_3 * 8);
    thunk_FUN_020741c4(auStack_44);
    iVar2 = FUN_020101f4(auStack_44,0);
    *param_1 = iVar2;
    thunk_FUN_020741c4(auStack_44,s_c_aar_0209f1f0);
    piVar11 = (int *)0x0;
    iVar2 = FUN_02033bb8(auStack_44);
    if (iVar2 != 0) {
      piVar11 = (int *)FUN_020101f4(auStack_44,0);
    }
    iVar2 = FUN_0203b3e4();
    FUN_0206c498(*(undefined4 *)(iVar2 + 0x88));
    uVar3 = *(uint *)(&DAT_020924b4 + param_3 * 8) & 0xffff00;
    iVar2 = FUN_02074c48();
    param_1[0x15] = iVar2;
    FUN_0206c54c();
    iVar2 = FUN_0203b404();
    FUN_0206c498(*(undefined4 *)(iVar2 + 0x88));
    uVar14 = FUN_02074c48(uVar3 + 0x40);
    uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
    iVar2 = (int)uVar14;
    if (iVar2 != 0) {
      uVar7 = (uint)param_5;
    }
    param_1[4] = iVar2;
    if (iVar2 != 0 && uVar7 != 0) {
      (**(code **)(**(int **)(iVar2 + 4) + 0x50))(*(int **)(iVar2 + 4),1);
    }
    iVar2 = FUN_0201088c(FUN_02074540,uVar13 + 0x38);
    if (iVar2 == 0) {
      iVar2 = FUN_02074c74(uVar13 + 0x38);
      param_1[0x1f] = iVar2;
      if (iVar2 != 0) {
        iVar2 = uVar13 + 0x38;
        do {
          iVar4 = FUN_02023894(*(undefined4 *)(param_1[0x1f] + 4),iVar2,0xffffffff);
          iVar2 = iVar2 + 1;
        } while (iVar4 == 0);
        (**(code **)(**(int **)(*(int *)(param_1[0x1f] + 4) + 0x68) + 0xdc))();
        FUN_020282f4(*(undefined4 *)(param_1[0x1f] + 4));
        (**(code **)(**(int **)(param_1[0x1f] + 4) + 0xd8))(*(int **)(param_1[0x1f] + 4),0);
        if (uVar13 == 0x7c100) {
          FUN_020107f4(FUN_02074540,0x7c138,0x2f,param_1[0x1f]);
        }
        else if (uVar13 == 0xa4500) {
          FUN_020107f4(FUN_02074540,0xa4538,0x2f,param_1[0x1f]);
        }
        else {
          FUN_020107f4(FUN_02074540,uVar13 + 0x38,0x28,param_1[0x1f]);
        }
      }
    }
    (**(code **)(**(int **)(*param_1 + 8) + 0x50))();
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 0xc))();
    }
    uVar8 = *(uint *)(&DAT_020924b4 + param_3 * 8);
    uVar7 = 0;
    do {
      iVar2 = FUN_02074c48(uVar7 + (uVar8 & 0xffff00) + 0x41);
      uVar9 = uVar7 + 1;
      param_1[uVar7 + 5] = iVar2;
      uVar7 = uVar9;
    } while (uVar9 < 0x10);
    FUN_0206c54c();
    if (*(char *)((int)param_1 + 0x8f) != '\0') {
      thunk_FUN_0207400c(auStack_44,&DAT_0209f1e8);
      thunk_FUN_020741c4(auStack_44,uVar6);
      thunk_FUN_020741c4(auStack_44,(&PTR_DAT_0209f198)[param_2]);
      iVar2 = FUN_020101f4(auStack_44,0);
      param_1[1] = iVar2;
      iVar2 = FUN_0203b404();
      FUN_0206c498(*(undefined4 *)(iVar2 + 0x88));
      uVar7 = 0;
      do {
        iVar2 = FUN_02074c48(uVar7 + (uVar8 & 0xffff00) + param_2 * 0x20);
        uVar9 = uVar7 + 1;
        param_1[uVar7 + 0x17] = iVar2;
        uVar7 = uVar9;
      } while (uVar9 < 8);
      iVar2 = uVar3 + param_2 * 0x20;
      uVar10 = 0x20;
      if (uVar3 == 0x7c100 && param_2 == 3) {
        iVar2 = iVar2 + 7;
        uVar10 = 0x19;
      }
      else if (uVar13 == 0xa4500 && param_2 == 3) {
        iVar2 = iVar2 + 7;
        uVar10 = 0x19;
      }
      iVar5 = FUN_02074c74(iVar2);
      param_1[0x20] = iVar5;
      iVar4 = iVar2;
      if (iVar5 != 0) {
        do {
          iVar5 = FUN_02023894(*(undefined4 *)(param_1[0x20] + 4),iVar4,0xffffffff);
          iVar4 = iVar4 + 1;
        } while (iVar5 == 0);
        (**(code **)(**(int **)(*(int *)(param_1[0x20] + 4) + 0x68) + 0xdc))();
        FUN_020282f4(*(undefined4 *)(param_1[0x20] + 4));
        (**(code **)(**(int **)(param_1[0x20] + 4) + 0xd8))(*(int **)(param_1[0x20] + 4),0);
        FUN_020107f4(FUN_02074540,iVar2,uVar10,param_1[0x20]);
      }
      (**(code **)(**(int **)(param_1[1] + 8) + 0x50))();
      FUN_0206c54c();
      thunk_FUN_0207400c(auStack_44,&DAT_0209f1e8);
      thunk_FUN_020741c4(auStack_44,uVar6);
      thunk_FUN_020741c4(auStack_44,(&PTR_DAT_0209f198)[param_2]);
      thunk_FUN_020741c4(auStack_44,s_c_aar_0209f1f0);
      piVar11 = (int *)0x0;
      iVar2 = FUN_02033bb8(auStack_44);
      if (iVar2 != 0) {
        piVar11 = (int *)FUN_020101f4(auStack_44,0);
      }
      iVar2 = FUN_0203b3e4();
      FUN_0206c498(*(undefined4 *)(iVar2 + 0x88));
      iVar2 = FUN_02074c48((int)cVar1 + uVar13);
      param_1[0x16] = iVar2;
      FUN_0206c54c();
      if (param_1[1] != 0) {
        (**(code **)(**(int **)(param_1[1] + 8) + 0x50))();
      }
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0xc))();
      }
    }
  }
  else {
    iVar4 = FUN_0203b3e4();
    FUN_0206c498(*(undefined4 *)(iVar4 + 0x88));
    param_1[0x16] = iVar2;
    FUN_0206c54c();
  }
  if ((uVar12 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x8e) = 1;
  }
  FUN_0206c498(param_4);
  uVar12 = *(uint *)(&DAT_020924b4 + param_3 * 8);
  FUN_02010adc(0,uVar12 & 0xffff00);
  iVar2 = FUN_02011b38();
  param_1[3] = iVar2;
  piVar11 = (int *)FUN_0206c6f0(iVar2,0x31305053);
  param_1[2] = (int)piVar11;
  (**(code **)(*piVar11 + 0x50))(piVar11,uVar12 & 0xffff00,0);
  FUN_0206c54c();
  FUN_02074c98(param_1,1);
  return;
}

