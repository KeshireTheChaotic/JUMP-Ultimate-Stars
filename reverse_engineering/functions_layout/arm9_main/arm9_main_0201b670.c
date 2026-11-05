
/* JUS-CLASS jus_Class_02094d7c::~jus_Class_02094d7c [class-default] slot 0/1 of vtable 02094d7c;
   resets vtables (destructor) */

undefined4 * jus_Class_02094d7c::~jus_Class_02094d7c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  DAT_020a0e44 = DAT_020a0e44 + -1;
  if (param_1[5] != 0) {
    FUN_0203254c(&DAT_020a1d10,param_1);
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 0xc))();
  }
  jus_Class_020941f0::jus_Class_020941f0(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

