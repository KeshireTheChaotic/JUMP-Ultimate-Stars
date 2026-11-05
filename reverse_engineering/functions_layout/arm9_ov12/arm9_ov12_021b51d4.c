
/* JUS-GAME ALWidgetBase::RegistSkin [source-string] __FILE__="ALWidgetBase.cpp"
   __FUNCTION__="RegistSkin" lines=[] passed to 2 source-location call(s) */

void ALWidgetBase::RegistSkin(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uVar3 = 0;
  while( true ) {
    uStack_18 = param_4;
    if (DAT_021d5190 <= uVar3) {
      iVar2 = jus_AllocDebug(0x10,s_ALWidgetBase_cpp_021d3de8,s_RegistSkin_021d3ba8,0x35c);
      local_1c = 0;
      if (iVar2 != 0) {
        local_1c = FUN_021b8504(iVar2,param_1,param_2,param_3,param_4);
      }
      FUN_021ae4c0(&DAT_021d518c,&local_1c);
      return;
    }
    piVar4 = *(int **)(DAT_021d518c + uVar3 * 4);
    if (param_1 == *piVar4) break;
    uVar3 = uVar3 + 1;
  }
  if (piVar4 != (int *)0x0) {
    FUN_021b8558(piVar4);
    FUN_0201b244(piVar4);
  }
  iVar2 = jus_AllocDebug(0x10,s_ALWidgetBase_cpp_021d3de8,s_RegistSkin_021d3ba8,0x358);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = FUN_021b8504(iVar2,param_1,param_2,param_3,param_4);
  }
  *(undefined4 *)(DAT_021d518c + uVar3 * 4) = uVar1;
  return;
}

