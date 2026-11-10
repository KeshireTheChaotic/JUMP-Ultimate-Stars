
/* JUS-CLASS jus_Prop_ParentNodeID::vfunc_08 [class-virtual] slot 8 of vtable 0209a5b4 (own slot,
   not inherited) */

void jus_Prop_ParentNodeID::vfunc_08(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x44) + 0x54);
  }
  *param_3 = uVar1;
  return;
}

