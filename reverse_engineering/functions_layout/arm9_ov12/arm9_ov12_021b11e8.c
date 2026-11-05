
/* JUS-CLASS ALWidgetBase_021d1b78::vfunc_22 [class-virtual] slot 22 of vtable 021d1b78 (own slot,
   not inherited) */

undefined4
ALWidgetBase_021d1b78::vfunc_22
          (int param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  DAT_021d5124 = DAT_021d5124 + 1;
  iVar1 = (**(code **)(*param_2 + 0x5c))();
  if (iVar1 == 0x544e4950) {
    iVar1 = (**(code **)(*param_3 + 0x4c))();
    iVar2 = (**(code **)(*param_4 + 0x4c))();
    if ((*(int *)(iVar1 + 0x10) + *(int *)(param_1 + 0x5c) == *(int *)(iVar2 + 0x10) + param_2[0x17]
        ) && (*(int *)(iVar1 + 0x14) + *(int *)(param_1 + 0x60) ==
              *(int *)(iVar2 + 0x14) + param_2[0x18])) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x5c))();
    if (iVar1 == 0x45485053) {
      local_18 = param_2[0x1a];
      iVar1 = (**(code **)(*param_3 + 0x4c))();
      iVar2 = (**(code **)(*param_4 + 0x4c))();
      local_20 = 0;
      local_1c = 0;
      local_40 = *(undefined4 *)(iVar2 + 0x14);
      local_3c = *(undefined4 *)(iVar2 + 0x10);
      FUN_021b0ef8(auStack_38,&local_3c,&local_40);
      local_30 = *(undefined4 *)(iVar1 + 0x14);
      local_2c = *(undefined4 *)(iVar1 + 0x10);
      FUN_021b0ef8(auStack_28,&local_2c,&local_30);
      FUN_021b0eb0(&local_20,auStack_28,auStack_38);
      if (*(char *)(param_1 + 0x24) != '\0') {
        local_50 = *(undefined4 *)(param_1 + 0x60);
        local_4c = *(undefined4 *)(param_1 + 0x5c);
        FUN_021b0ef8(auStack_48,&local_4c,&local_50);
        FUN_021b0ed4(&local_20,auStack_48);
      }
      if ((char)param_2[9] != '\0') {
        local_60 = param_2[0x18];
        local_5c = param_2[0x17];
        FUN_021b0ef8(auStack_58,&local_5c,&local_60);
        FUN_021b0f0c(&local_20,auStack_58);
      }
      FUN_021b0f30(&local_6c,&local_18,&local_18);
      FUN_021b0f30(&local_68,&local_1c,&local_1c);
      FUN_021b0f30(&local_64,&local_20,&local_20);
      if (local_64 + local_68 < local_6c) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0x58))(param_2,param_1,param_4,param_3,param_5);
    }
  }
  return uVar3;
}

