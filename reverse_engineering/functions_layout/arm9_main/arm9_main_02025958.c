
/* JUS-CLASS jus_Class_020945fc::vfunc_05 [class-virtual] slot 5 of vtable 020945fc (own slot, not
   inherited) */

void jus_Class_020945fc::vfunc_05(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  for (piVar3 = *(int **)(param_1 + 8); (uint)piVar3[2] <= param_2; piVar3 = (int *)*piVar3) {
    param_2 = param_2 - piVar3[2];
  }
  FUN_020288a4(piVar3[param_2 + 3]);
  iVar1 = piVar3[2];
  piVar3[2] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    iVar2 = *piVar3;
    iVar1 = 0;
    if (iVar2 == 0) {
      iVar1 = piVar3[1];
    }
    if (iVar2 != 0 || iVar1 != 0) {
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) = piVar3[1], piVar3 == *(int **)(param_1 + 8))) {
        *(int *)(param_1 + 8) = *piVar3;
      }
      if (((int *)piVar3[1] != (int *)0x0) &&
         (*(int *)piVar3[1] = *piVar3, piVar3 == *(int **)(param_1 + 0xc))) {
        *(int *)(param_1 + 0xc) = piVar3[1];
      }
      iVar1 = FUN_0201a9ec(piVar3);
      if (iVar1 == 0) {
        FUN_0201a958(piVar3,1);
      }
    }
  }
  else {
    for (; param_2 < (uint)piVar3[2]; param_2 = param_2 + 1) {
      piVar3[param_2 + 3] = piVar3[param_2 + 4];
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}

