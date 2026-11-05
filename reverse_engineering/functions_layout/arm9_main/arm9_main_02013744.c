
/* JUS-CLASS jus_TagIPCT::vfunc_25 [class-virtual] slot 25 of vtable 0209aea0 (own slot, not
   inherited) */

void jus_TagIPCT::vfunc_25(int param_1)

{
  int iVar1;
  
  FUN_0201309c();
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x30))();
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x45) == '\0') {
    FUN_0202788c(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c),0xc,FUN_020137a4,param_1);
    *(undefined1 *)(param_1 + 0x45) = 1;
    return;
  }
  return;
}

