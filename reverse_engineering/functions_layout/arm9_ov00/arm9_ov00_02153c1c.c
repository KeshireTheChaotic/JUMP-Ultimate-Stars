
/* JUS-CLASS jus_Class_02161020::vfunc_02 [class-virtual] slot 2 of vtable 02161020 (own slot, not
   inherited) */

bool jus_Class_02161020::vfunc_02(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_02064450(*(undefined4 *)(param_1 + 0xc));
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  iVar1 = FUN_020643f4(*(undefined4 *)(param_1 + 0xc),param_2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
  }
  return iVar1 != 0;
}

