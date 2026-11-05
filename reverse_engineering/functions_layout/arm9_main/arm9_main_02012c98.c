
/* JUS-CLASS jus_Class_020974b8::vfunc_24 [class-virtual] slot 24 of vtable 020974b8 (own slot, not
   inherited) */

undefined4
jus_Class_020974b8::vfunc_24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = jus_AllocDebug(8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = jus_Class_02094e78::jus_Class_02094e78
                      (iVar1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                       *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),param_4);
  }
  return *(undefined4 *)(iVar2 + 4);
}

