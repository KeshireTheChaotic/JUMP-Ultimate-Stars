
int * FUN_0206ca8c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int *unaff_r8;
  int iVar4;
  undefined4 local_78;
  int local_74;
  int local_70;
  uint local_6c;
  undefined1 auStack_68 [4];
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [3];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  if (DAT_020afc41 == '\0') {
    iVar4 = param_1[0x11];
    uStack_28 = param_4;
    iVar1 = FUN_0203b404(0);
    FUN_0206c498(*(undefined4 *)(iVar1 + 0x88));
    iVar1 = FUN_02010adc(0,param_2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_02011b38();
    }
    if (iVar1 != 0) {
      unaff_r4 = *(int **)(iVar1 + 4);
    }
    if (unaff_r4 != (int *)0x0) {
      (**(code **)(*unaff_r4 + 0x94))(unaff_r4,*(uint *)(iVar4 + 0x3c) & 0x7fffffff);
      unaff_r8 = (int *)(**(code **)(*unaff_r4 + 0xb0))(unaff_r4,0x31305053);
      if (unaff_r8 == (int *)0x0) {
        unaff_r8 = unaff_r4;
      }
      (**(code **)(*param_1 + 0xb4))(param_1,unaff_r4);
      unaff_r5 = (uint)*(byte *)(*(int *)(iVar4 + 100) + 0x48);
      FUN_02024d44(&local_2c,param_1);
      unaff_r6 = (int)(local_2c + ((uint)(local_2c >> 0xb) >> 0x14)) >> 0xc;
      FUN_02024d54(&local_30,param_1);
      unaff_r7 = (int)(local_30 + ((uint)(local_30 >> 0xb) >> 0x14)) >> 0xc;
      FUN_02023894(unaff_r4,param_2,0);
    }
    if (((*(ushort *)(param_1 + 0x20) & 1) == 0) && (unaff_r5 != 0)) {
      unaff_r6 = -unaff_r6;
    }
    if ((*(ushort *)(param_1 + 0x20) & 2) == 0) {
      (**(code **)(*(int *)unaff_r8[0x19] + 0x5c))((int *)unaff_r8[0x19],unaff_r5);
    }
    if ((char)param_1[0x1e] == '\0') {
      if ((*(ushort *)(param_1 + 0x20) & 8) == 0) {
        if (DAT_020afc44 == 0) {
          (**(code **)(*unaff_r8 + 0xd4))(unaff_r8,iVar4);
        }
        else {
          (**(code **)(*unaff_r8 + 0xd4))(unaff_r8,*(undefined4 *)(DAT_020afc44 + 4));
        }
        FUN_02024d54(&local_54,iVar4);
        local_50 = local_54 + unaff_r7 * 0x1000;
        FUN_02024d44(&local_4c,iVar4);
        local_48 = local_4c + unaff_r6 * 0x1000;
        FUN_0206ca28(unaff_r8,&local_48,&local_50);
      }
      else {
        local_44 = (unaff_r7 + 0x60) * 0x1000;
        local_40[0] = (unaff_r6 + 0x80) * 0x1000;
        FUN_0206ca28(unaff_r8,local_40,&local_44);
      }
    }
    else {
      (**(code **)(*unaff_r8 + 0xd4))(unaff_r8,iVar4);
      local_40[2] = unaff_r7 << 0xc;
      local_34 = unaff_r6 << 0xc;
      FUN_0206ca28(unaff_r8,&local_34,local_40 + 2);
      local_40[1] = 0x8c000;
      (**(code **)(*unaff_r8 + 0xa0))(unaff_r8,local_40 + 1);
      if ((*(ushort *)(param_1 + 0x20) & 0x10) != 0) {
        FUN_02028384(unaff_r8,FUN_0206ceac);
      }
      piVar2 = (int *)(**(code **)(**(int **)(iVar4 + 0x68) + 0xd0))();
      if (piVar2 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(**(int **)(iVar4 + 0x68) + 0x14c))();
        uVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,uVar3);
      }
      (**(code **)(*unaff_r8 + 0x24))(unaff_r8,uVar3);
    }
    if ((*(ushort *)(param_1 + 0x20) & 8) == 0) {
      FUN_02011990(&local_5c,param_1[0x19]);
      if (local_5c != 0x80000) {
        FUN_02011990(&local_60,param_1[0x19]);
        local_78 = local_60;
        (**(code **)(*(int *)unaff_r8[0x19] + 0x10))((int *)unaff_r8[0x19],&local_78);
      }
    }
    else {
      FUN_02011990(&local_58,param_1[0x19]);
      local_74 = local_58 + -0x33000;
      (**(code **)(*(int *)unaff_r8[0x19] + 0x10))((int *)unaff_r8[0x19],&local_74);
    }
    FUN_0206ce84(&local_64,param_1);
    if (local_64 != 0x1000) {
      FUN_0206ce84(auStack_68,param_1);
      (**(code **)(*unaff_r8 + 0xf8))(unaff_r8,auStack_68);
    }
    (**(code **)(*unaff_r4 + 0xdc))(unaff_r4,0xffffffff);
    FUN_02011990(&local_6c,*(undefined4 *)(iVar4 + 0x68));
    local_70 = ((local_6c >> 0xc) + 1) * 0x1000;
    (**(code **)(*(int *)unaff_r4[0x1a] + 0x10))((int *)unaff_r4[0x1a],&local_70);
    (**(code **)(*(int *)unaff_r4[0x1a] + 0x6c))();
    (**(code **)(*unaff_r8 + 0xd8))(unaff_r8,1);
    FUN_0206c54c();
  }
  else {
    unaff_r8 = (int *)0x0;
  }
  return unaff_r8;
}

