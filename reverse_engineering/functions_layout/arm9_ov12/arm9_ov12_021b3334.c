
bool FUN_021b3334(int param_1,undefined4 param_2,int *param_3,uint param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 *local_28;
  uint local_4;
  
  local_4 = param_4;
                    /* JUS-TAG source_file_inferred="ALMotionDynamic.cpp" */
  puVar2 = (undefined4 *)FUN_021b33e8();
  bVar7 = puVar2 == (undefined4 *)0x0;
  if (bVar7) {
    puVar2 = (undefined4 *)ALMotionDynamic::CreateControl(param_1,param_2,param_3,param_5);
  }
  FUN_021b2994(&local_28,puVar2 + 3,&local_4);
  iVar3 = FUN_021b2b18(puVar2[8]);
  (**(code **)(*param_3 + 0x20))(param_3,puVar2[1],iVar3);
  if ((puVar2[6] != 0) && (sVar1 = *(short *)(puVar2[6] + 4), sVar1 != 0)) {
    iVar4 = (**(code **)(*(int *)*puVar2 + 0x68))((int *)*puVar2,param_5);
    FUN_02051890(puVar2[7],iVar3 + iVar4,sVar1);
  }
  if (local_28 == puVar2 + 4) {
    piVar5 = (int *)FUN_021b2d38(puVar2 + 3,&local_4);
    *piVar5 = iVar3;
  }
  else {
    uVar6 = local_28[4];
    iVar4 = FUN_0201a9ec(uVar6);
    if (iVar4 == 0) {
      FUN_0201a958(uVar6,1);
    }
    local_28[4] = iVar3;
  }
  if (*(uint *)(param_1 + 0x2c) < local_4) {
    *(uint *)(param_1 + 0x2c) = local_4;
  }
  return bVar7;
}

