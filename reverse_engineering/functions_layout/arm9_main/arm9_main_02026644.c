
/* JUS-CLASS jus_Class_0209674c::vfunc_25 [class-virtual] slot 25 of vtable 0209674c (own slot, not
   inherited) */

undefined4 jus_Class_0209674c::vfunc_25(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + param_2 * 0xc;
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(iVar2 + 0x10) <= uVar1) {
      return 0;
    }
    if (*(char *)(*(int *)(iVar2 + 0xc) + uVar1 * 0xc + 4) == '\0') break;
    uVar1 = uVar1 + 1;
  }
  return *(undefined4 *)(*(int *)(param_1 + param_2 * 0xc + 0xc) + uVar1 * 0xc);
}

