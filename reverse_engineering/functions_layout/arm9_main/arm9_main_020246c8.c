
/* JUS-CLASS jus_Class_0209c0b4::vfunc_45 [class-virtual] slot 45 of vtable 0209c0b4 (own slot, not
   inherited) */

undefined2 jus_Class_0209c0b4::vfunc_45(int param_1,int *param_2)

{
  int *piVar1;
  
  (**(code **)(*param_2 + 8))();
  piVar1 = (int *)(**(code **)(*param_2 + 0xec))();
  if (piVar1 != param_2) {
    piVar1 = (int *)(**(code **)(*param_2 + 0xec))();
    (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
  }
  piVar1 = (int *)FUN_02037f84(param_1 + 0x6c);
  *piVar1 = (int)param_2;
  (**(code **)(*param_2 + 0xe8))(param_2,param_1);
  if ((*(byte *)(param_1 + 0x29) & 0x3f) >> 5 != 0) {
    FUN_0202788c(param_2,1,FUN_02024a68,0);
  }
  return *(undefined2 *)(param_1 + 0x74);
}

