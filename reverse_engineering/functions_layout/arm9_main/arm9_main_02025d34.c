
/* JUS-CLASS jus_Class_02095620::vfunc_06 [class-virtual] slot 6 of vtable 02095620 (own slot, not
   inherited) */

void jus_Class_02095620::vfunc_06(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_0201a228(0x44);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = jus_Class_02095620();
  }
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 4;
    iVar2 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar4 + iVar2 + 0xc) = *(undefined4 *)(param_1 + iVar1 + 0xc);
  } while (iVar3 < 0xe);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 8);
  return;
}

