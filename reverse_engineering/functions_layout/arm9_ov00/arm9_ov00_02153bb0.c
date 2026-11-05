
/* JUS-CLASS jus_Class_02161020::vfunc_03 [class-virtual] slot 3 of vtable 02161020 (own slot, not
   inherited) */

bool jus_Class_02161020::vfunc_03(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_02064450(*(undefined4 *)(param_1 + 0xc));
    FUN_020643f4(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),0);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  iVar1 = FUN_02064430(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
  if (iVar1 != -1) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
  }
  return iVar1 != -1;
}

