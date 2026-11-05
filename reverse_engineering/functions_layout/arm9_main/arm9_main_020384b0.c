
/* JUS-CLASS jus_Class_02095c74::vfunc_27 [class-virtual] slot 27 of vtable 02095c74 (own slot, not
   inherited) */

bool jus_Class_02095c74::vfunc_27(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar2 = *param_2;
  iVar1 = *param_3;
  bVar3 = iVar2 == iVar1;
  if (bVar3) {
    iVar2 = param_2[1];
    iVar1 = param_3[1];
  }
  bVar4 = bVar3 && iVar2 == iVar1;
  if (bVar3 && iVar2 == iVar1) {
    bVar4 = param_2[2] == param_3[2];
  }
  return bVar4;
}

