
/* JUS-CLASS ALCollision_021d1d40::vfunc_22 [class-virtual] slot 22 of vtable 021d1d40 (own slot,
   not inherited) */

undefined4
ALCollision_021d1d40::vfunc_22
          (int param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  DAT_021d5124 = DAT_021d5124 + 1;
  piStack_18 = param_4;
  iVar1 = (**(code **)(*param_2 + 0x5c))();
  if (iVar1 == 0x52494332) {
    iVar1 = param_2[0x1a];
    iVar5 = *(int *)(param_1 + 0x68);
    iVar2 = (**(code **)(*param_3 + 0x4c))();
    iVar3 = (**(code **)(*param_4 + 0x4c))();
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_021b0eb0(&uStack_20,iVar2 + 0x10,iVar3 + 0x10);
    if (*(char *)(param_1 + 0x24) != '\0') {
      uStack_3c = *(undefined4 *)(param_1 + 0x60);
      uStack_38 = *(undefined4 *)(param_1 + 0x5c);
      FUN_021b0ef8(auStack_34,&uStack_38,&uStack_3c);
      FUN_021b0ed4(&uStack_20,auStack_34);
    }
    if ((char)param_2[9] != '\0') {
      iStack_4c = param_2[0x18];
      iStack_48 = param_2[0x17];
      FUN_021b0ef8(auStack_44,&iStack_48,&iStack_4c);
      FUN_021b0f0c(&uStack_20,auStack_44);
    }
    iStack_60 = iVar5 + iVar1;
    iStack_5c = iStack_60;
    FUN_021b0f30(&iStack_58,&iStack_5c,&iStack_60);
    FUN_021b0f30(&iStack_54,&uStack_1c,&uStack_1c);
    FUN_021b0f30(&iStack_50,&uStack_20,&uStack_20);
    if (iStack_50 + iStack_54 < iStack_58) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x5c))();
    if (iVar1 == 0x544e4950) {
      uStack_24 = *(undefined4 *)(param_1 + 0x68);
      iVar1 = (**(code **)(*param_3 + 0x4c))();
      iVar2 = (**(code **)(*param_4 + 0x4c))();
      uStack_2c = 0;
      uStack_28 = 0;
      FUN_021b0eb0(&uStack_2c,iVar1 + 0x10,iVar2 + 0x10);
      if (*(char *)(param_1 + 0x24) != '\0') {
        uStack_70 = *(undefined4 *)(param_1 + 0x60);
        uStack_6c = *(undefined4 *)(param_1 + 0x5c);
        FUN_021b0ef8(auStack_68,&uStack_6c,&uStack_70);
        FUN_021b0ed4(&uStack_2c,auStack_68);
      }
      if ((char)param_2[9] != '\0') {
        iStack_80 = param_2[0x18];
        iStack_7c = param_2[0x17];
        FUN_021b0ef8(auStack_78,&iStack_7c,&iStack_80);
        FUN_021b0f0c(&uStack_2c,auStack_78);
      }
      FUN_021b0f30(&iStack_8c,&uStack_24,&uStack_24);
      FUN_021b0f30(&iStack_88,&uStack_28,&uStack_28);
      FUN_021b0f30(&iStack_84,&uStack_2c,&uStack_2c);
      if (iStack_84 + iStack_88 < iStack_8c) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = (**(code **)(*param_2 + 0x58))(param_2,param_1,param_4,param_3,param_5);
    }
  }
  return uVar4;
}

