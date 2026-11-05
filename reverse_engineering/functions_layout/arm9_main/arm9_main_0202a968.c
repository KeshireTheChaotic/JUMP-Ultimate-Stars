
/* JUS-CLASS jus_Class_020966d0::~jus_Class_020966d0 [class-default] slot 0/1 of vtable 020966d0;
   resets vtables (destructor) */

undefined4 * jus_Class_020966d0::~jus_Class_020966d0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  FUN_0202a1f0();
  DAT_020a0cc8 = DAT_020a0cc8 + -1;
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

