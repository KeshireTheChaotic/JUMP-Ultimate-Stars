
/* JUS-CLASS jus_Class_02095b3c::~jus_Class_02095b3c [class-default] slot 0/1 of vtable 02095b3c;
   resets vtables (destructor) */

undefined4 * jus_Class_02095b3c::~jus_Class_02095b3c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 0xc))();
    FUN_0203254c(&DAT_020a1de0,param_1);
  }
  DAT_020a0d08 = DAT_020a0d08 + -1;
  jus_Class_020941f0::jus_Class_020941f0(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

