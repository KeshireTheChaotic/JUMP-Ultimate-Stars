
/* JUS-CLASS jus_TagSPDB::vfunc_05 [class-virtual] slot 5 of vtable 02095ff4 (own slot, not
   inherited) */

void jus_TagSPDB::vfunc_05(int param_1,int param_2)

{
  FUN_02015184();
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(undefined1 *)(param_1 + 0x5e) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    return;
  }
  FUN_0203d764(*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

