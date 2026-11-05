
/* JUS-CLASS jus_Class_0209674c::vfunc_10 [class-virtual] slot 10 of vtable 0209674c (own slot, not
   inherited) */

void jus_Class_0209674c::vfunc_10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  
  for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 0x34); uVar4 = uVar4 + 1) {
    piVar3 = (int *)(*(int *)(param_1 + 0x30) + uVar4 * 0xc);
    bVar6 = (char)piVar3[1] != '\0';
    iVar1 = 0;
    if (bVar6) {
      iVar1 = *piVar3;
    }
    if (bVar6 && iVar1 != 0) {
      pcVar5 = *(code **)(*(int *)(param_1 + 0x24) + uVar4 * 0xc);
      uVar2 = param_2;
      if (piVar3[2] != 0) {
        uVar2 = FUN_02011ac8(piVar3[2]);
      }
      (*pcVar5)(uVar2,param_3);
    }
  }
  return;
}

