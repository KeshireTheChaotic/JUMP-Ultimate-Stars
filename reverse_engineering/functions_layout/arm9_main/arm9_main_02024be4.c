
/* JUS-CLASS jus_Prop_Position::vfunc_09 [class-virtual] slot 9 of vtable 02098d98 (own slot, not
   inherited) */

void jus_Prop_Position::vfunc_09
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  uStack_c = param_4;
  FUN_02051890(param_3,&local_18,0xc);
  iVar1 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(iVar1 + 0xc) = local_18;
  *(undefined4 *)(iVar1 + 0x10) = local_14;
  *(undefined4 *)(iVar1 + 0x14) = local_10;
  FUN_02024c3c(iVar1,1);
  return;
}

