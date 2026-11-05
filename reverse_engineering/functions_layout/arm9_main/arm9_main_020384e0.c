
/* JUS-CLASS jus_Class_02095c74::vfunc_28 [class-virtual] slot 28 of vtable 02095c74 (own slot, not
   inherited) */

undefined4 jus_Class_02095c74::vfunc_28(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [2];
  
  piVar5 = &local_28;
  uVar2 = 0;
  iVar3 = *param_2 - *param_3;
  if (iVar3 < 0) {
    local_14[0] = -iVar3;
    piVar4 = local_14;
  }
  else {
    local_18 = *param_2 - *param_3;
    piVar4 = &local_18;
  }
  bVar1 = false;
  if (*piVar4 <= *param_4) {
    iVar3 = param_2[1] - param_3[1];
    if (iVar3 < 0) {
      local_1c = -iVar3;
      piVar4 = &local_1c;
    }
    else {
      local_20 = param_2[1] - param_3[1];
      piVar4 = &local_20;
    }
    if (*piVar4 <= *param_4) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    iVar3 = param_2[2] - param_3[2];
    if (iVar3 < 0) {
      piVar5 = &local_24;
      local_24 = -iVar3;
    }
    else {
      local_28 = param_2[2] - param_3[2];
    }
    if (*piVar5 <= *param_4) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

