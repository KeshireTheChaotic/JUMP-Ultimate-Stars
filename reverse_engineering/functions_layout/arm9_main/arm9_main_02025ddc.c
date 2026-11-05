
/* JUS-CLASS jus_Class_02095620::vfunc_22 [class-virtual] slot 22 of vtable 02095620 (own slot, not
   inherited) */

void jus_Class_02095620::vfunc_22(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    *(undefined **)(param_1 + param_2 * 4 + 0xc) = &DAT_02025cc8;
    uVar1 = *(uint *)(param_1 + 8) & ~(1 << (param_2 & 0xff));
  }
  else {
    *(int *)(param_1 + param_2 * 4 + 0xc) = param_3;
    uVar1 = *(uint *)(param_1 + 8) | 1 << (param_2 & 0xff);
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}

