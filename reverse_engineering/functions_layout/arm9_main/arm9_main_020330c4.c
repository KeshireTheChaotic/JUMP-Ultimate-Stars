
/* JUS-CLASS jus_Class_020945d4::~jus_Class_020945d4 [class-default] slot 0/1 of vtable 020945d4;
   resets vtables (destructor) */

undefined4 * jus_Class_020945d4::~jus_Class_020945d4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  if (param_1[5] != 0) {
    FUN_0203254c(&DAT_020a1d44,param_1);
  }
  DAT_020a1058 = DAT_020a1058 + -1;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0xc))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  jus_Class_020941f0::jus_Class_020941f0(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

