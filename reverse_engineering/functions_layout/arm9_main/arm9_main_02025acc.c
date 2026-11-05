
/* JUS-CLASS jus_Class_020945fc::vfunc_07 [class-virtual] slot 7 of vtable 020945fc (own slot, not
   inherited) */

void jus_Class_020945fc::vfunc_07(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  piVar2 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    for (uVar3 = 0; uVar3 < (uint)piVar2[2]; uVar3 = uVar3 + 1) {
      (**(code **)(*(int *)piVar2[uVar3 + 3] + 0xc))();
    }
    piVar4 = (int *)*piVar2;
    if (piVar4 == (int *)0x0) break;
    iVar1 = FUN_0201a9ec(piVar2);
    if (iVar1 == 0) {
      FUN_0201a958(piVar2,1);
    }
    piVar2 = piVar4;
  }
  *(int **)(param_1 + 8) = piVar2;
  *(int **)(param_1 + 0xc) = piVar2;
  piVar2[2] = 0;
  return;
}

