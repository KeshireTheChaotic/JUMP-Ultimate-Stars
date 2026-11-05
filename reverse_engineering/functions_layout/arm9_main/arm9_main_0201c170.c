
int * FUN_0201c170(undefined4 param_1,int *param_2,uint param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  
  iStack_28 = param_4;
  piVar1 = (int *)FUN_02011b38();
  piVar2 = (int *)(**(code **)(*param_2 + 0xd0))();
  if (piVar2 != (int *)0x0) {
    for (uVar8 = 0; uVar3 = (**(code **)(*piVar2 + 0x1c))(), uVar8 < uVar3; uVar8 = uVar8 + 1) {
      uVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,uVar8);
      if (param_3 == uVar3) {
        if (param_4 != -1) {
          (**(code **)(*piVar1 + 0x38))();
          (**(code **)(*param_2 + 0xd4))(param_2,uVar8);
          (**(code **)(*piVar1 + 0x3c))();
        }
        return param_2;
      }
    }
  }
  piVar2 = (int *)FUN_02032598(&DAT_020a1d10,param_3);
  if (piVar2 == (int *)0x0) {
    local_30 = DAT_020a1e00;
    local_2c = 0;
    piVar2 = (int *)FUN_02010644(&local_30,param_3 | 0x41000000);
    while (piVar2 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
      for (uVar8 = 0; uVar8 < DAT_020a1064; uVar8 = uVar8 + 1) {
        iVar5 = (**(code **)(*(int *)(&DAT_020a16b0)[uVar8] + 0x18))
                          ((int *)(&DAT_020a16b0)[uVar8],uVar4);
        if ((iVar5 != 0) &&
           (local_38 = (**(code **)(*(int *)(&DAT_020a16b0)[uVar8] + 0x40))
                                 ((int *)(&DAT_020a16b0)[uVar8],uVar4,param_3), local_38 != -1)) {
          if (param_4 == -1) {
            local_38 = -1;
          }
          (**(code **)(*piVar1 + 0x38))();
          iVar5 = (**(code **)(*(int *)(&DAT_020a16b0)[uVar8] + 0x34))();
          iVar6 = (**(code **)(*param_2 + 0xe0))();
          if (iVar5 == iVar6) {
            if ((int *)param_2[0x11] != (int *)0x0) {
              (**(code **)(*(int *)param_2[0x11] + 0xc))();
            }
          }
          else {
            param_2 = (int *)(**(code **)(*(int *)(&DAT_020a16b0)[uVar8] + 0x10))
                                       ((int *)(&DAT_020a16b0)[uVar8],param_1);
          }
          (**(code **)(*param_2 + 0xb0))(param_2,piVar2,param_3,0,local_38);
          (**(code **)(*piVar2 + 0xc))();
          (**(code **)(*piVar1 + 0x3c))();
          return param_2;
        }
      }
      (**(code **)(*piVar2 + 0xc))();
      piVar2 = (int *)FUN_02010644(&local_30,param_3 | 0x41000000);
    }
    piVar7 = (int *)0x0;
  }
  else {
    (**(code **)(*piVar1 + 0x38))();
    piVar7 = (int *)(**(code **)(*piVar2 + 0x14))(piVar2,param_1);
    (**(code **)(*piVar7 + 0x150))();
    if (param_4 != -1) {
      uVar4 = (**(code **)(*piVar2 + 0x44))();
      (**(code **)(*piVar7 + 0xd4))(piVar7,uVar4);
    }
    (**(code **)(*piVar1 + 0x3c))();
  }
  return piVar7;
}

