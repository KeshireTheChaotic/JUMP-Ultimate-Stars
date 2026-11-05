
/* JUS-CLASS jus_Class_02094088::vfunc_07 [class-virtual] slot 7 of vtable 02094088 (own slot, not
   inherited) */

undefined4
jus_Class_02094088::vfunc_07(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 0x2c))(param_2,0,*(code **)(*param_2 + 0x2c),param_4,param_4);
  iVar2 = (**(code **)(*param_2 + 0x28))();
  iVar1 = iVar1 + iVar2;
  uVar3 = (**(code **)*DAT_020a1044)(DAT_020a1044,*(int *)(iVar1 + 0x18) * *(int *)(iVar1 + 0x1c));
  FUN_02029c68(uVar3,iVar1 + 0x20,0,*(int *)(iVar1 + 0x18) * *(int *)(iVar1 + 0x1c));
  return uVar3;
}

