
/* JUS-CLASS jus_HwTexPltt_Part_020944cc::vfunc_21 [class-virtual] slot 21 of vtable 020944cc (own
   slot, not inherited) */

int * jus_HwTexPltt_Part_020944cc::vfunc_21
                (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 8))();
  iVar2 = (**(code **)(*DAT_020a0dd0 + 0x74))();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0201650c(0x52344c50,param_3,param_4);
    (**(code **)(*piVar1 + 0x28))(piVar1,piVar3);
    (**(code **)(*piVar3 + 0xc))();
  }
  return piVar1;
}

