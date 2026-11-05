
/* JUS-CLASS jus_Class_02181700::vfunc_05 [class-virtual] slot 5 of vtable 02181700 (own slot, not
   inherited) */

void jus_Class_02181700::vfunc_05(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + *(int *)(param_1 + 0x78) * 4 + 0x18) =
       *(uint *)(param_1 + 0xe4) | *(uint *)(param_1 + 0xe8);
  *(uint *)(param_1 + (*(uint *)(param_1 + 0x130) & 0xf) * 4 + 0xec) =
       *(uint *)(param_1 + 0xe4) | *(uint *)(param_1 + 0xe8);
  iVar2 = 0;
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | *(uint *)(param_1 + iVar1 + 0xec);
  } while (iVar2 < 0x10);
  return;
}

