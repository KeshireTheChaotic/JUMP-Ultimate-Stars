
/* JUS-CLASS jus_Class_02096150::vfunc_24 [class-virtual] slot 24 of vtable 02096150 (own slot, not
   inherited) */

int jus_Class_02096150::vfunc_24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
      if (iVar1 == 0x52344c50) {
        uVar2 = FUN_02016708(0x3147434e,*(undefined4 *)(param_1 + 0x20));
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 100))();
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x41) == '\0')) {
      *(undefined1 *)(param_1 + 0x41) = 1;
    }
  }
  return param_1;
}

