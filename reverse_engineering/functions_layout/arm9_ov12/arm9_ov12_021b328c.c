
/* JUS-GAME ALMotionDynamic::CreateControl [source-string] __FILE__="ALMotionDynamic.cpp"
   __FUNCTION__="CreateControl" lines=[707, 714] passed to 2 source-location call(s) */

undefined4 * ALMotionDynamic::CreateControl(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_30;
  undefined4 *local_2c;
  int iStack_28;
  int local_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_28 = param_4;
  local_c = param_2;
  uStack_8 = param_3;
  iStack_4 = param_4;
  FUN_021b2730(&local_30,param_1 + 0x38,&local_c);
  if (local_30 == param_1 + 0x3c) {
    iVar1 = jus_AllocDebug(0xc,s_ALMotionDynamic_cpp_021d28a0,s_CreateControl_021d2820,0x2c3);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_021b2d2c();
    }
    puVar3 = (undefined4 *)FUN_021b2f50(param_1 + 0x38,&local_c);
    *puVar3 = uVar2;
  }
  else {
    uVar2 = *(undefined4 *)(local_30 + 0x10);
  }
  iVar1 = jus_AllocDebug(0x24,s_ALMotionDynamic_cpp_021d28a0,s_CreateControl_021d2820,0x2ca);
  local_2c = (undefined4 *)0x0;
  if (iVar1 != 0) {
    local_2c = (undefined4 *)FUN_021b2b04();
  }
  if (param_4 == local_c) {
    local_2c[1] = local_c;
    local_2c[2] = 0;
  }
  else {
    local_2c[1] = param_4;
  }
  *local_2c = param_3;
  uVar4 = (**(code **)(*(int *)*local_2c + 0x68))((int *)*local_2c,param_4);
  local_2c[8] = uVar4;
  FUN_021b2e18(uVar2,&local_2c);
  return local_2c;
}

