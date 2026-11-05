
/* JUS-GAME ALMotionDynamic::SetMotionIPType [source-string] __FILE__="ALMotionDynamic.cpp"
   __FUNCTION__="SetMotionIPType" lines=[1119] passed to 1 source-location call(s) */

void ALMotionDynamic::SetMotionIPType
               (undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_021b33e8();
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CreateControl(param_1,param_2,param_3,param_5);
  }
  iVar2 = (**(code **)(*param_3 + 0x90))(param_3,param_4);
  puVar1[6] = iVar2;
  if ((iVar2 != 0) && (*(short *)(iVar2 + 4) != 0)) {
    if (puVar1[7] != 0) {
      FUN_0201b268();
    }
    uVar3 = thunk_FUN_0201a228(*(undefined2 *)(puVar1[6] + 4),s_ALMotionDynamic_cpp_021d28a0,
                               s_SetMotionIPType_021d2830,0x45f);
    puVar1[7] = uVar3;
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x68))((int *)*puVar1,param_5);
    puVar1[8] = (uint)*(ushort *)(puVar1[6] + 4) + iVar2;
  }
  return;
}

