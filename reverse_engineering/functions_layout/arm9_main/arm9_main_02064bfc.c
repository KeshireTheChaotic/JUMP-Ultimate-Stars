
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SCENE FS_LoadOverlayInfo [scene-map] overlay loader structure (Scene -> overlay map: which
   overlays are resident while each game scene runs.) */

undefined4 FS_LoadOverlayInfo(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":4}
                       io=["027ffe50","027ffe54","027ffe58","027ffe5c"] */
  if (param_2 == 0) {
    piVar1 = &DAT_020afb2c;
  }
  else {
    piVar1 = &DAT_020afb34;
  }
  if (*piVar1 == 0) {
    uVar3 = FUN_02064cb0(param_1,param_2,param_3,&DAT_020afb3c,_DAT_027ffe50,_DAT_027ffe54,
                         _DAT_027ffe58,_DAT_027ffe5c);
    return uVar3;
  }
  if ((uint)piVar1[1] <= (uint)(param_3 * 0x20)) {
    return 0;
  }
  FUN_02051890(*piVar1 + param_3 * 0x20,param_1,0x20);
  *(int *)(param_1 + 0x20) = param_2;
  FUN_02064744(auStack_58);
  FUN_02064d64(&local_60,param_1);
  iVar2 = FUN_02064550(auStack_58,local_60,uStack_5c,auStack_58);
  if (iVar2 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x24) = local_34;
  *(int *)(param_1 + 0x28) = local_30 - local_34;
  FUN_020644ec(auStack_58);
  return 1;
}

