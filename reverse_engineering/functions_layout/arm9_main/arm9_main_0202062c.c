
/* JUS-CLASS jus_Class_0209cc28::~jus_Class_0209cc28 [class-default] slot 0/1 of vtable 0209cc28;
   resets vtables (destructor) */

undefined4 * jus_Class_0209cc28::~jus_Class_0209cc28(undefined4 *param_1)

{
  *param_1 = &vftable;
  if (param_1[0x13] != 0) {
    FUN_0200f18c(param_1[0x13],0x10,8,&DAT_0201f6f0);
  }
  jus_Class_0209cef8::jus_Class_0209cef8(param_1);
  return param_1;
}

