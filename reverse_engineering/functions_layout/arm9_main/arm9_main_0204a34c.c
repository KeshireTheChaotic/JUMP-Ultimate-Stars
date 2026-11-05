
/* JUS-CLASS jus_TagBBDS::vfunc_15 [class-virtual] slot 15 of vtable 020949a4 (own slot, not
   inherited) */

void jus_TagBBDS::vfunc_15(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = FUN_0201a228(*(int *)(param_1 + 4) << 2);
    FUN_02051890(*(undefined4 *)(param_1 + 0xc),uVar1,*(int *)(param_1 + 4) << 2);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

