
/* JUS-CLASS ALWidgetBase_021d2c2c::vfunc_23 [class-virtual] slot 23 of vtable 021d2c2c (own slot,
   not inherited) */

void ALWidgetBase_021d2c2c::vfunc_23(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = param_4;
  if (*(char *)(*(int *)(param_1 + 4) + 0x9c) == '\0') {
    iStack_10 = param_2 << 0xc;
    FUN_021b6454(*(undefined4 *)(param_1 + 4),&iStack_10);
  }
  else {
    iStack_c = param_2 << 0xc;
    FUN_021b956c(param_1,&iStack_c);
  }
  return;
}

