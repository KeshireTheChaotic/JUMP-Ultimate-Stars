
void FUN_02010728(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = (**(code **)(*param_1 + 0x54))();
  if ((iVar1 == 0) || (*(char *)(param_1[7] + 0x1a) != '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x2c))(param_1,param_2);
    iVar1 = jus_AllocDebug(0x30);
    piVar5 = (int *)0x0;
    if (iVar1 != 0) {
      piVar5 = (int *)ALStreamImp::ALStreamImp(iVar1,uVar2);
    }
    piVar8 = (int *)param_1[7];
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    uVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,uVar2);
    uVar3 = (**(code **)(*piVar5 + 0x2c))(piVar5,0);
    uVar6 = (**(code **)(*param_1 + 0x2c))(param_1,param_2);
    FUN_02051890(uVar2,uVar3,uVar6);
    piVar5[5] = (int)param_1;
    *(short *)(piVar5 + 6) = (short)param_2;
    FUN_02033524(piVar5);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x2c))(param_1,param_2);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    iVar7 = param_1[7];
    iVar4 = jus_AllocDebug(0x30);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = jus_TagDUMY_Derived_02094a7c::jus_TagDUMY_Derived_02094a7c(iVar4,iVar7,uVar3,uVar2,1);
    }
    *(int **)(iVar1 + 0x14) = param_1;
    *(short *)(iVar1 + 0x18) = (short)param_2;
    FUN_02033524();
  }
  return;
}

