
/* JUS-CLASS jus_Prop_ParentNodeID::vfunc_09 [class-virtual] slot 9 of vtable 0209a5b4 (own slot,
   not inherited) */

void jus_Prop_ParentNodeID::vfunc_09(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02011450(param_3,0);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = (**(code **)(*param_2 + 0xb0))();
  (**(code **)(*param_2 + 0xd4))(param_2,uVar2);
  return;
}

