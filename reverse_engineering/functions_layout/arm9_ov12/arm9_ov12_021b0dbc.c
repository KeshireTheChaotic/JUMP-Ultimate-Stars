
undefined4 FUN_021b0dbc(int param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 auStack_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  DAT_021d5124 = DAT_021d5124 + 1;
  iVar1 = (**(code **)(*param_2 + 0x5c))();
  if (iVar1 == 0x45485053) {
    iVar4 = *(int *)(param_1 + 0x68);
    iVar5 = param_2[0x1a];
    iVar1 = (**(code **)(*param_3 + 0x4c))();
    iVar2 = (**(code **)(*param_4 + 0x4c))();
    local_1c = 0;
    local_18 = 0;
    FUN_021b0eb0(&local_1c,iVar1 + 0x10,iVar2 + 0x10);
    if (*(char *)(param_1 + 0x24) != '\0') {
      local_2c = *(undefined4 *)(param_1 + 0x60);
      local_28 = *(undefined4 *)(param_1 + 0x5c);
      FUN_021b0ef8(auStack_24,&local_28,&local_2c);
      FUN_021b0ed4(&local_1c,auStack_24);
    }
    if ((char)param_2[9] != '\0') {
      local_3c = param_2[0x18];
      local_38 = param_2[0x17];
      FUN_021b0ef8(auStack_34,&local_38,&local_3c);
      FUN_021b0f0c(&local_1c,auStack_34);
    }
    local_50 = iVar4 + iVar5;
    local_4c = local_50;
    FUN_021b0f30(&local_48,&local_4c,&local_50);
    FUN_021b0f30(&local_44,&local_18,&local_18);
    FUN_021b0f30(&local_40,&local_1c,&local_1c);
    if (local_40 + local_44 < local_48) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x58))(param_2,param_1,param_4,param_3,param_5);
  }
  return uVar3;
}

