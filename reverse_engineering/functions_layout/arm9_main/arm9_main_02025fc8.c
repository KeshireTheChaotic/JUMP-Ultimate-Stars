
/* JUS-CLASS jus_Class_0209674c::vfunc_06 [class-virtual] slot 6 of vtable 0209674c (own slot, not
   inherited) */

int jus_Class_0209674c::vfunc_06(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_0201a228(0xb4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = jus_Class_0209674c();
  }
  uVar3 = 0;
  do {
    iVar1 = param_1 + uVar3 * 0xc;
    for (uVar4 = 0; uVar4 < *(uint *)(iVar1 + 0x10); uVar4 = uVar4 + 1) {
      FUN_0202604c(*(int *)(iVar2 + uVar3 * 0xc + 0xc) + uVar4 * 0xc,
                   *(int *)(iVar1 + 0xc) + uVar4 * 0xc);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xe);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 8);
  return iVar2;
}

