
undefined4 FUN_021b7b4c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar1 = FUN_021b59a4();
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    if ((param_2 & 0x10) == 0x10) {
      iVar1 = 0;
      if (param_1[0x50] < 0) {
        iVar3 = *(int *)(param_1[0x4e] + 0x10);
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          if (iVar1 == 0) {
            uVar2 = FUN_02025908(param_1[0x4e],iVar3);
            iVar4 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,0x10a);
            uVar6 = 0;
            if (iVar4 != 0) {
              uVar6 = jus_Class_021d293c::jus_Class_021d293c(iVar4,0x80010000,param_1,0,0,0,param_4)
              ;
            }
            FUN_02028644(uVar2,uVar6,0);
          }
          else {
            uVar2 = FUN_02025908(param_1[0x4e],iVar3);
            iVar4 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021d3bf0,s_PostDelayMessage_021d3ca0,
                                       0x113);
            uVar6 = 0;
            if (iVar4 != 0) {
              uVar6 = jus_Class_021d293c::jus_Class_021d293c(iVar4,0x80010000,param_1,0,0,0,param_4)
              ;
            }
            FUN_02028724(uVar2,uVar6,iVar1,0);
          }
          iVar1 = iVar1 - param_1[0x50];
        }
      }
      else {
        for (uVar7 = 0; iVar3 = param_1[0x4e], uVar7 < *(uint *)(iVar3 + 0x10); uVar7 = uVar7 + 1) {
          if (iVar1 == 0) {
            uVar2 = FUN_02025908(iVar3,uVar7);
            iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,0x10a);
            uVar6 = 0;
            if (iVar3 != 0) {
              uVar6 = jus_Class_021d293c::jus_Class_021d293c(iVar3,0x80010000,param_1,0,0,0,param_4)
              ;
            }
            FUN_02028644(uVar2,uVar6,0);
          }
          else {
            uVar2 = FUN_02025908(iVar3,uVar7);
            iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021d3bf0,s_PostDelayMessage_021d3ca0,
                                       0x113);
            uVar6 = 0;
            if (iVar3 != 0) {
              uVar6 = jus_Class_021d293c::jus_Class_021d293c(iVar3,0x80010000,param_1,0,0,0,param_4)
              ;
            }
            FUN_02028724(uVar2,uVar6,iVar1,0);
          }
          iVar1 = iVar1 + param_1[0x50];
        }
      }
    }
    else if ((param_2 & 0x20) == 0x20) {
      iVar1 = 0;
      if (param_1[0x50] < 0) {
        iVar3 = *(int *)(param_1[0x4e] + 0x10);
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          if (iVar1 == 0) {
            uVar2 = FUN_02025908(param_1[0x4e],iVar3);
            iVar4 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,0x10a);
            uVar6 = 0;
            if (iVar4 != 0) {
              uVar6 = jus_Class_021d293c::jus_Class_021d293c(iVar4,0x80010001,param_1,0,0,0,param_4)
              ;
            }
            FUN_02028644(uVar2,uVar6,0);
          }
          else {
            uVar2 = FUN_02025908(param_1[0x4e],iVar3);
            iVar4 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021d3bf0,s_PostDelayMessage_021d3ca0,
                                       0x113);
            uVar6 = 0;
            if (iVar4 != 0) {
              uVar6 = jus_Class_021d293c::jus_Class_021d293c(iVar4,0x80010001,param_1,0,0,0,param_4)
              ;
            }
            FUN_02028724(uVar2,uVar6,iVar1,0);
          }
          iVar1 = iVar1 - param_1[0x50];
        }
      }
      else {
        for (uVar7 = 0; iVar3 = param_1[0x4e], uVar7 < *(uint *)(iVar3 + 0x10); uVar7 = uVar7 + 1) {
          if (iVar1 == 0) {
            uVar2 = FUN_02025908(iVar3,uVar7);
            iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,0x10a);
            uVar6 = 0;
            if (iVar3 != 0) {
              uVar6 = jus_Class_021d293c::jus_Class_021d293c(iVar3,0x80010001,param_1,0,0,0,param_4)
              ;
            }
            FUN_02028644(uVar2,uVar6,0);
          }
          else {
            uVar2 = FUN_02025908(iVar3,uVar7);
            iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021d3bf0,s_PostDelayMessage_021d3ca0,
                                       0x113);
            uVar6 = 0;
            if (iVar3 != 0) {
              uVar6 = jus_Class_021d293c::jus_Class_021d293c(iVar3,0x80010001,param_1,0,0,0,param_4)
              ;
            }
            FUN_02028724(uVar2,uVar6,iVar1,0);
          }
          iVar1 = iVar1 + param_1[0x50];
        }
      }
    }
    else if ((param_2 & 1) == 1) {
      for (uVar7 = 0; uVar7 < *(uint *)(param_1[0x4e] + 0x10); uVar7 = uVar7 + 1) {
        piVar5 = (int *)(**(code **)(*param_1 + 0x170))(param_1,uVar7);
        (**(code **)(*piVar5 + 0x148))(piVar5,2);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}

